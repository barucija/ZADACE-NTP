#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct ucenici {
	string ime;
	int opravdani;
	int neopravdani;
}ucenik[50];

float p = INT_MIN;
void najvise_izostanaka(ucenici*, int);

int main() {

	ifstream izostanci("izostanci.txt");

	int brojac = 0;

	if (izostanci.is_open()) {

		while (izostanci >> ucenik[brojac].ime >> ucenik[brojac].opravdani >> ucenik[brojac].neopravdani) {
			brojac++;
		}

		cout << "\n\n\tSpisak ucenka sa izostancima!\n\n";

		cout << setw(10) << "Ime" << setw(15) << "Opravdani" << setw(15) << "Neopravdani" << endl;
		cout << endl;

		for (int i = 0; i < brojac; i++) {

			cout << setw(10) << ucenik[i].ime << setw(12) << ucenik[i].opravdani << setw(12) << ucenik[i].neopravdani << endl;

		}

		cout << endl;

		int suma = 0;

		for (int i = 0; i < brojac; i++) {
			suma += ucenik[i].neopravdani + ucenik[i].opravdani;
		}
		cout << "Ukupan broj izostanaka [opravdanih i neopravdanih] u razredu je: " << suma << endl;

		int suma_opravdanih = 0;
		int suma_neopravdanih = 0;

		for (int i = 0; i < brojac; i++) {

			suma_opravdanih += ucenik[i].opravdani;

			suma_neopravdanih += ucenik[i].neopravdani;

		}
		cout << "Ukupan broj opravdanih izostanaka u razredu je: " << suma_opravdanih << endl;
		cout << "Ukupan broj neopravdanih izostanaka u razredu je: " << suma_neopravdanih << endl;

		cout << endl;

		float prosjek = 1;
		float prosjek_opravdanih = 1;
		float prosjek_neopravdanih = 1;

		int brojac_opravdanih = 0;
		int brojac_neopravdanih = 0;

		for (int i = 0; i < brojac; i++) {
			if (ucenik[i].opravdani != 0)
				brojac_opravdanih++;

			if (ucenik[i].neopravdani != 0)
				brojac_neopravdanih++;
		}

		int broj_ucenika_sa_izostancima = 0;
		broj_ucenika_sa_izostancima = brojac_opravdanih + brojac_neopravdanih;

		prosjek = (float)suma / broj_ucenika_sa_izostancima;
		prosjek_opravdanih = (float)suma_opravdanih / brojac_opravdanih;
		prosjek_neopravdanih = (float)suma_neopravdanih / brojac_neopravdanih;

		cout << "Prosjecan broj izostanaka [opravdanih i neopravdanih] u razredu je: " << (int)prosjek << ", preciznije " << prosjek << endl;
		cout << "Prosjecan broj opravdanih izostanaka u razredu je: " << (int)prosjek_opravdanih << ", preciznije " << prosjek_opravdanih << endl;
		cout << "Prosjecan broj neopravdanih izostanaka u razredu je: " << (int)prosjek_neopravdanih << ", preciznije " << prosjek_neopravdanih << endl;

		int suma_izostanaka_posebno[brojac];

		for (int i = 0; i < brojac; i++) {

			suma_izostanaka_posebno[i] = ucenik[i].opravdani + ucenik[i].neopravdani;

		}
		najvise_izostanaka(ucenik, brojac);
		cout << endl;
		cout << "-------------------------------------------------------------------------------------\n";
		cout << "\tUcenik sa najvise izostanaka: \n\n";

		cout << setw(10) << "Ime" << setw(15) << "Opravdani" << setw(15) << "Neopravdani" << endl;
		for (int i = 0; i < brojac; i++) {
			if (suma_izostanaka_posebno[i] == p) {
				cout << setw(12) << ucenik[i].ime << setw(12) << ucenik[i].opravdani << setw(12) << ucenik[i].neopravdani << endl;
				cout << endl;
				cout << ucenik[i].ime << " ima ukupno " << p << " izostanaka [opravdanih i neopravdanih].";
			}
		}
		cout << endl;
		cout << "-------------------------------------------------------------------------------------\n";
		cout << "Ucenici bez neopravdanih izostanaka su: \n\n";
		cout << endl;
		int brojac_bez_neopravdanih = 0;
		cout << setw(10) << "Ime" << setw(15) << "Opravdani" << setw(15) << "Neopravdani" << endl;
		for (int i = 0; i < brojac; i++) {
			if (ucenik[i].neopravdani == 0) {
				cout << setw(11) << ucenik[i].ime << setw(12) << ucenik[i].opravdani << setw(12) << ucenik[i].neopravdani << endl;
				brojac_bez_neopravdanih++;

			}
		}
		cout << endl;
		cout << "Takvih ucenika ukupno je " << brojac_bez_neopravdanih << ". " << endl;
		cout << "-------------------------------------------------------------------------------------\n";


		cout << endl;
		cout << endl;
		system("PAUSE");
		system("CLS");

	}

	system("PAUSE");
	cout << endl;
	cout << endl;
}

void najvise_izostanaka(ucenici* u, int br) {

	int suma[br];

	for (int i = 0; i < br; i++) {

		suma[i] = u[i].opravdani + u[i].neopravdani;

	}

	for (int i = 0; i < br; i++) {

		if (suma[i] > p)
			p = suma[i];

	}
}


