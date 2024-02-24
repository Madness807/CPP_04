#include "Cat.hpp"

// Methodes
void Cat::makeSound() const{
    std::cout << "Miaouuu" << std::endl;
}

std::string Cat::getType() const{
    return this->_type;
};

Cat& Cat::operator=(const Cat &rhs){
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

// Constructeurs && Desctructeur
Cat::Cat() : Animal("cat"){
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &source){
    this->_type = source._type;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}