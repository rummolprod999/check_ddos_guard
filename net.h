#ifndef NET_H
#define NET_H

#include <QObject>
#include <QtCore>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>

class Net : public QObject
{
    Q_OBJECT
    QNetworkAccessManager *manager;
public:
    explicit Net(QObject *parent = nullptr);
    void CheckSite(QString url, int count);

signals:

private slots:
    void replyFinished(QNetworkReply *);
};

#endif // NET_H
