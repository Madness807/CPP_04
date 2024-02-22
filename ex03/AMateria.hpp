#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
// Inclure d'autres bibliothèques nécessaires

class Amataria {
    private:
        std::string _type;

    public:
        // Constructeurs
        Amataria();
        Amataria(const Amataria &source);
        // Destructeur
        ~Amataria();

        // Opérateur d'affectation
        //Ametaria &operator=(const [Ametaria] &source);

        // Autres méthodes publiques
        void use();
        void clone();

};

#endif /* ![NOM_CLASSE]_HPP */
