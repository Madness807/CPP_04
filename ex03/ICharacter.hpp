#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter {
    private:
        // Attributs privés
    protected:
        // Attributs proteger
    public:
        // Constructeurs
        ICharacter();
        ICharacter(const ICharacter &source);
        // Destructeur
        virtual ~ICharacter() {}

        // Opérateur d'affectation

        // Autres méthodes publiques
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif