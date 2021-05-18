#ifndef TENTATIVE_H
#define TENTATIVE_H
#include <iostream>
#include <string>
//#include "Joueur.h"

using namespace std;

class Tentative
{

	//Joueur user;
	string motsaisi;
	int Nbessais;

	public:
	    Tentative(){}
		Tentative( string );
		~Tentative();
		string getmotsaisi()const;
		void setmotsaisi(string);
		/*Joueur getJoueur()const;
		void setJoueur(Joueur);*/
		int getNbessais();
		bool controlesaisie(string);
};
#endif

