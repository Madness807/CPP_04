#include "WrongAnimal.hpp"

// Methodes
std::string WrongAnimal::getType() const{
    return this->_type;
}
void WrongAnimal::makeSound() const{
    std::cout << "bruit de WRONG ANIMAL" << std::endl;
}

// surcharge d operateur
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs) {
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    std::cout << "WrongAnimal " << this->_type << " copy assignment operator called" << std::endl;
    return *this;
}

// Constructeurs && Desctructeur
WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
    std::cout << this->_type << " Constructeur called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & instance) : _type(instance.getType()){
    std::cout << "copy constructor called" << std::endl;
}

// Constructeur prenant une string
WrongAnimal::WrongAnimal(std::string type) : _type(type){
    std::cout << "WrongAnimal " << this->_type << " constructeur called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal " << this->_type << " destructor called" << std::endl;
}