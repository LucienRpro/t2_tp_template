// t2_tp_template.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

template<class T>
T maximum(T n1, T n2)
{
	return (n1 > n2) ? n1 : n2;
}
int main()
{
	int i1, i2;
	float f1, f2;
	char c1, c2;

	cout << "Test d'une fonction de comparaison 'template'" << endl;

	cout << "Entrez les valeurs de i1 et i2" << endl;
	cin >> i1 >> i2;;
	cout << maximum(i1, i2) << endl;
	cout << "Entrez les valeurs de f1 et f2" << endl;
	cin >> f1 >> f2;;
	cout << maximum(f1, f2) << endl;
	cout << "Entrez les valeurs de c1 et c2" << endl;
	cin >> c1 >> c2;;
	cout << maximum(c1, c2) << endl;
	//
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
