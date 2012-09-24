#include "container.h"

Container::Container(Container * pParent)
  : m_pParent(0)
  , m_pChildren() {
  if (pParent) {
    m_pParent = pParent;
    m_pParent->AddChild(this);
  }
}

Container::~Container() {
  for (auto child : m_pChildren) {
    delete child;
  }
  m_pChildren.clear();
}

void Container::AddChild(Container *pChild) {
    m_pChildren.push_back(pChild);
}
