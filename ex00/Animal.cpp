#include "Animal.hpp"

// Methodes

// constructeur par copie

// surcharge d operateur


// Constructeurs && Desctructeur
Animal::Animal() : _type("Animal"){
    std::cout << this->_type << " Constructeur called" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
    std::cout << "Animal " << this->_type << " constructeur called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal " << this->_type << " constructeur called" << std::endl;
}