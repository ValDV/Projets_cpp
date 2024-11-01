#include <iostream>
#include <vector>

double addition(std::vector<double>& nombre);
double soustraction(std::vector<double>& nombre, int nombreValeurs);
double multiplication(std::vector<double>& nombre, int nombreValeurs);
double division(double nombre1, double nombre2);
double puissance(double nombre, int exposant);
void ShowMenu();

int main()
{
	int choix, exposant, nombreValeurs;
	double nombre, nombre1, nombre2;
	std::vector<double> Xnombres;

	while (true)
	{
		ShowMenu();

		Xnombres.clear();

		std::cin >> choix;

		if (choix == 6)
		{
			break;
		}

		if (choix == 1 || choix == 2 || choix == 3)
		{
			std::cout << "Donner un nombre de valeurs :";

			std::cin >> nombreValeurs;

			while (nombreValeurs < 2)
			{
				std::cout << "Vous ne pouvez pas donner moins de deux valeurs." << std::endl;
				std::cout << "Redonner un nombre de valeurs :";
				std::cin >> nombreValeurs;
			}

			for (int i = 0; i < nombreValeurs; i++)
			{
				std::cout << "Donner un nombre :";
				std::cin >> nombre;
				Xnombres.push_back(nombre);
			}
		}

		if (choix == 4)
		{
			std::cout << "Donner un premier nombre :";
			std::cin >> nombre1;
			std::cout << "Donner un deuxième nombre :";
			std::cin >> nombre2;
		}

		if (choix == 5)
		{
			std::cout << "Donner un nombre :";
			std::cin >> nombre;
			std::cout << "Donner un exposant :";
			std::cin >> exposant;
		}

		switch (choix)
		{
		case 1:
			for (int i = 0; i < nombreValeurs - 1; i++)
			{
				std::cout << Xnombres[i] << " + ";
			}
			std::cout << Xnombres[nombreValeurs - 1] << " = " << addition(Xnombres) << std::endl;
			break;

		case 2:
			for (int i = 0; i < nombreValeurs - 1; i++)
			{
				std::cout << Xnombres[i] << " - ";
			}
			std::cout << Xnombres[nombreValeurs - 1] << " = " << soustraction(Xnombres, nombreValeurs) << std::endl;
			break;

		case 3:
			for (int i = 0; i < nombreValeurs - 1; i++)
			{
				std::cout << Xnombres[i] << " * ";
			}
			std::cout << Xnombres[nombreValeurs - 1] << " = " << multiplication(Xnombres, nombreValeurs) << std::endl;
			break;

		case 4:
			if (nombre1 == 0 || nombre2 == 0)
			{
				std::cout << "Vous ne pouvez pas faire une division par 0." << std::endl;
				std::cout << "Redonner une autre valeur :";
				std::cin >> nombre2;
			}
			std::cout << nombre1 << " / " << nombre2 << " = " << division(nombre1, nombre2) << std::endl;
			break;

		case 5:
			std::cout << nombre << " ^ " << exposant << " = " << puissance(nombre, exposant) << std::endl;
			break;

		case 6:
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}

double addition(std::vector<double>& nombre)
{
	double result = 0;
	for (double x : nombre)
	{
		result = result + x;
	}
	return result;
}

double soustraction(std::vector<double>& nombre, int nombreValeurs)
{
	double result = nombre[0];
	for (int i = 1; i < nombreValeurs; i++)
	{
		result = result - nombre[i];
	}
	return result;
}

double multiplication(std::vector<double>& nombre, int nombreValeurs)
{
	double result = nombre[0];
	for (int i = 1; i < nombreValeurs; i++)
	{
		result = result * nombre[i];
	}
	return result;
}

double division(double nombre1, double nombre2)
{
	double result = nombre1 / nombre2;
	return result;
}

double puissance(double nombre, int exposant)
{
	double result = nombre;
	for (int i = 1; i < exposant; i++)
	{
		result = result * nombre;
	}
	return result;
}

void ShowMenu()
{
	std::cout << "(1) Addition" << std::endl;
	std::cout << "(2) Soustraction" << std::endl;
	std::cout << "(3) Multiplication" << std::endl;
	std::cout << "(4) Division" << std::endl;
	std::cout << "(5) Puissance" << std::endl;
	std::cout << "(6) Quitter" << std::endl;
	std::cout << "Choisir une operation :";
}