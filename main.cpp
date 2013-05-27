#include "mainwindow.h"
#include <QApplication>

#include "json_spirit.h"

#include <iostream>
#include <fstream>
#include <map>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    js::mValue value;
    js::mObject object;
    object[std::string("name")] = "Example";
    object[std::string("description")] = "Local";

    std::ofstream fout("../Universe/Content/example.universe");
    if (!fout) {
        std::cerr << "File not opened!" << std::endl;
        return 1;
    }

    js::write( object, fout, js::pretty_print );

    fout.close();

    //Test json
    std::ifstream fin("../Universe/Content/example.universe");
    if (!fin) {
        std::cerr << "File not opened!" << std::endl;
        return 1;
    }


    js::read( fin, value );

    object = value.get_obj();

    fin.close();


    
    return a.exec();
}
