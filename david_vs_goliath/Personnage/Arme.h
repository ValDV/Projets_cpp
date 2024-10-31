#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
public:
	Arme();
	Arme(std::string nom, int degats);
	void changer(std::string nom, int degats);
	void afficher() const;
	std::string recupererNom();
	int recupererDegats();

private:
	std::string nom;
	int degats;
};

#endif