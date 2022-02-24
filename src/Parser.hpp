#ifndef PARSER_HPP_
#define PARSER_HPP_

#include "Manager.hpp"

class Parser {
    public:
        Parser(char *file);
        ~Parser();
        std::vector<Contributor> getContributor() {return _contributor;};
        std::vector<Project> getProject() {return _project;};

    protected:
    private:
        std::vector<Contributor> _contributor;
        std::vector<Project> _project;
};

#endif /* !PARSER_HPP_ */