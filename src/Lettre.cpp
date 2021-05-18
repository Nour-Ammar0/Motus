#include "Lettre.h"
#include <string>
#include <iostream>

using namespace std;

Lettre::Lettre(char x,int pos,Color coul=blanc):val(x),Position(pos),Couleur(coul)
{

    //ctor
}
/////////////////////////////
Lettre::~Lettre()
{
    //dtor
}
/////////////////////////////
int Lettre ::getPosition()const
{
    return Position;
}
/////////////////////////////
Color Lettre ::getCouleur()const
{
    return Couleur;
}
/////////////////////////////
void Lettre ::setPosition(int a)
{
    Position=a;
}
/////////////////////////////
void Lettre ::setCouleur(Color b)
{
    Couleur=b;
}
/////////////////////////////
void Lettre ::Comparer(Lettre y)
{
    if  ((Position==y.Position)&&(val==y.val)) {Couleur=rouge;}
    if  ((val==y.val)&&(Position!=y.Position)) Couleur=jaune;
    if  ((val!=y.val)&&(Couleur!=jaune)) Couleur=blanc;
}

