#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include "Arme.h"

class Personnage
{
public:
	Personnage();
	void recevoirDegats(int nombreDegats);
	void attaquer(Personnage& cible);
	void boirePotionVie(int quantitePotion);
	void changerArme(std::string nomNouvellArme, int degatsNouvelleArme);
	bool enVie();
	void afficherEtat() const;

private:
	int vie;
	int mana;
	Arme arme;
};

#endif