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


			bool validiteNumeroDeTelephone(0);
			string numeroDeTelephone("");

			cout << "Entrez un numéro de téléphone, ce programme le validera:";
			cin >> numeroDeTelephone;

			if ((numeroDeTelephone.substr.compare(4, 3)) != ('0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9') || (numeroDeTelephone.substr.compare(7, 1) != '-') || (numeroDeTelephone.substr.compare(8, 4) != '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')) {

				validiteNumeroDeTelephone = false;

			}

			else {

				validiteNumeroDeTelephone = true;

			}

			if (numeroDeTelephone.substr.compare(0, 3) != ('367' || '418' || '438' || '450' || '514' || '579' || '581' || '819' || '873')) {

				cout << "Numéro non localisé au Québec" << endl;

				if (validiteNumeroDeTelephone == false) {

					cout << "Format invalide" << endl;

				}

				if (validiteNumeroDeTelephone == true) {

					cout << "Numéro de téléphone valide" << endl;

				}

				return 0;

			}
		}
	
