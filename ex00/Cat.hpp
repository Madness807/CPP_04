#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat {
	private:

	public:
		// Constructeurs && Destructeur
		Cat();
		~Cat();

		// Methodes
		void makeSound() const;
};

#endif