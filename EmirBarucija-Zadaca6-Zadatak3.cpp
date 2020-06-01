#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct radnici {
	string ime;
	string prezime;
	float radni_staz;
	int strucna_sprema;
	float plata;
}radnik[50];

void sortiranje(radnici*, int);

int main() {

	ifstream proizvodi("radnici.txt");
	
	int brRadnika = 0;

	if (proizvodi.is_open()) {

		while (proizvodi >> radnik[brRadnika].ime >> radnik[brRadnika].prezime >> radnik[brRadnika].radni_staz >> radnik[brRadnika].strucna_sprema >> radnik[brRadnika].plata) {
			brRadnika++;
		}

		cout << "--------------------------------------------------------------------------------------------------------------------\n";
		cout << "Ukupan broj radnika u datoteci je " << brRadnika << "\n";
		cout << "--------------------------------------------------------------------------------------------------------------------\n";

		float suma = 0;
		int kolicina = 0;
		float prosjek = 1;

		for (int i = 0; i < brRadnika; i++) {

			suma += radnik[i].plata;

		}
		prosjek = suma / brRadnika;

		cout << "Prosjecna plata radnika iznosi " << prosjek << "KM\n";
		cout << "--------------------------------------------------------------------------------------------------------------------\n";

		int broj_radnika_sa_5_godina_i_vise = 0;
		for (int i = 0; i < brRadnika; i++) {
			if (radnik[i].radni_staz > 5)
				broj_radnika_sa_5_godina_i_vise++;
		}
		cout << "Broj radnika sa vise od 5 godina radnog staza je: " << broj_radnika_sa_5_godina_i_vise << endl;
		cout << "--------------------------------------------------------------------------------------------------------------------\n";

		cout << "\t\t\tImena radnika sa najvisim stepenom strucne spreme\n\n";
		cout << setw(10) << " Redni broj" << setw(17) << "Ime" << setw(20) << "Prezima" << setw(20) << "Radni staz" << setw(20) << "Strucna sprema" << setw(15) << "Plata" << endl;
		for (int i = 0; i < brRadnika; i++) {
			int br = 0;
			if (radnik[i].strucna_sprema == 8) {
			
				cout << setw(6) << ++br << "." << setw(20) << radnik[i].ime << setw(20) << radnik[i].prezime << setw(20) << radnik[i].radni_staz << setw(15) << radnik[i].strucna_sprema <<  setw(20) << radnik[i].plata << endl;
		
			}
		}
		cout << "--------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\tSpisak radnika sortiranih po imenima\n\n";

		int br = 0;
		sortiranje(radnik, brRadnika);
		cout << setw(10) << " Redni broj" << setw(17) << "Ime" << setw(20) << "Prezima" << setw(20) << "Radni staz" << setw(20) << "Strucna sprema" << setw(15) << "Plata" << endl;
		cout << endl;
		for (int i = 0; i < brRadnika; i++) {
			
			cout << setw(6) << ++br << "." << setw(20) << radnik[i].ime << setw(20) << radnik[i].prezime << setw(20) << radnik[i].radni_staz << setw(15) << radnik[i].strucna_sprema << setw(20) << radnik[i].plata << endl;

		}
		cout << "--------------------------------------------------------------------------------------------------------------------\n";
	}

	else {
		cout << "\tDatoteka nije pronadjena/ne postoji.\n\n";
	}

}

void sortiranje(radnici* r, int br) {


	for (int i = 0; i < br - 1; i++) {

		for (int j = i + 1; j < br; j++) {

			if (r[i].ime > r[j].ime) {

				radnici temp;
				temp = r[i];
				r[i] = r[j];
				r[j] = temp;

			}
		}
	}
}
