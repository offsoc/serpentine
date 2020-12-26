#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QProcessEnvironment>
#include <QHeaderView>

void MainWindow::InitializeTable() {
  QTableWidget *table = new QTableWidget();
  table->setObjectName("table");
  this->setCentralWidget(table);
  QStringList labels = {"Name", "Address", "Computer Name", "Stub Name", "Active Window Title"};
  table->setColumnCount(labels.size());
  table->setHorizontalHeaderLabels(labels);
  table->setSelectionBehavior(QAbstractItemView::SelectRows);
  table->setEditTriggers(QAbstractItemView::NoEditTriggers);
  table->horizontalHeader()->setStretchLastSection(true);
  this->table = table;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  this->InitializeTable();
  this->clientFetcher = new ClientFetcher(this, qgetenv("QTSERPENTINE_API_ADDRESS"), this->table);
}

MainWindow::~MainWindow() { delete ui; }
