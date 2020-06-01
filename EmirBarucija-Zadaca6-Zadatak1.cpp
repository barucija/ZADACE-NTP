#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct automobili {
	string naziv;
	string proizvodjac;
	float cijena_automobila;
	int kolicina;
}automobil[50];

void sortiranje(automobili*, int);

int main() {

	ifstream proizvodi("automobili.txt");
	
	int brProizvoda = 0;

	if (proizvodi.is_open()) {

		while (proizvodi >> automobil[brProizvoda].naziv >> automobil[brProizvoda].proizvodjac >> automobil[brProizvoda].cijena_automobila >> automobil[brProizvoda].kolicina) {
			brProizvoda++;
		}

		cout << "-----------------------------------------------------------------------------------------\n";
		cout << "Ukupan broj proizvoda u datoteci je " << brProizvoda << "\n";
		cout << "-----------------------------------------------------------------------------------------\n";

		float suma = 0;
		int kolicina = 0;

		for (int i = 0; i < brProizvoda; i++) {

		suma += automobil[i].cijena_automobila * automobil[i].kolicina;

		if (automobil[i].kolicina == 0)
			kolicina++;

		}

		cout << "Ukupna vrijednost svih proizvoda u prodavnici iznosi " << suma << " KM\n";
		cout << "-----------------------------------------------------------------------------------------\n";
		cout << "Broj proizvoda koje proizvodi FIAT je ";
		for (int i = 0; i < brProizvoda; i++) {
			if (automobil[i].proizvodjac == "Fiat")
				cout << automobil[i].kolicina << endl;
		}
		cout << "-----------------------------------------------------------------------------------------\n";
		cout << "Spisak proizvoda cija je kolicina 0\n";
		if (kolicina == 0) {

			cout << "Takvih proizvoda nema u prodavnici.\n";
			cout << "-----------------------------------------------------------------------------------------\n";

		}
		else {
			int rb = 0;
			for (int i = 0; i < brProizvoda; i++) {
				if (automobil[i].kolicina == 0) {
					cout << rb + 1 << ". " << automobil[i].proizvodjac << endl;
				}
			}
		}
		cout << "-----------------------------------------------------------------------------------------\n";
		int br = 0;
		cout << "\t\t\tSpisak proizvoda sortiranih po cijeni\n\n";
		sortiranje(automobil, brProizvoda);
		cout << setw(10) << " Redni broj" << setw(17) << "Naziv" << setw(20) << "Proizvodjac" << setw(20) << "Cijena" << setw(20) << "Kolicina" << endl;
		cout << endl;
		for (int i = 0; i < brProizvoda; i++) {
			cout << setw(6) << ++br << "." << setw(20) << automobil[i].naziv << setw(20) << automobil[i].proizvodjac << setw(20) << automobil[i].cijena_automobila << setw(15) << automobil[i].kolicina << endl;
		}
		cout << "-----------------------------------------------------------------------------------------\n";
	}

	else {
		cout << "\tDatoteka nije pronadjena/ne postoji.\n\n";
	}

	system("PAUSE");
	system("CLS");
}

void sortiranje(automobili* a, int br) {

	for (int i = 0; i < br - 1; i++) {

		for (int j = i + 1; j < br; j++) {

			if (a[i].cijena_automobila < a[j].cijena_automobila) {

				automobili temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
