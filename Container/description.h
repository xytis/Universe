#ifndef DESCRIPTION_H
#define DESCRIPTION_H

#include "node.h"
#include "common.h"

#include <string>
#include <boost/serialization/string.hpp>

class CDescription : public CNode
{
public:
    CDescription(std::string sDescription = "", CNode * pParent = NULL);
    virtual ~CDescription();

    virtual const char * Type() const { return "Description"; };

    //Boost serialization
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int version)
    {
        if(version >= 2)
        {

        }
        ar & boost::serialization::base_object<CNode>(*this);
        ar & m_sDesciption;
    }

private:
    std::string m_sDesciption;
};

#endif // DESCRIPTION_H
