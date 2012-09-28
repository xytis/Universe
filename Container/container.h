#ifndef CONTAINER_H
#define CONTAINER_H

// Base class, used when traversing file system, to fill up world informations

#include <QtCore/QList>

class Container
{
public:
    Container(Container * pParent = 0);
    virtual ~Container();

protected:
    void AddChild(Container * pChild);

private:
    Container * m_pParent;
    QList<Container *> m_pChildren;


};

#endif // CONTAINER_H
