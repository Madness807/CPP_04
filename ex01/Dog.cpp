#include "Dog.hpp"
#include "Brain.hpp"

// Methodes
void Dog::makeSound() const{
    std::cout << "Woaff" << std::endl;
}
std::string Dog::getType() const{
    return this->_type;
};

//operateur d affectation
Dog &Dog::operator=(const Dog &source){
    if (this != &source)
    {
        Animal::operator=(source);
        delete (this->brain);
        if (source.brain != NULL)
            this->brain = new Brain(*source.brain);
        else
            this->brain = NULL;
    }
    return (*this);
}

// Constructeurs par defaut
Dog::Dog() : Animal("dog"){
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
}
// Constructeur par copie
Dog::Dog(Dog const &other){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other; 
}
// Destructeur
Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}