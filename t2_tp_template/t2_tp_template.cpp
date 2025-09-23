// t2_tp_template.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Calculatrice.h"
using namespace std;

int main()
{
	int num1I, num2I;
	float num1F, num2F;
	double num1D, num2D;
	
	cout << "Valeur de la calculatrice d'entier : " << endl;
	cout << "Valeur 1 : ";
	cin >> num1I;
	cout << "Valeur 2 : ";
	cin >> num2I;
	cout << "Valeur de la calculatrice de float : " << endl;
	cout << "valeur 1 : ";
	cin >> num1F;
	cout << "Valeur 2 : ";
	cin >> num2F;
	cout << "Valeur de la calculatrice de double: " << endl;
	cout << "Valeur 1 : ";
	cin >> num1D;
	cout << "Valeur 2 : ";
	cin >> num2D;
	
	Calculatrice<int> calculatriceInt(num1I, num2I);
	Calculatrice<float> calculatriceFloat(num1F, num2F);
	Calculatrice<double> calculatriceDouble(num1D, num2D);

	cout << "Resultats de de la calculatrice d'entier" << endl;
	calculatriceInt.afficherResultats();
	cout << "Resultats de la calculatrice de float" << endl;
	calculatriceFloat.afficherResultats();
	cout << "Resultats de la calculatrice de double" << endl;
	calculatriceDouble.afficherResultats();

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
