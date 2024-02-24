#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal* animals[4];

    // Remplissage avec des Dog et Cat
    for(int i = 0; i < 2; ++i) {
        animals[i] = new Dog();
    }
    for(int i = 2; i < 4; ++i) {
        animals[i] = new Cat();
    }
    // Nettoyage
    for(int i = 0; i < 4; ++i) {
        delete animals[i];
    }
    return 0;
}
