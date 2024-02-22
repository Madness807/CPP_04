#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "Amateria.hpp"

class Ice : public Amataria {
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

        // Autres méthodes publiques
};

#endif /* ![NOM_CLASSE]_HPP */
