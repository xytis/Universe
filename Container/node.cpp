#include "node.h"

CNode::CNode(CNode * pParent)
  : m_pParent(0)
  , m_pChildren() {
  if (pParent) {
    m_pParent = pParent;
    m_pParent->AddChild(this);
  }
}

CNode::~CNode() {
    //Some explaining:
    //In C++11 for loop with folowing signature
    //for (std::container<type>::iterator i = container.begin();
    //      i != container.end();
    //      i++) { }
    //can be abreviated to code stated below.

  for (auto child : m_pChildren) {
    delete child;
  }
  m_pChildren.clear();
}

void CNode::AddChild(CNode *pChild) {
    m_pChildren.push_back(pChild);
}
