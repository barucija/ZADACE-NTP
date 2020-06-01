#include "pch.h"
//
//using namespace std;
//
//struct Bolnica {
//	char naziv[50];
//	char grad[20];
//	int brZaposlenih;
//};
//
//struct Odjel {
//	Bolnica bolnica;
//	char naziv[20];
//	float cijenaPoDanu;
//};
//
//struct Pacijent {
//	char imePrezime[30];
//	Odjel odjel;
//	int godiste;
//	bool osiguran;
//};
//
//void unosPacijenta(Pacijent* niz_pacijenata, int broj_pacijenata) {
//
//	for (int i = 0; i < broj_pacijenata; i++) {
//		cout << "Unesite podatke za " << i + 1 << ". pacijenta!\n";
//		cout << "Unijeti ime i prezime pacijenta: ";	cin.getline(niz_pacijenata[i].imePrezime, 30);
//		cout << "Unesite naziv bolnice u kojoj je pacijent: ";	cin.getline(niz_pacijenata[i].odjel.bolnica.naziv, 50);
//		cout << "Unesite grad u kojem je bolnica: ";	cin.getline(niz_pacijenata[i].odjel.bolnica.grad, 20);
//		cout << "Unesite broj zaposlenih u bolnici: ";	cin >> niz_pacijenata[i].odjel.bolnica.brZaposlenih;
//		cout << "Unesite naziv odjela na kojem je pacijent: ";	cin >> niz_pacijenata[i].odjel.naziv;
//		cout << "Unesite cijenu lezanja jednog dana na odjelu: ";	cin >> niz_pacijenata[i].odjel.cijenaPoDanu;
//		cout << "Unesite godiste pacijenta: ";	cin >> niz_pacijenata[i].godiste;
//		cout << "Da li je pacijent osiguran: \n";
//		cout << " 0 = NE \n";
//		cout << " 1 = DA \n";
//		cout << "Odabir: ";	cin >> niz_pacijenata[i].osiguran;
//	}
//
//	/*cout << "Unijeti ime i prezime pacijenta: ";	cin.getline(p.imePrezime, 20);
//	cout << "Unesite naziv bolnice u kojoj je pacijent: ";	cin.getline(p.odjel.bolnica.naziv, 50);
//	cout << "Unesite grad u kojem je bolnica: ";	cin.getline(p.odjel.bolnica.grad, 20);
//	cout << "Unesite broj zaposlenih u bolnici: ";	cin >> p.odjel.bolnica.brZaposlenih;
//	cout << "Unesite naziv odjela na kojem je pacijent: ";	cin >> p.odjel.naziv;
//	cout << "Unesite cijenu lezanja jednog dana na odjelu: ";	cin >> p.odjel.cijenaPoDanu;
//	cout << "Unesite godiste pacijenta: ";	cin >> p.godiste;
//	cout << "Da li je pacijent osiguran: \n";
//	cout << " 0 = NE \n";
//	cout << " 1 = DA \n";
//	cout << "Odabir: ";	cin >> p.osiguran;*/
//
//}
//
//void ispisPacijenta(Pacijent p) {
//	cout << endl;
//	cout << "---------------------------------------" << endl;
//	cout << endl;
//	cout << "Podaci o pacijentu: \n";
//	cout << "Ime i prezime: " << p.imePrezime << "\n";
//	cout << "Bolnica: " << p.odjel.bolnica.naziv << " iz grada " << p.odjel.bolnica.grad << ". (" << p.odjel.bolnica.brZaposlenih << ")\n";
//	cout << "Odjel: " << p.odjel.naziv << " - " << p.odjel.cijenaPoDanu << " KM po danu.\n";
//	cout << "Godina: " << 2020 - p.godiste << "\n";
//
//	if (p.osiguran == 0) {
//		cout << "Osiguran: NE";
//	}
//	else {
//		cout << "Osiguran: DA";
//	}
//
//}
//
//float cijena(Odjel o, int dan) {
//	Pacijent p;
//
//	//cout << p.odjel.cijenaPoDanu << endl;
//	//cout << o.cijenaPoDanu << endl
//
//
//	if (dan == 1) {
//		return o.cijenaPoDanu;
//	}
//
//	o.cijenaPoDanu = o.cijenaPoDanu * 0.95;
//
//	return cijena(o, dan - 1);
//}
//
//int main() {
//
//
//	cout << "Unesite broj pacijenata za unos: ";
//	int broj_pacijenata;	cin >> broj_pacijenata;
//
//	Pacijent* niz_pacijenata = new Pacijent[broj_pacijenata];
//
//	/*Pacijent p;
//	Odjel o;*/
//
//	cout << "Unesite podatke o pacijentima: \n";
//	unosPacijenta(niz_pacijenata, broj_pacijenata);
//	//o.cijenaPoDanu = p.odjel.cijenaPoDanu;
//	/*ispisPacijenta(p);*/
//
//	/*cout << endl;
//	int dan;
//	cout << "Unesite dan za koji zelite provjeriti cijenu: ";
//	cin >> dan;
//	cout << fixed << setprecision(2) << cijena(o, dan) << " KM. \n";*/
//
//
//}