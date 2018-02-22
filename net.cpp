#include "net.h"

Net::Net(QObject *parent) : QObject(parent)
{

}
void Net::replyFinished(QNetworkReply *reply)
{
qInfo() << QString::fromUtf8(reply->readAll());
qInfo() << "\n\n\n";
}

void Net::CheckSite(QString url, int count)
{
  QUrl qrl(url);
  qInfo() << url;
  manager = new QNetworkAccessManager(this);
  connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
  for(int i = 0; i < count; i++){
      try{
          manager->get(QNetworkRequest(qrl));
      }
      catch(const std::exception& e){
          qInfo() << e.what();

      }
      catch(...){

      }

  }

}
