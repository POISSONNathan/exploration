#ifndef FORET_CPP
#define FORET_CPP

#include "foret.h"

Foret::Foret() : Lieu() {
    _name = "foret";
    _description ="c'est un lieu paisible sans trop de risque";
    _difficulte = 3;
    _lieuAccess[1]=1;
    _lieuAccess[2]=3;
    _lieuAccess[3]=4;
};

#endif