#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>
#include <string>
using namespace std;



class Joueur
{
	string name;
	int score , record ;
	public:
	    Joueur(){}
		Joueur(string a, int i=0,int j=0);
		~Joueur();
		string setName (string);
		string getName();
		void setScore(int);
		int getScore();
		void setRecord(int);
		int getRecord();

	protected:
};

#endif
