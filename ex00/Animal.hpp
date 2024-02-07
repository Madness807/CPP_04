#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	public:
		// Constructeurs && Destructeur
		Animal();
		Animal(const std::string &name);
		~Animal();

		//Methodes

	private:
		//Attributs
		std::string name;

};

//Autres fonctions


#endif