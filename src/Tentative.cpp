#include "Tentative.h"
#include <iostream>
#include <string>
//#include "Joueur.h"
using namespace std;


Tentative::Tentative(string mot )
{
setmotsaisi(mot);
}
/////////////////////////////
Tentative::~Tentative()
{

}

/////////////////////////////
int Tentative::getNbessais(){
	return Nbessais;
}
/////////////////////////////
bool Tentative::controlesaisie(string mot){
    bool test=true;
    int t
    for (int i=0;i<7;i++){

        if ((isalpha(mot[i]))==false){test=false;break;}
    }
	if ( (mot.length() == motsaisi.length()) )&&(test==true){
		return true;
    }
}


/////////////////////////////
void Tentative::setmotsaisi(string mot){
	motsaisi=mot;
}
/////////////////////////////
string Tentative::getmotsaisi()const{
	return motsaisi;
}


/////////////////////////////


