// Project6.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
 
setlocale(LC_CTYPE, "fra");

do {
	cout << sMenu;
	cin >> iChoix;

	if (iChoix == 2) {
		// Valider numéro de téléphone

	
			bool validiteNumeroDeTelephone(0);
			string numeroDeTelephone("");

			cout << "Entrez un numéro de téléphone, ce programme le validera:";
			cin >> numeroDeTelephone;

			if ((numeroDeTelephone.substr(4, 3) != ('0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9') || (numeroDeTelephone.substr(7, 1) != '-') || (numeroDeTelephone.substr(8, 4) != '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')) {

				validiteNumeroDeTelephone = false;

			}

			else {

				validiteNumeroDeTelephone = true;

			}

			if (numeroDeTelephone.substr(0, 3) != ('367' || '418' || '438' || '450' || '514' || '579' || '581' || '819' || '873')) {

				cout << "Numéro non localisé au Québec" << endl;

				if (validiteNumeroDeTelephone == false) {

					cout << "Format invalide" << endl;

				}

				if (validiteNumeroDeTelephone == true) {

					cout << "Numéro de téléphone valide" << endl;

				}

				
	
	}

	else if (iChoix == 4) {
			// Saut en longueur
	
	string nom1 = ""
	string nom2 = ""
	string nom3 = ""
	string nom4 = ""
	string nom5 = ""
	noms [0]
	premierSaut [0]
	secondSaut [0]
	meilleurSaut [0]

	cout << "Entrez cinq noms :"
	cin >> nom1 >> nom2 >> nom3 >> nom4 >> nom5 





	}

		else if (iChoix != 0) {
			cout << "Choix invalide" << endl << endl;
		}
	
} while (iChoix != 0);

return 0;

	
}