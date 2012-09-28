#include "project.h"

#include <iostream>
#include <fstream>

Project::Project(bf::path rootPath)
: m_oRootPath(rootPath)
, m_oStream()
{
    std::cout << m_oRootPath << std::endl;
    //Try to open the stream
    if (!bf::exists(m_oRootPath)) {
        std::cout << "File not found" << std::endl;
        //Raise error.
    }
    m_oStream.open(m_oRootPath.c_str());

    m_oStream.close();
}

Project::~Project() {

}
