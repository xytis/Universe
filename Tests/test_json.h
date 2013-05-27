#ifndef TEST_JSON_H
#define TEST_JSON_H

#include <QObject>
#include <QtTest/QtTest>

class Test_Json : public QObject
{
    Q_OBJECT
    
private slots:
    void initTestCase();
    void read_write();
    void cleanupTestCase();
};

#endif // TEST_JSON_H
