#include "pch.h"
//#include<iostream>
//#include <stdio.h>
//using namespace std;
//
////f1=Funckija povratnog tipa int koja prima jedan argument po vrijednosti, a drugi po referenci
//int f1(int a, int* b)
//{
//
//    int c = 0;
//
//    //U ovom koraku smo proslijedili a=1, kao i b=1 koje u daljem toku odvijanja procesa
//    //primaju nove vrijednosti, a potom se zadane operacije izvrsavaju nad njima
//    a = 2;
//    //Takodjer, s tim da je b proslijedjeno po referenci isto se mora dereferencirati (*)
//    *b = 3;
//    c = a + 2;
//    return c;
//}
//
//
////f2=Funckija povratnog tipa int takodjer koja u ovom slucaju prima samo jedan argument
////i to proslijedjen po referenci
//int f2(int* p1)
//{
//    int a;
//    //S tim da u main funckiji prosljedjujemo adresu &B[0][0]+1 to znaci da nam je vrijednost na ovom indexu 3		
//    p1 = p1 + 2;	// S tim da na p1 nemamo dereferenciranje (*) to automatski znaci da ce nam se index na p1, tj B[][] pomjeriti za 2 mjesta
//    a = (*p1) + 2;	// a analogno tome to nam daje vrijednost na B[1][1] = *p1=7;
//                    //zatim vrsimo operaciju nad tom vrijednosti, a ne adresom, a to znaci 7+2=9;
//    return a;
//}
//
////f3=Funckija koja prima znakovni argument (char) i pri tome nema povratni tip
//void f3(char* p)
//{
//    *p = '?';		//Prvom karakteru u definisanom nizu "rijeka", tj. "rijeka[0]" se dodjeljuje vrijednost/pretvara se u "?"
//    p++;			//Ovim korakom funckija prelazi na sljedeci karakter u u definisanom nizu "rijeka", tj. "rijeka[1]"
//    *p = '?';		//Taj karakter se pretvara/dodjeljuje mu se vrijednost "?"
//}
//
//int main()
//{
//    int A[5] = { 2,4,6,8,10 };				//Deklarisanje niza "A" sa 5 elemenata
//    int B[2][2] = { 1,3,5,7 };				//Deklaracija 2D niza ili tzv. matrice
//    char rijeka[] = "Miljacka";				//Deklarisanje jednog niza karaktera (char)
//    int a = 1, b = 1, c = 0;					//Deklaracija lokalnih varijabli, u ovom slucaju njih 3
//    int* p1 = &B[0][0];						//Deklarisanje pokazivaca/pointera p1 koji pokazuje na vrijednost smjestenu na adresi B[0][0]
//    c = *(A + 1) + (*(p1 + 2));				//*(A+1) oznacava da se trazi/pokazuje na vrijednost koja je na indexu broj 1
//    cout << c;								//jer se izvrsilo povecanje index-a preko adrese (A+1), a takodjer							
//												//isto ovo je uradjeno i sa matricom/2D nizom gdje je index pomjeren za 2 polja
//    /* Kao ispis se dobije: 9 */				//Izvrseno je sabiranje sa indexima A[1]=4 i B[1][0]=5, tj. 4+5=9;
//
//    c = f1(a, &b);							//Izvrseno je proslijedjivanje u funkciju f1 argumenta a po vrijednosti i b po referenci
//    cout << a << b << c;						//S tim da smo proslijedili a po vrijednosti, a ne po referenci ispis za a nece imati utjecaj  na
//											    //promejnu koja se desila u samoj funckiji f1 gdje je "a" dobilo vrijednost 2
//    /* Kao ispis se dobije: 134 */			//Medjutim s tim da smo proslijedili b po referenci njegova vrijednost se mijenja, a c predstavlja povratnu vrijednost te funckije
//
//    c = f2(&B[0][0] + 1);						//U ovu funckiju prosljedjujemo adresu u matrici B povecanu za 1, tj. samu vrijednost 3 na indexu B[1][0]
//    cout << c;
//
//    /* Kao ispis se dobije: 9 */
//
//    c = f2(A + 1);							//U ovu funkciju prosljedjujemo vrijednost na mjestu/indexu A+1, tj. A[1]=4;
//    cout << c;
//
//    /* Kao ispis se dobije: 10 */
//
//    f3(rijeka);								//U ovu funkciju prosljedujemo niz karaktera "rijeka"
//    cout << rijeka;							//Vrsi se ispis sa promjenama uradjenim u samoj funckiji
//
//     /* Kao ispis se dobije: ??ljacka */
//
//    system("PAUSE>null");
//    return 0;
//}
//
///* 						FINALNI ISPIS PROGRAMA GLASI:	9134910??ljacka							*/