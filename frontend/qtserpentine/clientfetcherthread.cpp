#include "clientfetcherthread.h"

ClientFetcherThread::ClientFetcherThread(QObject *parent) : QThread(parent)
{

}

void ClientFetcherThread::run() {
    forever {
        emit fetchClientsTimerExpired();
        QThread::sleep(3);
    }
}
