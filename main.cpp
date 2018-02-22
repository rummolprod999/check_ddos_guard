#include <QCoreApplication>
#include <QtNetwork/QtNetwork>
#include <QtNetwork/QNetworkAccessManager>
#include "net.h"
using namespace std;
int main(int argc, char *argv[])
{
    int count = 0;
    QString url = "";
    QCoreApplication a(argc, argv);
if(argc < 3){
    fprintf(stdout, "too many arguments\n");
    return 0;
}
else{
    url = argv[1];
    count = atoi(argv[2]);
//    fprintf(stdout, url.c_str());
//    fprintf(stdout, std::to_string(count).c_str());

    //return 0;
}
Net handler;
handler.CheckSite(url, count);
return a.exec();
}

