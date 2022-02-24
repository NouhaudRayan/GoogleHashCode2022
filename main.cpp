#include "Parser.hpp"

int main(int ac, char **av)
{
    Parser parser;
    Manager manager(parser.getContributor(), parser.getProject());
}