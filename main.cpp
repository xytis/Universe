#include <QtGui/QApplication>
#include "mainwindow.h"

#include "Project/projectloader.h"

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Create a project loader:
    ProjectLoader * pMainLoader = new ProjectLoader();

    //If program is opened with parameters:
    QStringList args = a.arguments();
    QString name = args.takeFirst();

    if (!args.isEmpty()) {
        for (auto arg : args) {
            pMainLoader->OpenProject(arg);
        }
    }

    MainWindow w;
    w.AddList(args);
    w.show();

    return a.exec();
}
