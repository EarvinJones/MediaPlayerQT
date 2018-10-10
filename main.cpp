#include "login.h"
#include <QApplication>
#include"QtWidgets"
#include"QtSql"

int main(int argc, char *argv[])
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("tdb");
    db.setUserName("EarvinJones");
    db.setPassword("1064");
//    if(db.open())qDebug()<<"success";
//    else qDebug()<<db.lastError();

    QApplication a(argc, argv);
    login w;
    w.show();

    return a.exec();
}
