#include "Cat.hpp"
#include "Brain.hpp"

// Methodes
void Cat::makeSound() const{
    std::cout << "Miaouuu" << std::endl;
}
std::string Cat::getType() const{
    return this->_type;
};

//operateur d affectation
Cat &Cat::operator=(const Cat &source){
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
Cat::Cat() : Animal("cat"){
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
}
// Constructeur par copie
Cat::Cat(Cat const &other){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other; 
}
// Destructeur
Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}