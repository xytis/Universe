#include "projectloader.h"

#include "project.h"

#include <QtCore/QString>

#include <boost/filesystem.hpp>
namespace bf = boost::filesystem;

ProjectLoader::ProjectLoader()
{
}

ProjectLoader::~ProjectLoader()
{
    for (auto project : m_lOpenProjects) {
        delete project;
    }
    m_lOpenProjects.clear();
}

void ProjectLoader::OpenProject(QString path) {
    bf::path oPath = path.toStdString();
    m_lOpenProjects.append(new Project(oPath));
}
