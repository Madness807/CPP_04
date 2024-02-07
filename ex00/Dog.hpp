#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

class Cat {
	public:
		// Constructeurs && Destructeur
		Cat();
		Cat(const std::string &name);
		~Cat();

		//Methodes

	private:
		//Attributs
		std::string name;

};

//Autres fonctions


#endif