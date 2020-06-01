#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct osoba {
	string ime;
	string pol;
	int godiste;
	float prosjek;
}osoba[50], o;

int main() {

	ifstream podaci("podaci.txt");

	if (podaci.is_open()) {

		int brojac = 0;

		while (podaci >> o.ime >> o.pol >> o.godiste >> o.prosjek) {
			osoba[brojac].ime = o.ime;
			osoba[brojac].pol= o.pol;
			osoba[brojac].godiste = o.godiste;
			osoba[brojac].prosjek = o.prosjek;

			brojac++;
		}

		if (brojac == 0)
			cout << "\tDatoteka je prazna!\n";
		
		else {
			cout << "\tPregled upisanih osoba u datoteci: \n\n";
			cout << setw(10) << "Ime" << setw(15) << "Pol" << setw(18) << "Godiste" << setw(19) << "Prosjek\n\n";

			for (int i = 0; i < brojac; i++) {

				cout << setw(10) << osoba[i].ime << setw(14) << osoba[i].pol << setw(17) << osoba[i].godiste << setw(18) << fixed << setprecision(2) << osoba[i].prosjek << endl;

			}
		}
	}

	else {

		cout << "\tDatoteka nije pronadjena/ne postoji.\n\n";
	
	}

	cout << endl;
	cout << endl;

	ofstream unos_u_datoteku("podaci.txt", ios::app);

	if (unos_u_datoteku.is_open()) {

		cout << "\tUnesite podatke o osobi!\n\n";
		cout << "\tIme: ";		cin >> o.ime;
		cout << "\tPol (z/m): ";	cin >> o.pol;
		cout << "\tGodiste: ";	cin >> o.godiste;
		cout << "\tProsjek: ";	cin >> o.prosjek;

		unos_u_datoteku << o.ime << " " << o.pol << " " << o.godiste << " " << o.prosjek << "\n";
		
		unos_u_datoteku.close();
	}

	cout << endl;
	cout << endl;

	ifstream neki_sort("podaci.txt");

	if (neki_sort.is_open()) {

		int brojac = 0;
		int brojac_z = 0;
		int brojac_odlicnih = 0;

		while (neki_sort >> o.ime >> o.pol >> o.godiste >> o.prosjek) {
			osoba[brojac].ime = o.ime;
			osoba[brojac].pol = o.pol;
			osoba[brojac].godiste = o.godiste;
			osoba[brojac].prosjek = o.prosjek;

			brojac++;
		}

		for (int i = 0; i < brojac; i++) {

			if (osoba[i].pol == "Z")
				brojac_z++;

			if (osoba[i].prosjek >= 4.5)
				brojac_odlicnih++;

		}

		cout << "\tBroj zenskih osoba iznosi: " << brojac_z << endl;
		cout << "\tBroj odlicnih iznosi: " << brojac_odlicnih << endl;

	}

	else {

		cout << "\tDatoteka nije pronadjena/ne postoji.\n\n";

	}

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}
