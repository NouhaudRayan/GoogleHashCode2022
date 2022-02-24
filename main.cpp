#include "src/Parser.hpp"

int main(int ac, char **av)
{
    Parser parser(av[1]);
    Manager manager(parser.getContributor(), parser.getProject());
}