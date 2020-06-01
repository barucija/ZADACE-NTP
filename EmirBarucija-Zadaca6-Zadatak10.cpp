#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct ucenici {
	string ime;
	string prezime;
	string predmet;
	int ocjena;
	int ukupno_ucenika;
}ucenik[50], u;

int main() {

	ifstream ocjene("ocjene.txt");

	int ukupno;
	int brojac_engleski = 0;
	int brojac_njemacki = 0;
	int brojac_petica = 0;

	float suma_engleski = 0;
	float suma_njemacki = 0;

	if (ocjene.is_open()) {

		ocjene >> ukupno;

		int brojac = 0;
		while (ocjene >> ucenik[brojac].ime >> ucenik[brojac].prezime >> ucenik[brojac].predmet >> ucenik[brojac].ocjena) {
			brojac++;
		}

		cout << "\n---------------------------------------------------------------------------------------------------\n";
		cout << "\n\t\t\t\t\tSpisak ucenika\n\n";
		cout << setw(10) << " Redni broj" << setw(14) << "Ime" << setw(22) << "Prezime" << setw(26) << "Strani jezik" << setw(18) << "Ocjena" << endl;
		int br = 0;
		cout << endl;
		for (int i = 0; i < brojac; i++) {

			cout << setw(6) << ++br << "." << setw(19) << ucenik[i].ime << setw(22) << ucenik[i].prezime << setw(22) << ucenik[i].predmet << setw(19) << ucenik[i].ocjena << endl;


		}

		for (int i = 0; i < brojac; i++) {

			if (ucenik[i].predmet == "Engleski") {
				suma_engleski += ucenik[i].ocjena;
				brojac_engleski++;
			}
				

			if (ucenik[i].predmet == "Njemacki") {
				suma_njemacki += ucenik[i].ocjena;
				brojac_njemacki++;
			}

			if (ucenik[i].ocjena == 5)
				brojac_petica++;
			
		}
		float prosjek_engleski = 1;
		float prosjek_njemacki = 1;
		
		prosjek_engleski = suma_engleski / brojac_engleski;
		prosjek_njemacki = suma_njemacki / brojac_njemacki;

		cout << endl;
		cout << "---------------------------------------------------------------------------------------------------\n";
		cout << endl;
		cout << "\tProsjecna ocjena iz predmeta 'Engleski jezik' je " << fixed << setprecision(2) << prosjek_engleski << endl;
		cout << "\tProsjecna ocjena iz predmeta 'Njemacki jezik' je " << fixed << setprecision(2) << prosjek_njemacki << endl;
		cout << "\tBroj petica iz oba predmeta je " << brojac_petica << ", a spisak odlicnih ucenika mozete pogledati ispot!" << endl;
		cout << endl;
		cout << setw(10) << " Redni broj" << setw(14) << "Ime" << setw(22) << "Prezime" << setw(26) << "Strani jezik" << setw(18) << "Ocjena" << endl;
		int rb = 0;
		cout << endl;
		for (int i = 0; i < brojac; i++) {
			
			if (ucenik[i].ocjena == 5) {

				cout << setw(6) << ++rb << "." << setw(19) << ucenik[i].ime << setw(22) << ucenik[i].prezime << setw(22) << ucenik[i].predmet << setw(19) << ucenik[i].ocjena << endl;
			
			}

		}
		cout << endl;
		cout << "---------------------------------------------------------------------------------------------------\n";

		cout << endl;
		cout << endl;
		system("pause");
		system("cls");

	}
}
