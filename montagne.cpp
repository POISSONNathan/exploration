#ifndef MONTAGNE_CPP
#define MONTAGNE_CPP

#include "montagne.h"

Montagne::Montagne() : Lieu() {
    _name = "montagne";
    _description ="c'est une zone en hauteur vous pouvez tomber, faites attention";
    _difficulte = 7;
    _lieuAccess [5,7,8];
};

#endif