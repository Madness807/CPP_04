#include "Animal.hpp"

// Methodes
std::string Animal::getType() const{
    return this->_type;
}
void Animal::makeSound() const{
    std::cout << "bruit d animal" << std::endl;
}


// surcharge d operateur
Animal& Animal::operator=(const Animal &rhs) {
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    std::cout << "Animal " << this->_type << " copy assignment operator called" << std::endl;
    return *this;
}

// Constructeurs && Desctructeur
Animal::Animal() : _type("Animal"){
    std::cout << this->_type << " Constructeur called" << std::endl;
}

Animal::Animal(Animal const & instance) : _type(instance.getType()){
    std::cout << "copy constructor called" << std::endl;

}

// Constructeur prenant une string
Animal::Animal(std::string type) : _type(type){
    std::cout << "Animal " << this->_type << " constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal " << this->_type << " destructor called" << std::endl;
}