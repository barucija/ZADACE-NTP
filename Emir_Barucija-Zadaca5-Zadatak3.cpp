#include "pch.h"
//using namespace std;
//
///*
//kreirajte strukturni tip podataka koji modelira robu u skladistu za svrhe inventure. potrebno je
//čuvati informacije o nazivu robe, broju skladišta, količini robe u skladištu, minimalnoj količinu
//(ako je količina robe jednaka ili manja od minimalne količine, to znači da treba pozvati
//dobavljača da se obezbijede efikasne zalihe robe), jediničnoj cijeni robe, i imenu dobavljača.
//zatim napišite program koji sa tastature čita podatke o robama u skladištu, a nakon toga štampa
//izvještaj koji za svaki artikal prikazuje njegov naziv, broj skladišta, količinu u skladištu, te ime
//dobavljača za one artikle čija je količina u skladištu manja od dozvoljene količine.
//*/
//
//struct roba {								//struktura roba u koju unosimo informacije o prizovodu koje ce biti cuvane 
//	char naziv[20];							//naziv proizvoda koji je tipa char i koji ce moci primiti 20 karaktera
//	int broj_skladista;						//tip podatka int koji ce cuvati informaciju o broju skladista u kojem se nalazi proizvod
//	int kolicina_u_skladistu;				//tip podatka int koji ce cuvati infomraciju o kolicini tog proizvoda u skladistu
//	char ime_dobavljaca[20];				//ime dobavljaca koji je tipa char i koji ce moci primiti 20 karaktera
//	int minimalna_kolicina;					//tip podatka int koji ce cuvati informaciju o minimalnoj kolicini proizvoda u skladistu
//};
//
//void unos(roba*, int);						//void funkcija koja ce omogucavati unos informacija o proizvodu
//void ispis(roba*);							//void funckija koja ce omogucavati ispis infomracija o proizvodu
//
//int main() {
//	int broj_proizvoda;											//tip podatka int koji oznacava koliko proizvoda zelimo provjeriti
//	cout << "koliko proizvoda zelite provjeriti?\n";			//instrukcije za korisnika programa
//	cout << "unesite taj iznos: ";								//instrukcije za korinsika programa
//	cin >> broj_proizvoda;										//unos broja proizvoda koje zelimo provjeriti
//	cin.ignore();												//"ignorisanje" svih karaktera koji nisu brojevi kako bi osigurali da je broj proizvoda ustvari broj jelte
//	cout << endl;												//linija iskljucivo radi estetike
//
//	roba* niz_proizvoda = new roba[broj_proizvoda];				//alociranje dinamickog niza niz_proizvoda 
//	unos(niz_proizvoda, broj_proizvoda);						//pozivanje funckije unos i prosljedivanje dinamickog niza i ukupnog broja proizvoda u nju
//
//
//	cout << "...............................................\n";//linija iskljucivo radi estetike
//	cout << "\nizvjestaj: \n";									//instrukcija za korisnika programa
//	cout << endl;												//linija iskljucivo radi estetike
//	
//	for (int i = 0; i < broj_proizvoda; i++) {					//for loop koji ide on nule do unesenog broja proizvoda kako bi ispisao sve proizvode
//																//sacuvane u dinamicki niz
//		ispis(&niz_proizvoda[i]);								//prosljedjivanje svakog proizvoda posebno u funckiju ispis
//																//prosljedjivanje vrsimo po referenci
//	}
//
//	cout << endl;												//linija iskljucivo radi estetike
//	cout << "-----------------------------------------------\n";//linija iskljucivo radi estetike
//	cout << endl;												//linija iskljucivo radi estetike
//
//	system("pause>null");										//zaustavljanje programa opet samo iz razloga estetike
//}
//
//void unos(roba* niz, int v) {									//funckija unos proizvoda u koju smo malocas proslijedili dinamicki alocirani niz
//																//i broj proizvoda
//	for (int i = 0; i < v; i++) {								//for loop koji ide on nule do unesenog broja proizvoda kako bi omogucio ispis svih proizvoda
//																//sacuvanih u dinamicki niz
//		cout << "-------------------------------------------\n";//linija iskljucivo radi estetike
//		cout << "unesite podatke za " << i + 1 << ". proizvod:\n";	//instrukcija za korisnika programa
//		cout << "unesite naziv proizvoda: ";	cin.getline(niz[i].naziv, 20);												//unos naziva proizvoda funkcijom cin.getline()
//		cout << "unesite broj skladista u kojem se proizvod nalazi: ";	cin >> niz[i].broj_skladista;	cin.ignore();		//unos skladista u kojem se proizvod nalazi
//		cout << "unesite ime dobavljaca robe: ";	cin.getline(niz[i].ime_dobavljaca, 20);									//unos naziva dobavljaca istog prozivoda
//		cout << "unesite kolicinu odabrane robe u skladistu: ";		cin >> niz[i].kolicina_u_skladistu;	cin.ignore();		//unos kolicine tog proizvoda u skladistu
//		cout << "unesite minimalnu kolicinu robe u skladistu: ";	cin >> niz[i].minimalna_kolicina;	cin.ignore();		//i na kraju unos minimalne kolicine tog istog proizvoda
//																															//u skladistu
//	}
//}
//
//void ispis(roba* niz) {
//
//	cout << "-----------------------------------------------\n";//linija iskljucivo radi estetike
//	cout << "naziv proizvod: " << niz->naziv << endl;																		//ispis naziva proizvoda po pointeru koristeci "->"
//	cout << "broj skladista u kojem je proizvod: " << niz->broj_skladista << endl;											//ispis broja skladista u kojem se nalazi
//																															//proizvod po pointeru koristeci "->"
//	cout << "kolicina robe u skladistu: " << niz->kolicina_u_skladistu << endl;												//ispis kolicine tog proizvoda po pointeru koristeci "->"
//	if (niz->kolicina_u_skladistu <= niz->minimalna_kolicina) {																//ukoliko je kolicina proizvoda u skladistu manja ili jednaka
//																															//dozvoljenoj kolicini onda se ispisuje sljedeca linija
//																															//koja se nalazi unutar ovog if uslova
//		cout << "pozvati dobavljaca " << niz->ime_dobavljaca << " zbog nedostatka robe u skladistu!";				//ispis naziva naziva dobavljaca za taj proizvod
//																															//po pointeru koristeci "->" jer je uslov zadovoljen
//	}
//}