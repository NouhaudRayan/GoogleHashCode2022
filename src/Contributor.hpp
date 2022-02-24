#ifndef CONTRIBUTOR_HPP_
#define CONTRIBUTOR_HPP_

#include <iostream>
#include <vector>

class Contributor {
    public:
        Contributor(std::string name, std::vector <std::string> langage, std::vector <int> level): _name(name) , _langage(langage) , _level(level) {};
        ~Contributor();
        std::string Getname() {return _name;};
        std::vector <std::string> Getlanguage() {return _langage;};
        std::vector <int> Getlevel() {return _level;};
        void setlevel(int index) {_level[index] +=1;};
    protected:
    private:
        std::string _name;
        std::vector <std::string> _langage;
        std::vector <int> _level;
};

#endif /* !CONTRIBUTOR_HPP_ */