#ifndef MANAGER_HPP_
#define MANAGER_HPP_

#include "Project.hpp"
#include "Contributor.hpp"

class Manager {
    public:
        Manager(Contributor contributor, Project project);
        ~Manager();

    protected:
    private:
        Contributor _contributor;
        Project _project;
};

#endif /* !MANAGER_HPP_ */
