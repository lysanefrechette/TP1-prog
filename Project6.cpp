﻿// Project6.cpp : définit le point d'entrée pour l'application console.
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
	
	#include "stdafx.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {

    // variables //

    string aNom1 = "";
    string aNom2 = "";
    string aNom3 = "";
    string aNom4 = "";
    string aNom5 = "";

    float iResultatPremierSaut1 (0);
    float iResultatPremierSaut2 (0);
    float iResultatPremierSaut3 (0);
    float iResultatPremierSaut4 (0);
    float iResultatPremierSaut5 (0);

    float iResultatSecondSaut1 (0);
    float iResultatSecondSaut2 (0);
    float iResultatSecondSaut3 (0);
    float iResultatSecondSaut4 (0);
    float iResultatSecondSaut5 (0);

    // tableaux //

    string aNoms[5] = {aNom1, aNom2, aNom3, aNom4, aNom5};

    float iPremierSaut [5] = {iResultatPremierSaut1, iResultatPremierSaut2, iResultatPremierSaut3, iResultatPremierSaut4, iResultatPremierSaut5 };

    float iSecondSaut [5] = {iResultatSecondSaut1, iResultatSecondSaut2, iResultatSecondSaut3, iResultatSecondSaut4, iResultatSecondSaut5 };

    float iMeilleurSaut [5] =

    cout << "Entrez cinq noms :"
    cin >> aNom1 >> aNom2 >> aNom3 >> aNom4 >> aNom5

    cout << "Entrez le premier résultat de chaque compétiteur :"
    cin >> iResultatPremierSaut1 >> iResultatPremierSaut2 >> iResultatPremierSaut3 >> iResultatPremierSaut4 >> iResultatPremierSaut5 


	}

		else if (iChoix != 0) {
			cout << "Choix invalide" << endl << endl;
		}
	
} while (iChoix != 0);

return 0;

	
}
