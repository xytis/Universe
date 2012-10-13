#ifndef DESCRIPTION_H
#define DESCRIPTION_H

#include "node.h"
#include "common.h"

#include <string>
#include <boost/serialization/string.hpp>

class CDescription : public CNode
{
public:
    CDescription(std::string sDescription = "", CNode * pParent = nullptr);
    virtual ~CDescription();

    virtual const char * Type() const { return "Description"; };
    virtual const char * Description() const { return (std::string("Containting: ") + m_sDesciption).c_str(); };

    //Boost serialization
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int version)
    {
        if(version >= 2)
        {

        }
        //ar & boost::serialization::base_object<CNode>(*this);
        ar & BOOST_SERIALIZATION_BASE_OBJECT_NVP(CNode);
        ar & BOOST_SERIALIZATION_NVP(m_sDesciption);
    }

private:
    std::string m_sDesciption;
};

#endif // DESCRIPTION_H
