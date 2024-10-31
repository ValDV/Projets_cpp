#include "Arme.h"

using namespace std;

Arme::Arme() : nom("Epee rouillee"), degats(10)
{

}

Arme::Arme(string nom, int degats) : nom(nom), degats(degats)
{

}

void Arme::changer(string nom, int degats)
{
	nom = nom;
	degats = degats;
}

void Arme::afficher() const
{
	cout << "Arme : " << nom << "(Degats : " << degats << ")" << endl;
}

std::string Arme::recupererNom()
{
	return nom;
}

int Arme::recupererDegats()
{
	return degats;
}
