#ifndef PROJECT_H
#define PROJECT_H

/**
 * Project class is responsible for parsing main project file, then traversing
 * the file system and creating proxy objects in the project tree. Each proxy
 * object may then be loaded by demand or explicit request.
 * On Save() event, this class is responsible for correct project saving.
 */

#include <boost/filesystem.hpp>
#include <fstream>

#include "Container/container.h"

namespace bf = boost::filesystem;

class Project
{
public:
    Project(bf::path oRootPath);
    ~Project();

    Container *     GetRoot();
private:
    bf::path        m_oRootPath;
    std::fstream    m_oStream;

    bool m_bDirty;
};

#endif // PROJECT_H
