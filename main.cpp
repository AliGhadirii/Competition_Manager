#include "mainwindow.h"
#include <QApplication>
#include"organizer.h"
#include "tournament.h"
organizer f;
organizer p;
organizer b;
organizer temp;
bool t_check;
tournament t;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
