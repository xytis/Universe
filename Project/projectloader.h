#ifndef PROJECTLOADER_H
#define PROJECTLOADER_H

#include <QtCore/QList>

class Project;

class ProjectLoader
{
public:
    ProjectLoader();
    ~ProjectLoader();

    void OpenProject(QString path);

private:
    QList<Project *> m_lOpenProjects;
};

#endif // PROJECTLOADER_H
