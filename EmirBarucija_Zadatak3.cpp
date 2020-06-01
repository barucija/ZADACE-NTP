#include "pch.h"
////EMIR BARUCIJA
////	ZADACA
////		ZADATAK 3
////			27.03.2020.
////
//#include <iostream>
//#include <cmath>
//#include <string.h> 
//#include <stdio.h> 
//
//using namespace std;
//
////// funkcija prima "char adresa" po pointeru
//////provjerava da li se u unesenoj email adresi nalazi znak "@"
//bool ludo_a(char* adresa) {
//													//strlen(adresa) je funkcija kojom odredjujemo broj clanova niza; tj. koliko email adresa ima slova/znakova
//	int duzina_adrese = strlen(adresa);					//uvodimo varijablu kojoj pridruzujemo vrijednost strlen(adresa)
//	int brojac_ludih_a = 0;							//varijabla koja ce koristiti pri osiguravanju znaka "@" koji se moze pojaviti samo jednom!
//
//	for (int i = 0; i < duzina_adrese; i++) {		//definisemo brojac koji pocinje od nule i dolazi do ukupnog broja slova/cifri koje ima unesena email adresa
//			if (*(adresa + i) == '@')				//provjeravamo da li se na memorijskoj lokaciji "adresa+i" nalazi znak "@"
//				/*break;*/
//				brojac_ludih_a++;					//kada se pronadje "@" brojac se povecava, osigurava jedno "@" u email adresi
//	}
//
//	if (brojac_ludih_a == 1) {						//ako se "@" pojavljuje samo jednom u email adresi program vraca vrijednost true
//		return true;								//program vraca vrijednost "true"
//
//	}
//	
//	return false;									//ako to nije slucaj program vraca vrijednos "false"
//}
//
//// funkcija prima "char adresa" po pointeru
//bool ispravna(char* adresa) {
//													//strlen(adresa) je funkcija kojom odredjujemo broj clanova niza; tj. koliko email adresa ima slova/znakova
//	int duzina_adrese = strlen(adresa);				//uvodimo varijablu kojoj pridruzujemo vrijednost strlen(adresa)
//
//	//uslov if koji provjerava da li se na pozicijama nalazi ".ba"
//	//radi na principu da zadnji clan treba biti "a", onda se brojac koji je u ovom slucaju ustvari ukupan broj clanova tog niza
//	//smanjuje i pokazuje na predzadnje mjesto na kojem treba biti slovo "b", i onda kao treci korak se provjerava mjesto prije 
//	//predzadnjeg na kojem ustvari treba biti znak "."
//	if (*(adresa + --duzina_adrese) != 'a' || *(adresa + --duzina_adrese) != 'b' || *(adresa + --duzina_adrese) != '.') {
//		return 0;									//ako uslov nije ispunjen program vraca 0, tj. false
//	}
//
//	//uslov u koji saljemo prvu funkciju "ludo_a" koja kao svrhu ima provjeravanje da li se "@" nalazi u email adresi
//	//u koju prosljedjujemo adresu i brojac "duzina_adrese" koja broji samo zadnja 3 mjesta na kojima treba da se nalazi ".ba"
//	if (!ludo_a(adresa)) {
//		return 0;									//ako uneseni email nema "@" program vraca 0, tj. false
//	}
//
//	return 1;										//ako su svi uslovi ispunjeni i program je dosao do ovog dijela, program vraca 
//													//vrijednost 1, tj. true
//}
//
//int main() {
//
//	/*Tekst zadatka!!!*/
//	cout << "\n        Adresa je validna ako se zavrsava na .ba i ako ima karakter @,\n ako se budu slijedile instrukcije validna adresa je ""username@domena.ba"" je validna adresa\n\n";
//	
//	//Deklarisanje varijable "email[50]" koja u sebi pohranjuje uneseni email
//	//maksimalni broj unesenih karaktera je 60
//	char email[60];
//
//	//Uputstvo sta se od korisnika programa trazi
//	cout << "\n\n\t Unesite mail: ";
//	
//	//Unos email adrese
//	cin >> email;
//
//	//Deklarisanje pointera
//	char* ptr;
//
//	//Pointer pokazuje na prvo polje char niza email
//	//prvo polje char niza email=prva memorijska lokacija char niza email
//	ptr = email;
//
//		//Ako je uslov ispunjen i email adresa je pravilno unesena slijedi ispis:
//	if (ispravna(ptr)) {
//		cout << " ----------------------------------------------------------";
//		cout << "\n\t   Email adresa prihvacena!" << endl;
//		cout << " ---------------------------------------------------------- \n";
//	}
//
//		//Ako uslov nije ispunjen i email adresa nije pravilno unesena slijedi ispis:
//	else {
//		cout << " ---------------------------------------------------------- \n";
//		cout << "       Adresa nije u pravilnom formatu!" << endl;
//		cout << " ---------------------------------------------------------- \n";
//	}
//
//}