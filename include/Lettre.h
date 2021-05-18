#ifndef LETTRE_H
#define LETTRE_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;
enum Color { rouge, jaune, blanc };



class Lettre
{   char val;
    int Position;
    Color Couleur;
    public:
        Lettre(){}
        Lettre(char,int,Color);
        virtual ~Lettre();
        int getPosition()const;
        Color getCouleur()const;
        char getval(){return val;}
        void setval(char x){val=x;}
        void setPosition(int );
        void setCouleur(Color );
        void Comparer(Lettre );


};

#endif // LETTRE_H
