#include <iostream>
#include <string>

using namespace std;

int main(){

    int choix;
    
    cout << "Où veux tu aller ? 1 : Dans la foret ? / 2 : Dans la ville ?" << endl;
    cin >> choix;

    if (choix == 1){
        cout << "Vous avez atteint la forêt, bien joué !";
    }

    if (choix == 2){
        cout << "Vous avez atteint la ville, bien joué !";
    }

    return 0;
}