#ifndef CONTRIBUTOR_HPP_
#define CONTRIBUTOR_HPP_

#include <iostream>
#include <vector>

class Contributor {
    public:
        Contributor();
        ~Contributor();

    protected:
    private:
        std::string _name;
        std::vector <std::string> _langage;
        std::vector <int> _level;
};

#endif /* !CONTRIBUTOR_HPP_ */