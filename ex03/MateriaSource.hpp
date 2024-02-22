#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>

class Materiasource {
    public:
        // Constructeurs
        Materiasource ();
        Materiasource (const Materiasource  &source);

        // Destructeur
        ~Materiasource ();

        // Opérateur d'affectation
        Materiasource  &operator=(const Materiasource  &source);

        // Autres méthodes publiques

    private:
        // Attributs privés
};

#endif
