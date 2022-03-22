#include "foret.cpp"
#include "montagne.cpp"
#include "ville.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    Lieu * monLieu;


    int choix;
    cout << "Ou veux tu aller ? 1 : foret / 2 : montagne / 3 : ville" << endl;
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


    return 0;
}