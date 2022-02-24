#ifndef MANAGER_HPP_
#define MANAGER_HPP_

#include "Project.hpp"
#include "Contributor.hpp"
#include <fstream>
#include <string>

class Manager {
    public:
        Manager(std::vector<Contributor> contributor, std::vector<Project> project);
        ~Manager();
        void Writefile();
        void totaltime();
        void doAssignements();
    protected:
    private:
        std::vector<Contributor> _contributor;
        std::vector<Project> _project;
        int _totalday = 0;
        std::vector<int> _pointProject;
};

#endif /* !MANAGER_HPP_ */
