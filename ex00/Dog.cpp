#include "Dog.hpp"

// Methodes
void Dog::makeSound() const{
    std::cout << "Woaff" << std::endl;
}

std::string Dog::getType() const{
    return this->_type;
};

Dog& Dog::operator=(const Dog &rhs){
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}


// Constructeurs && Desctructeur
Dog::Dog() : Animal("dog"){
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &source){
    this->_type = source._type;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}