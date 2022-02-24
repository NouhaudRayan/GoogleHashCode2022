#include "src/Parser.hpp"

int main(int ac, char **av)
{
    Parser parser(av[1]);
    std::vector<Contributor> _Contributor = {
    Contributor("Anna", {"C++", "HTML"}, {2,0}),
    Contributor("Bob", {"C++","HTML", "CSS"}, {0,5,5}),
    Contributor("Maria", {"C++","HTML", "CSS", "Python"}, {0,0,0,3})
    };
    std::vector<Project>_project = {
    Project("WebServer", 7, 10, 7 , {"HTML", "C++"}, {3, 2}),
    Project("Logging", 5, 10, 5 , {"C++"}, {3}),
    Project("WebChat", 10, 20, 20 , {"Python", "HTML"}, {3, 3})
    };
    Manager manager(_Contributor, _project);
}

        // std::string _name;
        // int _duration;
        // int _score;
        // int _nbContributors;
        // std::vector <std::string> _langage;
        // std::vector <int> _level;