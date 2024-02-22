#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria{
    private:
        // Attributs privés
    protected:
        // Attributs proteger
    public:
        // Constructeurs
        Cure();
        Cure(const Cure &source);
        // Destructeur
        ~Cure();

        // Opérateur d'affectation
        //[NomClasse] &operator=(const [NomClasse] &source);

        // Autres méthodes publiques
};

#endif 
