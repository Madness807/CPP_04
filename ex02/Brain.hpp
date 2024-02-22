#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(Brain const &other);
        ~Brain();

        // Opérateur d'affectation
        Brain &operator=(const Brain &source);
};

#endif
