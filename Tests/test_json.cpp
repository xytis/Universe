#include "test_json.h"

#include "json_spirit.h"

#include <iostream>
#include <fstream>
#include <map>

#include <stdio.h>

const char * filename = "test.universe";

void Test_Json::initTestCase() {

}

void Test_Json::read_write() {
    {
        js::mObject object;
        object[std::string("name")] = "Example";
        object[std::string("description")] = "Local";

        std::ofstream fout(filename);
        if (!fout) {
            QFAIL("File not opened!");
        }

        js::write( object, fout, js::pretty_print );

        fout.close();
    }
    {
        js::mValue value;
        js::mObject object;
        std::ifstream fin(filename);
        if (!fin) {
            QFAIL("File not opened!");
        }

        js::read( fin, value );

        object = value.get_obj();

        QCOMPARE(object["name"].get_str(), std::string("Example"));
        QCOMPARE(object["description"].get_str(), std::string("Local"));

        fin.close();
    }
}

void Test_Json::cleanupTestCase() {
    remove(filename);
}


QTEST_MAIN(Test_Json)
#include "moc_test_json.cpp"
