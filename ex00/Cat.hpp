#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal{
	public:
		// Constructeurs && Destructeur
		Cat();
		virtual ~Cat();

		// Methodes
		void makeSound() const;
		std::string getType() const;
};

#endif