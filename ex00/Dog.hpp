#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal{
	public:
		// constructeur
		Dog();
		// Constructeur par copie
		Dog(const Dog &source);// implementer dans cpp
		// Destructeur
		virtual ~Dog();

		// Surcharge d opertateur 
		Dog& operator=(const Dog &rhs);// implementer dans cpp

		// Methodes
		void makeSound() const;
		std::string getType() const;
};

#endif