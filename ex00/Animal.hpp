#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	private:

	protected:
		std::string type;

	public:

		// Constructeur
		Animal();
		Animal(std::string type);
		
		virtual ~Animal();

		// Surcharge d operateur
		Animal& operator=(const Animal &rhs);

		// Methodes
		virtual void makeSound(const char cris);
		//Getters
		std::string getType() const;
};

#endif