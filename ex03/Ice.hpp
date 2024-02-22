#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {
    private:
        // Attributs privés
    protected:
        // Attributs proteger
    public:
        // Constructeurs
        Ice();
        Ice(const Ice &source);
        // Destructeur
        ~Ice();

        // Opérateur d'affectation
        //[NomClasse] &operator=(const [NomClasse] &source);


};

#endif /* ![NOM_CLASSE]_HPP */
