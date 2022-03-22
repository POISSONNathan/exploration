#include "foret.cpp"
#include "montagne.cpp"
#include "ville.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    Lieu * monLieu;
    int changement = 0;
    int choix;

    for(changement=0;changement<3;changement++){

        if (changement = 1){
        cout << "Où veux tu aller ? 1 : foret / 2 : montagne / 3 : ville" << endl;
        }
        else{
        cout << "Tu vas changer de lieu, où veux tu aller ? 1 : foret / 2 : montagne / 3 : ville" << endl;
        }
        cin >> choix;

        if (choix == 1){
            monLieu = new Foret();
        }
        if (choix == 2){
            monLieu = new Montagne();
        }
        if (choix == 3){
            monLieu = new Ville();
        }
    
        cout << "Vous etes a la " << monLieu -> getName() << ", la difficulté est de " << monLieu->getDifficulte() << ", " << monLieu->getDescription() << ", " << endl;
        cout << "vous pouvez aller aux endroits : " << monLieu->getLieuAccess() << endl; // cette ligne ne fonctionne pas, la fonction est surement fausse pour une raison que j'ignore

        monLieu->changeEndurance(monLieu->getDifficulte());

        cout << "Votre endurance est de" << monLieu.getEndurance() << endl;
    }

    return 0;
}