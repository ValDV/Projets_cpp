#include <iostream>
#include <string>
#include "Personnage.h"
#include "Arme.h"

using namespace std;

Personnage::Personnage()
{
	vie = 100;
	mana = 100;
	arme = Arme("Epee rouille", 10);
}

void Personnage::recevoirDegats(int nombreDegats)
{
	vie -= nombreDegats;

	if (vie < 0)
	{
		vie = 0;
	}
}

void Personnage::attaquer(Personnage& cible)
{
	cible.recevoirDegats(arme.recupererDegats());
}

void Personnage::boirePotionVie(int quantitePotion)
{
	vie += quantitePotion;

	if (vie > 100)
	{
		vie = 100;
	}
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::enVie()
{
	return vie > 0;
}

void Personnage::afficherEtat() const
{
	cout << "Vie : " << vie << endl;
	cout << "Mana : " << mana << endl;
	arme.afficher();
}