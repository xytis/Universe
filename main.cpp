#include "mainwindow.h"
#include <QApplication>

#include "json_spirit.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
