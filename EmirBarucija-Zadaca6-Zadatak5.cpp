#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct klijenti {
	string ime;
	string prezime;
	string mjesto;
	float racun;
	int telefonski_broj;
}klijent[50];


float n = INT_MIN;
void sortiranje(klijenti*, int);
void najveci_racun(klijenti*, int);

int main() {

	ifstream proizvodi("klijenti.txt");
	
	int brKlijenata = 0;

	if (proizvodi.is_open()) {

		while (proizvodi >> klijent[brKlijenata].ime >> klijent[brKlijenata].prezime >> klijent[brKlijenata].mjesto >> klijent[brKlijenata].telefonski_broj >> klijent[brKlijenata].racun) {
			brKlijenata++;
		}

		cout << "--------------------------------------------------------------------------------------------------------------------\n";
		//cout << "-------------------------------------------------------------------------------------\n";
		cout << "Ukupan broj klijenata u datoteci je " << brKlijenata << "\n";
		cout << "--------------------------------------------------------------------------------------------------------------------\n";

		float suma = 0;
		int kolicina = 0;
		float prosjek = 1;
		
		for (int i = 0; i < brKlijenata; i++) {
		
			suma += klijent[i].racun;
		
		}
		prosjek = suma / brKlijenata;
				
		cout << "Prosjecan racun za posljednji mjesec iznosi " << prosjek << "KM\n";
		cout << "--------------------------------------------------------------------------------------------------------------------\n";

		int brZe = 0;
		for (int i = 0; i < brKlijenata; i++) {

			if (klijent[i].mjesto == "Zenica")
				brZe++;
		}
		cout << "Broj klijenata iz Zenice: " << brZe << endl;
		//cout << "--------------------------------------------------------------------------------------------------------------------\n";

		cout << "--------------------------------------------------------------------------------------------------------------------\n";
		najveci_racun(klijent, brKlijenata);
		cout << "\t\tIme klijenta sa najvecim racunom za posljednji mjesec\n\n";
		int rb = 0;

		cout << setw(10) << " Redni broj" << setw(17) << "Ime" << setw(20) << "Prezima" << setw(20) << "Mjesto" << setw(20) << "Telefonski broj" << setw(16) << "Racun" << endl;

		for (int i = 0; i < brKlijenata; i++) {

			if (klijent[i].racun == n) {

				cout << setw(6) << ++rb << "." << setw(20) << klijent[i].ime << setw(20) << klijent[i].prezime << setw(20) << klijent[i].mjesto << setw(18) << klijent[i].telefonski_broj << setw(16) << klijent[i].racun << " KM" << endl;

			}

		}

		cout << "--------------------------------------------------------------------------------------------------------------------\n";
		sortiranje(klijent, brKlijenata);
		cout << "\t\tSpisak klijenata sortiranih po prezimenima\n\n";
		int br = 0;

		cout << setw(10) << " Redni broj" << setw(17) << "Ime" << setw(20) << "Prezima" << setw(20) << "Mjesto" << setw(20) << "Telefonski broj" << setw(16) << "Racun" << endl;
		for (int i = 0; i < brKlijenata; i++) {

			cout << setw(6) << ++br << "." << setw(20) << klijent[i].ime << setw(20) << klijent[i].prezime << setw(20) << klijent[i].mjesto << setw(18) << klijent[i].telefonski_broj << setw(16) << klijent[i].racun << " KM" << endl;

		}
		cout << "--------------------------------------------------------------------------------------------------------------------\n";

	}

	else {
		cout << "\tDatoteka nije pronadjena/ne postoji.\n\n";
	}

	cout << endl;
	system("PAUSE");
	system("CLS");
}

void sortiranje(klijenti* k, int br) {

	float tempCijena;

	for (int i = 0; i < br - 1; i++) {

		for (int j = i + 1; j < br; j++) {
			

			if (k[i].prezime > k[j].prezime) {

				klijenti temp;
				temp = k[i];
				k[i] = k[j];
				k[j] = temp;
			}
		}
	}
}

void najveci_racun(klijenti* k, int br) {
	for (int i = 0; i < br; i++) {

		if (k[i].racun > n)
			n = k[i].racun;

	}
}
