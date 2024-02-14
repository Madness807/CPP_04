#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	private:

	protected:
		std::string type;

	public:
		Animal();
		
		~Animal();

		virtual void makeSound(const char cris);
		const char getType();

};

#endif