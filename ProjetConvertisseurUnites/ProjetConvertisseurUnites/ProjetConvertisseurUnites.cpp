/*
########## Projet : Convertisseur d'unités ##########

Ecrire plusieurs fonctions :
- main() : Fonction principale pour gérer le flux du programme.
- ShowMenu() : Afficher les choix de catégories (température, distance, poids) et gérer la sortie du programme.
- ShowSubMenu() : Afficher les choix d'unités de chaque catégorie (par exemple, Celsius à Fahrenheit pour la température).
- convertTemperature() : Conversion entre Celsius, Fahrenheit et Kelvin.
- convertDistance() : Conversion entre kilomètres, miles et mètres.
- convertWeight() : Conversion entre kilogrammes, livres et grammes.

Définir les paramètres de chaque fonctions

Contraintes :
- Utiliser uniquement iostream
- Utiliser des double  sauf pour les choix qui seront en int
- Les fonctions doivent retourner le résultat de conversion sans l'afficher
- Prévoir une option pour arrêter le programme dans le menu principal

Attention :
- S'assurer que les unités sont correctes pour chaque conversion.
- Afficher des messages d’erreur pour les choix invalides.

Bonus :
- Effacer la console après chaque conversion pour afficher le résultat en propre.
- Ajouter des conversions supplémentaires comme les unités de temps ou de volume.
*/

#include <iostream>

void ShowMenu();
/*void ShowSubMenu();
double convertTemperature();
double convertDistance();
double convertWeight();*/

int main()
{
	int premierChoix;

	while (true)
	{
		ShowMenu();

		std::cin >> premierChoix;

		if (premierChoix == 4)
		{
			break;
		}

		/*switch (premierChoix)
		{
		case 1 :

			break;

		case 2 :

			break;

		case 3 :

			break;

		case 4:
			break;
		}
		system("pause");
		system("cls");*/
	}
	return 0;
}

void ShowMenu()
{
	std::cout << "(1) Convertir une temperature" << std::endl;
	std::cout << "(2) Convertir une distance" << std::endl;
	std::cout << "(3) Convertir un poids" << std::endl;
	std::cout << "(4) Quitter" << std::endl;
	std::cout << "Choisir une conversion a effectuer :";
}

/*int ShowSubMenu()
{

}

double convertTemperature()
{

}

double convertDistance()
{

}

double convertWeight()
{

}*/
