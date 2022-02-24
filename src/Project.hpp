#ifndef PROJECT_HPP_
#define PROJECT_HPP_

#include <iostream>
#include <vector>

class Project {
    public:
        Project();
        ~Project();

    protected:
    private:
        std::string _name;
        int _duration;
        int _score;
        int _nbContributors;
        std::vector <std::string> _langage;
        std::vector <int> _level;
};

#endif /* !PROJECT_HPP_ */