#ifndef NODE_H
#define NODE_H

// Base class, used when traversing file system, to fill up world informations

#include <list>
#include <iostream>
#include <iomanip>
#include "common.h"

#include <boost/serialization/list.hpp>

class CDescription;

class CNode
{
public:
    CNode(CNode * pParent = NULL);
    virtual ~CNode();

    virtual const char * Type() const { return "Generic"; };

    //Boost serialization
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int version)
    {
        //Here all derived class types should be registered.
        ar.template register_type<CDescription>();
        //ar.register_type(static_cast<CDescription *>(NULL));
        if(version >= 2)
        {

        }
        ar & m_pParent;
        ar & m_pChildren;
    }

    //Debug output
    friend std::ostream & operator << (std::ostream & out, const CNode & object) {
        int width = out.width() + 2;
        out << '\n' << std::setw(width) << ' ';
        out << object.Type() << ' ';
        out << &object;
        for(auto child : object.m_pChildren){
            out << std::setw(width) << (*child);
        }
        return out;
    }

protected:
    void AddChild(CNode * pChild);

private:
    CNode * m_pParent;
    std::list<CNode *> m_pChildren;
};

BOOST_CLASS_VERSION(CNode, 0)

#endif // NODE_H
