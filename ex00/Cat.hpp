#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal{
	public:
		// Constructeurs
		Cat();
		// Constructeur par copie
		Cat(const Cat &source);// implementer dans cpp
		// Destructeur
		virtual ~Cat();

		// Surcharge d opertateur 
		Cat& operator=(const Cat &rhs);// implementer dans cpp

		// Methodes
		void makeSound() const;
		std::string getType() const;
};

#endif