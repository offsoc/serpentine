#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "clientfetcher.h"

#include <QMainWindow>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTableWidget *table;
    ClientFetcher *clientFetcher;
    void InitializeTable();
};
#endif // MAINWINDOW_H
