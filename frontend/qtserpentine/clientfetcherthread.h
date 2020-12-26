#ifndef CLIENTFETCHERTHREAD_H
#define CLIENTFETCHERTHREAD_H

#include <QThread>

class ClientFetcherThread : public QThread
{
    Q_OBJECT
public:
    explicit ClientFetcherThread(QObject *parent = nullptr);

signals:
    void fetchClientsTimerExpired();

protected:
    void run();

};

#endif // CLIENTFETCHERTHREAD_H
