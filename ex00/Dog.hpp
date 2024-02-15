#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		virtual ~Dog();

		// Methodes
		void makeSound() const;
		std::string getType() const;
};

#endif