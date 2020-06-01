#include "pch.h"
//EMIR BARUCIJA
//	ZADACA 3
//		ZADATAK 2
//			30.03.2020.
//
//#include <iostream>
//#include <cstring>
//#include <cstdio>
//using namespace std;
//
////Napisite program koji trazi od korisnika da unese niz recenica, pri cemu se broj recenica
////prethodno unosi sa tastature.Za svaku unesenu recenicu dinamicki alocirajte prostor,
////uz vodenje evidencije o adresi svake alocirane recenice u dinamickom nizu pokazivaca
////na pocetke svake od recenica.Nakon toga, treba ispisati unesene recenice sortirane u
////abecedni poredak(odnosno u poredak po ASCII kodovima).Sortiranje obavite rucno,
////bilo kojim postupkom koji Vam je poznat(drugim rijecima, nemojte koristiti gotove
////funkcije za sortiranje, poput funkcije "sort„ iz biblioteke "algorithm".
//
//int main() {
//
//	cout << "--------------------------------------------------\n";
//
//	cout << "Molimo Vas unesite broj recenica: ";
//	int broj;	cin >> broj;	/*cin.ignore(1000, '\n');*/
//
//
//	//Double pointer/pointer to pointer, on usmjerava na drugi pointer koji zatim pokazuje na neku memorijsku lokaciju
//	//Memorijska lokacija na koju ce pokazivati ce biti prvi indeks naseg niza, tj. prva memorijska lokacija karaktera unesene recenice
//	char** nove_recenice = new char* [broj];
//
//	for (int i = 0; i < broj; i++) {									//For petlja koja ide od 0 do broja recenica koje smo malocas unijeli
//		nove_recenice[i] = new char[50];								//Pocevsi od prvog indeksa niza, tj. prve memorijske lokacije nove_recenice[0]
//																		//dalje alociramo 50 memorijskih mjesta za karaktere koje cemo u isti smjestiti
//	}
//
//	cout << "--------------------------------------------------\n";
//
//	for (int i = 0; i < broj; i++) {									//For petlja koja ide od 0 do broja recenica koje smo malocas unijeli
//		cout << "Molimo Vas unesite " << i+1 << ". recenicu: ";
//		for (int j = 0; j < 50; j++) {									//For petlja koja ide od 0 do broja 50, tj. to su mjesta za karaktere koje cemo unositi u alocirani niz
//			cin.get(*(nove_recenice[i] + j));							
//			//[i] predstavlja broj recenice koju unosimo, dok j predstavlja karakter koji je u toj recenici
//
//			//Ako se unese tacka, petlja se prekida, break-a, te se i povecava za jedan
//			if (*(nove_recenice[i] + j) == '.') {
//				break;
//			}
//		}
//	}
//
//	/*
//				SORTIRANJE
//										*/
//		for (int i = 0; i < broj; i++) {											//For petlja koja ide od 0 do broja recenica koje smo malocas unijeli
//			for (int j = i+1; j < broj; j++) {									//For petlja koja ide od 0 do broja recenica koje smo malocas unijeli
//
//				//S tim da je koristen cin.get on pri unosu i ispisu kao prvi karakter unosi "\n" i bas zato se u for petlji na prvi indeks nove recenice
//				//dodaje '1', kako bi se preskocio znak "\n" i presao na prvo slovo niza, tj. nove recenice
//				if (*(nove_recenice[i] + 1) > * (nove_recenice[j] + 1)) {		
//					char* privremena_varijabla = nove_recenice[i];
//					nove_recenice[i] = nove_recenice[j];
//					nove_recenice[j] = privremena_varijabla;
//				}
//			}
//		}
//	
//
//		cout << "--------------------------------------------------\n";
//
//		for (int i = 0; i < broj; i++) {											//For petlja koja ide od 0 do broja recenica koje smo malocas unijeli
//			cout << i + 1 << ". recenica je: ";
//			for (int j = 0; j < 100; j++) {											//For petlja koja ide od 0 do broja recenica koje smo malocas unijeli
//
//				cout << *(nove_recenice[i] + j);
//
//				//Kao sto je vec objasnjeno
//				//Ako se unese tacka, petlja se prekida, break-a, te se i povecava za jedan
//				if (*(nove_recenice[i] + j) == '.') {
//					break;
//				}
//			}
//			cout << endl;
//		}
//		cout << "--------------------------------------------------\n";
//
//		//S tim da je u zadatku pisalo da se niz mora dinamicki alocirati, ona se sama nece obrisati
//		//tako da ju mi moramo samostalno obrisati
//		for (int i = 0; i < broj; i++) {											//For petlja koja ide od 0 do broja recenica koje smo malocas unijeli
//			//Ova for petlja je inicijalizirana u svrhu brisanja svake pojedinacne unesene recenice u dinamicki alocirani niz
//			delete[] nove_recenice[i];
//		}
//		
//		//Ova komandna linija brise upravo alociranu memoriju, citavu, na kojoj su bile spremljene upravo memorijske adrese pojedincanih recenica koje smo
//		//malocas obrisali u petlji iznad
//		delete[] nove_recenice;
//
//		cout << endl;
//		cout << endl;
//}