#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *brain;
	
	public:
		Dog();
		Dog(Dog const &other);
		virtual ~Dog();

		// Methodes
		void makeSound() const;
		std::string getType() const;

		// Opérateur d'affectation
        Dog &operator=(const Dog &source);
};

#endif