#include "WrongCat.hpp"

// Methodes
void WrongCat::makeSound() const{
    std::cout << "je suis un faux chat" << std::endl;
}

std::string WrongCat::getType() const{
    return this->_type;
};

// Constructeurs && Desctructeur
WrongCat::WrongCat(){
    this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}