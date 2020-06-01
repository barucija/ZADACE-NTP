#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct ucenici {
	string ime;
	string prezime;
	float prosjecna_ocjena;
	int razred;
	int uspjeh;
}ucenik[50];


float p = INT_MIN;
void sortiranje(ucenici*, int);
void najveca_prosjecna(ucenici*, int);

int main() {

	ifstream proizvodi("ucenici.txt");
	
	int brUcenika = 0;

	if (proizvodi.is_open()) {

		while (proizvodi >> ucenik[brUcenika].ime >> ucenik[brUcenika].prezime >> ucenik[brUcenika].razred >> ucenik[brUcenika].uspjeh >> ucenik[brUcenika].prosjecna_ocjena) {
			brUcenika++;
		}

		cout << "--------------------------------------------------------------------------------------------------------------------\n";
		cout << "Ukupan broj ucenika u datoteci je " << brUcenika << "\n";
		cout << "--------------------------------------------------------------------------------------------------------------------\n";

		cout << "\t\t\tImena ucenika 4. razreda\n\n";
		cout << setw(10) << " Redni broj" << setw(17) << "Ime" << setw(20) << "Prezima" << setw(20) << "Razred" << setw(16) << "Uspjeh" << setw(23) << "Prosjecna ocjena" << endl;
		for (int i = 0; i < brUcenika; i++) {
			int br = 0;
			if (ucenik[i].razred == 4) {
				
				cout << setw(6) << ++br << "." << setw(20) << ucenik[i].ime << setw(20) << ucenik[i].prezime << setw(20) << ucenik[i].razred << setw(15) << ucenik[i].uspjeh << setw(20) << ucenik[i].prosjecna_ocjena << endl;

			}
		}

		cout << "--------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\tImena ucenika koji imaju odlican uspjeh\n\n";
		cout << setw(10) << " Redni broj" << setw(17) << "Ime" << setw(20) << "Prezima" << setw(20) << "Razred" << setw(16) << "Uspjeh" << setw(23) << "Prosjecna ocjena" << endl;
		for (int i = 0; i < brUcenika; i++) {
			int br = 0;
			if (ucenik[i].uspjeh == 5) {

				cout << setw(6) << ++br << "." << setw(20) << ucenik[i].ime << setw(20) << ucenik[i].prezime << setw(20) << ucenik[i].razred << setw(15) << ucenik[i].uspjeh << setw(20) << ucenik[i].prosjecna_ocjena << endl;

			}
		}

		cout << "--------------------------------------------------------------------------------------------------------------------\n";
		najveca_prosjecna(ucenik, brUcenika);
		cout << "\t\t\tIme ucenika sa najboljom prosjecnom ocjenom\n\n";
		int rb = 0;
		//cout << "----------------------------------------------------\n";

		cout << setw(10) << " Redni broj" << setw(17) << "Ime" << setw(20) << "Prezima" << setw(20) << "Razred" << setw(16) << "Uspjeh" << setw(23) << "Prosjecna ocjena" << endl;
		
		for (int i = 0; i < brUcenika; i++) {

			if (ucenik[i].prosjecna_ocjena == p) {

				cout << setw(6) << ++rb << "." << setw(20) << ucenik[i].ime << setw(20) << ucenik[i].prezime << setw(20) << ucenik[i].razred << setw(15) << ucenik[i].uspjeh << setw(20) << fixed << setprecision(2) << ucenik[i].prosjecna_ocjena << endl;
			
			}

		}

		cout << "--------------------------------------------------------------------------------------------------------------------\n";

		sortiranje(ucenik, brUcenika);
		cout << "\t\t\tSpisak ucenika sortiranih po razredima\n\n";
		int br = 0;
		//cout << "----------------------------------------------------\n";

		cout << setw(10) << " Redni broj" << setw(17) << "Ime" << setw(20) << "Prezima" << setw(20) << "Razred" << setw(16) << "Uspjeh" << setw(23) << "Prosjecna ocjena" << endl;
		cout << endl;
		for (int i = 0; i < brUcenika; i++) {

			cout << setw(6) << ++br << "." << setw(20) << ucenik[i].ime << setw(20) << ucenik[i].prezime << setw(20) << ucenik[i].razred << setw(15) << ucenik[i].uspjeh << setw(20) << ucenik[i].prosjecna_ocjena << endl;

		}
		cout << "--------------------------------------------------------------------------------------------------------------------\n";

	}

	else {
		cout << "\tDatoteka nije pronadjena/ne postoji.\n\n";
	}	

	system("PAUSE");
	system("CLS");

}

void sortiranje(ucenici* u, int br) {

	float tempCijena;

	for (int i = 0; i < br - 1; i++) {

		for (int j = i + 1; j < br; j++) {
			
				if (u[i].razred > u[j].razred) {

					ucenici temp;
					temp = u[i];
					u[i] = u[j];
					u[j] = temp;

				}
		}
	}
}

void najveca_prosjecna(ucenici* u, int br) {
	for (int i = 0; i < br; i++) {

		if (u[i].prosjecna_ocjena > p)
			p = u[i].prosjecna_ocjena;

	}
}
