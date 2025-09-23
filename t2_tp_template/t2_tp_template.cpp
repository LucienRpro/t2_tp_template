// t2_tp_template.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

template<class T1, class T2, class R>
R moyenneTableau(T1 param1, T2 param2)
{
	R somme = 0;
	for (int i = 0; i < param2; i++)
	{
		somme += param1[i];
	}
	return (somme / param2);
}
int main()
{
	int* t;
	int tailleTableau = 0;

	cout << "Entrer la taille du tableau : " << endl;
	cin >> tailleTableau;
	t = new int[tailleTableau];

	for (int i = 0; i < tailleTableau; i++)
	{
		cout << "Entrer la note numero " << i + 1 << " : " << endl;
		cin >> t[i];
	}
	cout << "Voici la moyenne : " << moyenneTableau<int*, int, float>(t, tailleTableau);
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
