#include "project.h"

#include "Container/node.h"
#include "Container/description.h"

#include <iostream>
#include <fstream>

#include <boost/config.hpp>
#if defined(BOOST_NO_STDC_NAMESPACE)
namespace std{
    using ::remove;
}
#endif

#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>


Project::Project(bf::path rootPath)
: m_oRootPath(rootPath)
, m_oStream()
, m_oRoot(NULL)
{
    std::cout << m_oRootPath << std::endl;
    std::cout << m_oRootPath.branch_path() << std::endl;
    //Try to open the stream
    if (!bf::exists(m_oRootPath)) {
        std::cout << "File not found" << std::endl;
        //Raise error.
    }

    CNode * temp = new CDescription("Random words", &m_oRoot);
    temp = new CNode(temp);
    temp = new CNode(&m_oRoot);

    {
        std::ofstream ofs(m_oRootPath.c_str());
        boost::archive::xml_oarchive oa(ofs);
        // write class instance to archive
        oa << BOOST_SERIALIZATION_NVP(m_oRoot);
        // archive and stream closed when destructors are called
    }

    CNode copy;
    {
        std::ifstream ifs(m_oRootPath.c_str());
        boost::archive::xml_iarchive ia(ifs);
        // write class instance to archive
        ia >> BOOST_SERIALIZATION_NVP(copy);
        // archive and stream closed when destructors are called
    }

    std::cout << m_oRoot << std::endl;
    std::cout << copy << std::endl;




}

Project::~Project() {

}
