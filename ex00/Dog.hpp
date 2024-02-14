#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal{
	private:

	public:
		Dog();
		~Dog();

		// Methodes
		void makeSound() const;

};

#endif