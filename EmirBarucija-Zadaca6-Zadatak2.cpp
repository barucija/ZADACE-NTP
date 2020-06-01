#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct apartmani {
	string naziv;
	string mjesto;
	float cijena_apartmana;
	int broj_kreveta;
}apartman[50];


int c = INT_MAX;
void sortiranje(apartmani*, int);
void cijena(apartmani*, int);

int main() {

	ifstream proizvodi("apartmani.txt");
	
	int brApartmana = 0;

	if (proizvodi.is_open()) {

		while (proizvodi >> apartman[brApartmana].naziv >> apartman[brApartmana].mjesto >> apartman[brApartmana].broj_kreveta >> apartman[brApartmana].cijena_apartmana) {
			brApartmana++;
		}

		cout << "-----------------------------------------------------------------------------------------\n";
		cout << "Ukupan broj apartmana u datoteci je " << brApartmana << "\n";
		cout << "-----------------------------------------------------------------------------------------\n";

		float suma = 0;
		int kolicina = 0;
		float prosjek = 1;

		for (int i = 0; i < brApartmana; i++) {

			suma += apartman[i].cijena_apartmana;

		}
		prosjek = suma / brApartmana;

		cout << "Prosjecna cijena apartmana u agenciji iznosi " << prosjek << "KM\n";
		cout << "-----------------------------------------------------------------------------------------\n";
		cout << "Broj apartmana u mjestu Paralia ";
		int brApartmana_Paralia=0;
		for (int i = 0; i < brApartmana; i++) {
			if (apartman[i].mjesto == "Paralia")
				cout << ++brApartmana_Paralia << " sa " << apartman[i].broj_kreveta << " kreveta. " << endl;
		}
		cout << "-----------------------------------------------------------------------------------------\n";
		cout << "Naziv apartmana za 2 osobe (sa dva kreveta) sa najmanjom cijenom\n";

		int br = 0;
		cijena(apartman, brApartmana);
		cout << setw(10) << " Redni broj" << setw(17) << "Naziv" << setw(20) << "Proizvodjac" << setw(20) << "Cijena" << setw(20) << "Kolicina" << endl;
		for (int i = 0; i < brApartmana; i++) {
			if (apartman[i].broj_kreveta == 2 && apartman[i].cijena_apartmana == c) {

				cout << setw(6) << ++br << "." << setw(20) << apartman[i].naziv << setw(20) << apartman[i].mjesto << setw(20) << apartman[i].broj_kreveta << setw(19) << apartman[i].cijena_apartmana << endl;
				
				cout << endl;
				cout << "To je apartman u mjestu " << apartman[i].mjesto << " sa " << apartman[i].broj_kreveta << " kreveta [ " << apartman[i].cijena_apartmana << " KM ]";
			}
		}
		cout << endl;
		cout << "-----------------------------------------------------------------------------------------\n";

		sortiranje(apartman, brApartmana);
		cout << "\t\t\tSpisak apartmana sortiranih po cijeni\n\n";
		int rb = 0;
		cout << setw(10) << " Redni broj" << setw(17) << "Naziv" << setw(20) << "Proizvodjac" << setw(20) << "Cijena" << setw(20) << "Kolicina" << endl;
		cout << endl;
		for (int i = 0; i < brApartmana; i++) {

			cout << setw(6) << ++rb << "." << setw(20) << apartman[i].naziv << setw(20) << apartman[i].mjesto << setw(20) << apartman[i].broj_kreveta << setw(19) << apartman[i].cijena_apartmana << endl;
		
		}
	}

	else {
		cout << "\tDatoteka nije pronadjena/ne postoji.\n\n";
	}

	cout << "-----------------------------------------------------------------------------------------\n";
	system("PAUSE");
	system("CLS");
}

void sortiranje(apartmani* a, int br) {

	float tempCijena;

	for (int i = 0; i < br - 1; i++) {

		for (int j = i + 1; j < br; j++) {

			if (a[i].cijena_apartmana < a[j].cijena_apartmana) {

				apartmani temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;

			}
		}
	}
}

void cijena(apartmani* a, int br) {
	for (int i = 0; i < br; i++) {
		if (a[i].broj_kreveta == 2 && a[i].cijena_apartmana < c) 
			c = a[i].cijena_apartmana;
		
	}
}
