/*
** EPITECH PROJECT, 2022
** GoogleHashCode2022
** File description:
** Managet
*/

#include "Manager.hpp"
Manager::Manager(std::vector<Contributor> contributor, std::vector<Project> project)

{
    _contributor = contributor;
    _project = project;
    totaltime();
    doAssignements();
    Writefile();
}

void Manager::totaltime()
{
    for (int i = 0; i < _project.size(); i++) {
        _totalday  = _totalday + _project[i].getDuration();
    }
}

void Manager::doAssignements()
{
   _pointProject.reserve(100);
    std::vector<std::string> needComp;
    needComp.reserve(100);
   int nc = 0;
   int pp = 0;
   int nb = 0;
   int count;
    for (int p = 0; p < _project.size(); p++) {
        for (int y = 0; y < _project[p].Getlevel().size(); y++) {
            _pointProject[pp] = _project[p].Getlevel()[y];
            needComp[nc] = _project[p].Getlanguage()[y];
            pp++;
            nc++;
        }
        int cs_n = 0;
        std::cout << "---" << _project[p].getName() << "---" << std::endl;
        for (int i = 0; i < _project[p].Getlanguage().size(); i++) 
            for (int cs = 0; cs < _contributor.size() - 1; cs++){
                for (int cl = 0; cl < _contributor[cs].Getlanguage().size(); cl++) {
                    if (_contributor[cs].Getlanguage()[cl].compare(_project[p].Getlanguage()[i]) == 0 &&
                        _contributor[cs].Getlevel()[cl] >= _project[p].Getlevel()[i]) {
                  std::cout << _contributor[cs].Getname() << " [OK for] " << _contributor[cs].Getlanguage()[cl]
                         << _project[p].getName()[p]
                         << " have " << _contributor[cs].Getlevel()[cl]
                         << " need " << _project[p].Getlevel()[i] << std::endl;
                            _contributor[cs].setlevel(cl);
                            break;
                    }
                }
        }
            _totalday -= _project[p].getDuration();
            std::cout << _totalday << std::endl;
        nb = 0;
    }
    
}

void Manager::Writefile()
{
    std::ofstream myfile;
    myfile.open("submit/test.txt");
    myfile << _project.size() << std::endl;
    for (int i = 0; i < _project.size(); i++) {
            myfile << _project[i].getName() << std::endl;
    }
    myfile << _totalday << std::endl;
    myfile.close();
}

Manager::~Manager()
{
}


    // for (int i = 0; i < _contributor.size(); i++)
    //     for (int y = 0; y < _contributor[i].Getlanguage().size(); y++)
    //         std::cout << _contributor[i].Getname() << " "<< _contributor[i].Getlanguage()[y] << std::endl;




//Submission file Description
// 3 == three projects are planned

// WebServer == assignments for project WebServer

// Bob Anna == Bob → first role, Anna → second role

// Logging == assignments for project Logging

// Anna == Anna → first role

// WebChat == assignments for project WebChat

// Maria Bob == Maria → first role, Bob → second role
