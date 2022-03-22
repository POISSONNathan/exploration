#ifndef LIEU_H
#define LIEU_H

#include <string>
#include <vector>


using namespace std;

class Lieu{

    protected:
        string _name;
        string _description;
        int _difficulte;
        vector<int> _lieuAccess;
        int _endurance = 100;

    public:
        Lieu();
        Lieu(string name,string description,int difficulte,vector<int> _lieuAccess);
        string getName(); 
        string getDescription();
        int getDifficulte();
        int changeLieu();
        vector<int> getLieuAccess();
        int getEndurance();
        void changeEndurance(int valeur);


   
        


};

#endif