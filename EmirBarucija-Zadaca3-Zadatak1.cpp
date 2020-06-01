#include "pch.h"
//EMIR BARUCIJA
//	ZADACA 3
//		ZADATAK 1
//			30.03.2020.

//#include <iostream>
//using namespace std;
//
////Napisati funkciju koja kao argument uzima znakovno polje jmbg(jedinstveni maticni
////broj gradjanina) a kao izlaz vraca strukturnu varijablu koja predstavlja datum rodjenja
////doticne osobe.Prototip funkcije je : struct datum fdatum(char* jmbg) gdje struct
////datum predstavlja strukturu definisanu kao : Nakon toga napišite glavni program koji sa
////standardnog ulaza ucitava jmbg kao znakovno polje a nakon poziva funkcije fdatum()
////ispisuje datum rodjeja osobe sa doticnim jedinstvenim maticnim brojem.
//
//
////JBMG ima 13 znakova
//
//struct datum {
//	int dan;
//	int mjesec;
//	int godina;
//};
//
//struct datum fdatum(char* jmbg) {
//	struct datum datum_rodjenja;
//	//strukturna varijabla od strukture datum
//
//	struct datum* pokazivac;
//	//pokazivac koji pokazuje na strukturu
//
//	datum_rodjenja.dan = 0;
//	datum_rodjenja.mjesec = 0;
//	datum_rodjenja.godina = 0;
//
//	for (int i = 0; i < 10; i++)	if (*(jmbg) == 49 + i)	datum_rodjenja.dan = 10 * (i + 1);				//Desetice u broju koji oznacava dan rodjenja
//	for (int i = 0; i < 10; i++)	if (*(jmbg + 1) == 49 + i)	datum_rodjenja.dan += (i + 1);				//Jedinice u broju koji oznacava dan rodjenja
//
//	for (int i = 0; i < 10; i++)	if (*(jmbg + 2) == 49 + i)	datum_rodjenja.mjesec = 10 * (i + 1);		//Desetice u broju koji oznacava mjesec rodjenja
//	for (int i = 0; i < 10; i++)	if (*(jmbg + 3) == 49 + i)	datum_rodjenja.mjesec += (i + 1);			//Jedinice u broju koji oznacava mjesec rodjenja
//
//	for (int i = 0; i < 10; i++)	if (*(jmbg + 4) == 49 + i)	datum_rodjenja.godina += 100 * (i + 1);		//Stotice u broju koji oznacava godinu rodjenja
//	
//	//Necemo uzimati u obzir osobe koje su rodnjene 10xx. godina
//	if (datum_rodjenja.godina == 0 ) {
//		datum_rodjenja.godina = datum_rodjenja.godina + 2000;												//Ako je stotica jednaka nuli, vec pomenuto da osobe rodjenje
//																											//19xx. godina nece biti uvedene u ovaj program
//																											//program dodaje 2000 i prebacuje na godista 2xxx.
//	}
//	else {
//		datum_rodjenja.godina = datum_rodjenja.godina + 1000;												//Ako su stotice barem 1 ili vise
//																											//Program uracunava i osobe rodjenje od 11xx. pa dalje
//																											//Dodaje se 1000 i nastavlja racunanje godista
//	}
//	//Uslovi su uvedeni iz prostog razloga sto je realnije da je neko rodjen 15xx. godine nego 29xx.
//
//	for (int i = 0; i < 10; i++)	if (*(jmbg + 5) == 49 + i)	datum_rodjenja.godina += 10 * (i + 1);		//Desetice u broju koji oznacava godinu rodjenja
//	
//	for (int i = 0; i < 10; i++)	if (*(jmbg + 6) == 49 + i)	datum_rodjenja.godina += (i + 1);			//Hiljadice u broju koji oznacava godinu rodjenja
//		
//	pokazivac = &datum_rodjenja;																			//Pokazivac pokazuje na prvu poziciju novonastale strukture
//
//	return *pokazivac;
//}
//
//int main() {
//
//	datum datum_rodnjenja;
//
//	cout << "\n\n\t\tUnestite jedinstveni maticni broj gradjanina: \n";										//Unosenje maticnog broja
//	cout << "\t\t";
//	char jmbg[14];
//	cin >> jmbg;
//
//	fdatum(jmbg);
//
//	datum_rodnjenja = fdatum(jmbg);
//	cout << "\t\tDantum rodjenja:	" << datum_rodnjenja.dan << "/" << datum_rodnjenja.mjesec << "/" << datum_rodnjenja.godina << endl;
//}