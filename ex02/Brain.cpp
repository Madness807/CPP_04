#include "Brain.hpp"

// Operateur d affectation
Brain &Brain::operator=(const Brain &source){
    if (this != &source) {

        for (int i = 0; i < 100; i++)
            this->ideas[i] = source.ideas[i];
    }
    return *this;
}

//constructeur
Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}
//constructeur par copie
Brain::Brain(Brain const &other){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other; 
}
//destructeur
Brain::~Brain(){
    std::cout << "Brain default destructor called" << std::endl;
}
