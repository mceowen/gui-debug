#include <QCoreApplication>
#include <QDebug>
#include <BenLib.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    BenLib bl;
    bl.dick = 1000;

    qDebug() << "Did it!" << bl.dick << endl;
    qDebug() << "Did it not!" <<  bl.setValue((uint32_t)1000) << endl;
    qDebug() << "Did it not!" <<  bl.setValue((uint32_t)1000) << endl;
    qDebug() << "Did it not!" <<  bl.setValue((uint32_t)1000) << endl;
    qDebug() << "Did it not!" <<  bl.setValue((uint32_t)1000) << endl;
    qDebug() << "Did it not!" <<  bl.setValue((uint32_t)1000) << endl;
    qDebug() << "Did it not!" <<  bl.setValue((uint32_t)1000) << endl;
    qDebug() << "Will it?" << globalSet(88) << endl;

    return a.exec();
}
