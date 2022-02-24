#ifndef PARSER_HPP_
#define PARSER_HPP_

#include "Manager.hpp"

class Parser {
    public:
        Parser();
        ~Parser();
        Contributor getContributor() {return _contributor;};
        Project getProject() {return _project;};

    protected:
    private:
        Contributor _contributor;
        Project _project;
};

#endif /* !PARSER_HPP_ */