#ifndef CLIENTFETCHER_H
#define CLIENTFETCHER_H

#include <QObject>
#include <QTableWidget>
#include <QtNetwork/QNetworkAccessManager>

class ClientFetcher : public QObject
{
    Q_OBJECT
public:
    explicit ClientFetcher(QObject *parent = nullptr, QString apiAddress = "127.0.0.1:8080", QTableWidget *table = nullptr);
    QString apiAddress;
    QNetworkAccessManager *networkManager;

public slots:
    void fetchClients();

private:
    QTableWidget *table;
    void run();
};

#endif // CLIENTFETCHER_H
