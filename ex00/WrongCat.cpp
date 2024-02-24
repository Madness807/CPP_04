#include "WrongCat.hpp"

// Methodes
void WrongCat::makeSound() const{
    std::cout << "je suis un faux chat" << std::endl;
}
std::string WrongCat::getType() const{
    return this->_type;
};

WrongCat& WrongCat::operator=(const WrongCat &rhs){
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

// Constructeurs && Desctructeur
WrongCat::WrongCat(){
    this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &source){
    this->_type = source._type;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}