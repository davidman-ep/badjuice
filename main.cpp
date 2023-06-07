#include "mainwindow.h"
#include <QSplashScreen>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/recursos/icono"));
    QSplashScreen *splash=new QSplashScreen;
    splash->setPixmap(QPixmap(":/recursos/splashp.png"));
    splash->show();
    MainWindow w;
    QTimer::singleShot(200,splash,SLOT(close()));
    QTimer::singleShot(100,&w,SLOT(show()));
    return a.exec();
}

