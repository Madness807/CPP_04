#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string _type;

	public:

		// Constructeur par default
		WrongAnimal();
		// Constructeur prenant une string
		WrongAnimal(std::string type);
		// Constructeur par copie
		WrongAnimal(WrongAnimal const & instance);
		// Destructeur
		~WrongAnimal();

		// Surcharge d operateur
		WrongAnimal& operator=(const WrongAnimal &rhs);

		//Getters
		std::string getType() const;

		// Methodes
		void makeSound() const;
};

#endif