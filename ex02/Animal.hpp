#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string _type;

	public:

		// Constructeur par default
		Animal();
		// Constructeur prenant une string
		Animal(std::string type);
		// Constructeur par copie
		Animal(Animal const & instance);
		// Destructeur
		virtual ~Animal();

		// Surcharge d operateur
		Animal& operator=(const Animal &rhs);

		//Getters
		virtual std::string getType() const;

		// Methodes
		virtual void makeSound() const = 0;
};

#endif