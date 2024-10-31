#include <iostream>
#include "Personnage.h"

using namespace std;

int main()
{
	Personnage David, Goliath;

	Goliath.attaquer(David);
	David.boirePotionVie(20);
	Goliath.attaquer(David);
	David.attaquer(Goliath);
	Goliath.changerArme("Double hache tranchante", 40);
	Goliath.attaquer(David);

	cout << "David" << endl;
	David.afficherEtat();
	cout << endl << "Goliath" << endl;
	Goliath.afficherEtat();

	return 0;
}