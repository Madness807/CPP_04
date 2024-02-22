#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria {
    protected:
        std::string _type;

    public:
        // Constructeurs
        AMateria();
        AMateria(std::string const & type);
        // Destructeur
        ~AMateria();

        // Opérateur d'affectation
        //Ametaria &operator=(const [Ametaria] &source);

        // Autres méthodes publiques
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        std::string const & getType() const;

};

#endif



