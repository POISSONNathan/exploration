#ifndef LIEU_CPP
#define LIEU_CPP

#include "lieu.h"
#include <iostream>

    Lieu::Lieu(): _name("foret"),_description("vous etes a la foret"),_difficulte(3){}
    Lieu::Lieu(string name,string description,int difficulte,vector<int> lieuAccess) : _description(description),_difficulte(difficulte){}

    string Lieu::getName(){ 
        return _name;
    } 

    string Lieu::getDescription(){ 
        return _description;
    } 

    int Lieu::getDifficulte(){ 
        return _difficulte;
    } 

    vector<int> Lieu::getLieuAccess(){
        return _lieuAccess;
    }

    int Lieu::getEndurance(){
        return _endurance;
    }

    void Lieu::changeEndurance(int valeur){
        _endurance -= valeur;
    }

#endif