#include "description.h"

CDescription::CDescription(std::string sDescription, CNode * pParent)
    : CNode(pParent)
    , m_sDesciption(sDescription)
{

}

CDescription::~CDescription() {

}
