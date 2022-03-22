#include <iostream>
#include <string>

using namespace std;

int main(){

    string choix;

    cout << "Où veux tu aller ? 1 : foret / 2 : ville" << endl;
    cin >> choix;

    if (choix == "foret"){
        cout << "Vous avez atteint la forêt, bien joué !";
    }

    if (choix == "ville"){
        cout << "Vous avez atteint la ville, bien joué !";
    }

    return 0;
}