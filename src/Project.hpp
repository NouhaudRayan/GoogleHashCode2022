#ifndef PROJECT_HPP_
#define PROJECT_HPP_

#include <iostream>
#include <vector>

class Project {
    public:
        Project(std::string name, int duration, int score, int nbContributors, std::vector <std::string> _langage, std::vector <int> level)
        : _name(name), _duration(duration), _score(score), _nbContributors(nbContributors), _langage(_langage), _level(level) {};
        ~Project();
        std::string getName() {return _name;};
        int getDuration() {return _duration;};
        int getScore() {return _score;};
        int getNbcontributor() {return _nbContributors;};
        std::vector <std::string> Getlanguage() {return _langage;};
        std::vector <int> Getlevel() {return _level;};
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