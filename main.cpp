#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <iostream>

void m(int *y);
typedef int entero ;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x=5;
    int *c;
    c=&x;

    entero s=10;

    qDebug()<< *c;
    qDebug()<<s;


    return 0;
}

void m(int *y){
    *y=5;
}
