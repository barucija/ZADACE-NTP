#include "pch.h"
////EMIR BARUCIJA
////	ZADACA 3
////		ZADATAK 3
////			30.03.2020.
//
//#include <iostream>
//#include<stdio.h> 
//

//using namespace std;
//
////Napišite program koji od korisnika traži da sa tastature unese rečenicu, a koji će zatim
////ispisati unesenu rečenicu bez prve riječi te rečenice.Unesena rečenica se smješta u
////klasični niz znakova(dakle, ne u promjenljivu tipa “string”).Za realizaciju zadatka
////koristiti isključivo pokazivačku aritmetiku.Nije dozvoljena upotreba funkcija iz
////biblioteka “cstring” niti “string”, kao ni upotreba indeksiranja(uključujući i njegovu
////trivijalnu simulaciju koja podrazumijeva pisanje “* (a + n)” umjesto “a[n]”).
//
//int main() {
//	
//    cout << "--------------------------------------------------\n";
//	//Upustvo za korisnika
//	cout << "\n  Molimo Vas unesite recenicu: ";
//	char neka_recenica[50];		cin.getline(neka_recenica, 50);
//
//	char* pointer = neka_recenica/*[0]*/;
//
//    cout << endl;
//    cout << "--------------------------------------------------\n";
//    cout << endl;
//	cout << "  Recenica bez prve rijeci glasi: ";
//
//    //while loop radi sve dok pointer ne dodje do indeksa koji je prazan
//    //to jeste dok ne dodje do lokacije koja nije ispunjena
//    while (*pointer != 0) /*'\0'*/
//    {
//        /*ASCII= 32*/
//        if (*pointer == ' ')                //uslov kaze da u slucaju da pointer dodje do indeksa, tj.
//                                            //polja niza na kojem se nalazi razmak/space/' '/32 po ASCII kodu
//        {
//            break;                          //on istu while petlju prekida tj. break-a
//        }
//
//        pointer++;                          //Povecavamo pointer kako bi dosli do sljedec polja u nizu/
//                                            //ili sljedeceg indeksa
//    }
//
//    pointer++;                              //Kako bi izbjegli razmak izmedju rijeci prije ulaska u sljedeci
//                                            //while loop pointer povecavamo za jedan
//
//    //Postupak se ponavlja
//    //while loop radi sve dok pointer ne dodje do indeksa koji je prazan
//    //to jeste dok ne dodje do lokacije koja nije ispunjena
//    while (*pointer != 0)
//    {
//        cout << *pointer;                   //Ispisujemo ostale karaktere niza
//
//        pointer++;                          //Povecavamo pointer kako bi dosli do sljedec polja u nizu/
//                                            //ili sljedeceg indeksa
//    }
//    cout << endl;
//    cout << endl;
//    cout << "--------------------------------------------------\n";
//    cout << endl;   cout << endl;   cout << endl;
//}
