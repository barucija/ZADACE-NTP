#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct ucenici {
	string ime;
	float prosjcena_ocjena;
	int zakljucna_ocjena;
	string ucenik_zadovoljio;
	int propustene_vjezbe;
}ucenik[50];

void sortiranje(ucenici*, int);
void zakljucna(ucenici*, int);

int main() {

	fstream izvjestaj("izvjestaj.txt");

	int brojac = 0;

	ifstream grupa1("grupa1.txt");
	if (grupa1.is_open()) {
		while (grupa1 >> ucenik[brojac].ime >> ucenik[brojac].prosjcena_ocjena >> ucenik[brojac].propustene_vjezbe) {
			brojac++;
		}
	}

	else {
		cout << "\tdatoteka nije pronadjena/ne postoji.\n\n";
	}

	ifstream grupa2("grupa2.txt");
	if (grupa2.is_open()) {
		while (grupa2 >> ucenik[brojac].ime >> ucenik[brojac].prosjcena_ocjena >> ucenik[brojac].propustene_vjezbe) {
			brojac++;
		}
	}

	else {
		cout << "\tdatoteka nije pronadjena/ne postoji.\n\n";
	}

	ifstream grupa3("grupa3.txt");
	if (grupa3.is_open()) {
		while (grupa3 >> ucenik[brojac].ime >> ucenik[brojac].prosjcena_ocjena >> ucenik[brojac].propustene_vjezbe) {
			brojac++;
		}
	}

	else {
		cout << "\tdatoteka nije pronadjena/ne postoji.\n\n";
	}

	zakljucna(ucenik, brojac);
	sortiranje(ucenik, brojac);

	if (izvjestaj.is_open()) {

		int br = 0;
		cout << "\n\t\tucenici sortirani po zakljucnim ocjenama!\n\n";
		cout << setw(10) << " redni broj" << setw(17) << "ime" << setw(26) << "zakljucna ocjena" << setw(26) << "propustene vjezbe" << endl;

		cout << endl;
		for (int i = 0; i < brojac; i++) {

			cout << setw(6) << ++br << "." << setw(22) << ucenik[i].ime << setw(20) << fixed << setprecision(2) << ucenik[i].zakljucna_ocjena << setw(22) << ucenik[i].propustene_vjezbe << endl;

		}

		cout << endl;

		cout << "-----------------------------------------------------------------------------------------\n";
		cout << "ucenici koji su ispunili normu prisustva na vjezbama:\n\n";
		for (int i = 0; i < brojac; i++) {
			if (ucenik[i].propustene_vjezbe < 5) {
				cout << "ucenica/ucenik " << ucenik[i].ime << " je ispunila/ispunio normu prisustva vjezbama [ " << ucenik[i].propustene_vjezbe << " izostanaka ].\n";
			}
		}
		cout << "-----------------------------------------------------------------------------------------\n";

		cout << endl;

		cout << "-----------------------------------------------------------------------------------------\n";
		cout << "ucenici koji nisu ispunili normu prisustva na vjezbama:\n\n";
		for (int i = 0; i < brojac; i++) {
			if (ucenik[i].propustene_vjezbe >= 5) {
				cout << "ucenica/ucenik " << ucenik[i].ime << " nije ispunila/ispunio normu prisustva vjezbama [ " << ucenik[i].propustene_vjezbe << " izostanaka ].\n";
			}
		}		
		cout << "-----------------------------------------------------------------------------------------\n";

		

		cout << endl;
		cout << endl;
		cout << endl;
	}
}

void zakljucna(ucenici* u, int br) {

	for (int i = 0; i < br; i++) {

		if (u[i].prosjcena_ocjena < 5.5)
			u[i].zakljucna_ocjena = 5;

		if (u[i].prosjcena_ocjena >= 5.5 && u[i].prosjcena_ocjena < 6.5)
			u[i].zakljucna_ocjena = 6;

		if (u[i].prosjcena_ocjena >= 6.5 && u[i].prosjcena_ocjena < 7.5)
			u[i].zakljucna_ocjena = 7;

		if (u[i].prosjcena_ocjena >= 7.5 && u[i].prosjcena_ocjena < 8.5)
			u[i].zakljucna_ocjena = 8;

		if (u[i].prosjcena_ocjena >= 8.5 && u[i].prosjcena_ocjena < 9.5)
			u[i].zakljucna_ocjena = 8;

		if (u[i].prosjcena_ocjena >= 9.5 && u[i].prosjcena_ocjena <= 10)
			u[i].zakljucna_ocjena = 10;
	}

}

void sortiranje(ucenici* u, int br) {

	float tempcijena;

	for (int i = 0; i < br - 1; i++) {

		for (int j = i + 1; j < br; j++) {
			

				if (u[i].zakljucna_ocjena < u[j].zakljucna_ocjena) {

					ucenici temp;
					temp = u[i];
					u[i] = u[j];
					u[j] = temp;

				}
		}
	}
}
