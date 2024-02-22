#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(Cat const &other);
		virtual ~Cat();

		// Methodes
		void makeSound() const;
		std::string getType() const;

		// Opérateur d'affectation
        Cat &operator=(const Cat &source);
};

#endif