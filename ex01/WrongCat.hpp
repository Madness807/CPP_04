#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		// Constructeurs
		WrongCat();
		// Constructeur par copie
		WrongCat(const WrongCat &source);// implementer dans cpp
		// Destructeur
		~WrongCat();

		// Surcharge d opertateur 
		WrongCat& operator=(const WrongCat &rhs);// implementer dans cpp

		// Methodes
		void makeSound() const;
		std::string getType() const;
};

#endif