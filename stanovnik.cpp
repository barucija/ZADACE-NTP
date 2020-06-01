#include "pch.h"
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct Drzava {
//	char naziv[30];
//	char kontinent[30];
//	int brStanovnika;
//};
//
//struct Grad {
//	Drzava drzava;
//	char naziv[30];
//	int brStanovnika;
//};
//
//struct Stanovnik {
//	Grad grad;
//	char imePrezime[30];
//	int godiste;
//	bool zaposlen;
//};
//
//Stanovnik unos_stanovnika() {
//	Stanovnik s;
//
//	cout << endl;
//
//	cout << "-------------------------------\n";
//	cout << "Unijeti ime i prezime stanovnika: ";	cin.getline(s.imePrezime, 30);
//	cout << "Unesite naziv drzave iz koje je stanonvik: ";	cin.getline(s.grad.drzava.naziv, 30);
//	cout << "Unesite kontinent drzave: ";	cin.getline(s.grad.drzava.kontinent, 30);
//	cout << "Unesite broj stanovnika drzave: "; cin >> s.grad.drzava.brStanovnika;	cin.ignore();
//	cout << "Unesite naziv grada iz kojeg je stanonvik: ";	cin.getline(s.grad.naziv, 30);
//	cout << "Unesite broj stanovnika grada: ";	cin >> s.grad.brStanovnika;	cin.ignore();
//	cout << "Unesite godiste stanovnika: ";	cin >> s.godiste; cin.ignore();
//	cout << "Da li je stanovnik zaposlen: \n";
//	cout << "0 = NE\n";
//	cout << "1 = DA\n";
//	cout << "Odabir: ";	cin >> s.zaposlen;
//	cout << "-------------------------------\n";
//
//	return s;
//}
//
//void ispis_stanovnika(Stanovnik s) {
//	cout << "Podaci o stanovniku: \n";
//	cout << "Ime i prezime: " << s.imePrezime << endl;
//	cout << "Grad: " << s.grad.naziv << " (" << s.grad.brStanovnika << " stanovnika)\n";
//	cout << "Drzava: " << s.grad.drzava.naziv << " - " << s.grad.drzava.kontinent << " (" << s.grad.drzava.brStanovnika << " stanovnika)\n";
//	cout << "Godina: " << 2020 - s.godiste << endl;
//	if (s.zaposlen == 1) {
//		cout << "Zaposlenje: DA\n";
//	}
//	else {
//		cout << "Zaposlenje: NE\n";
//	}
//	cout << "-------------------------------\n";
//}
//
//int prirastaj_stanovnika(Drzava d, int n) {
//
//	Stanovnik s;
//
//	if (n == 1) {
//		return d.brStanovnika;
//	}
//
//	d.brStanovnika = d.brStanovnika / 0.99;
//
//	return prirastaj_stanovnika(d, n - 1);
//}
//
//int main() {
//	Stanovnik s;
//	Drzava d;
//
//	s = unos_stanovnika();
//	ispis_stanovnika(s);
//
//	d.brStanovnika = s.grad.drzava.brStanovnika;
//
//	int x;
//	cout << "Unesite broj godina za koji zelite vidjeti prirastaj stanovnika drzave unesenog stanovnika: ";
//	cin >> x;
//	cout << prirastaj_stanovnika(d, x) << " stanovnika\n";
//	cout << "-------------------------------\n";
//
//	system("PAUSE>null");
//	return 0;
//}