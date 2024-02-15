#include "Dog.hpp"

// Methodes
void Dog::makeSound() const{
    std::cout << "Woaff" << std::endl;
}

std::string Dog::getType() const{
    return this->_type;
};

// Constructeurs && Desctructeur
Dog::Dog() : Animal("dog"){
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}