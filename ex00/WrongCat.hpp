#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		// Constructeurs && Destructeur
		WrongCat();
		~WrongCat();

		// Methodes
		void makeSound() const;
		std::string getType() const;
};

#endif