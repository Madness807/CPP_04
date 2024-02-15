#include "Cat.hpp"

// Methodes
void Cat::makeSound() const{
    std::cout << "Miaouuu" << std::endl;
}

std::string Cat::getType() const{
    return this->_type;
};

// Constructeurs && Desctructeur
Cat::Cat() : Animal("cat"){
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}