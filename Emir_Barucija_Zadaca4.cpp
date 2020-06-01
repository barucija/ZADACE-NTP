#include "pch.h"
//using namespace std;
//
//int main() {
//
//	vector<string> rijeci;										//Uvodimo vektore ciji su elementi stringovi naziva "rijeci"
//
//	int brojac;													//Brojac koji odredjuje koliko ce rijeci biti uneseno
//
//	cout << endl;
//	cout << "------------------------------------\n";
//	cout << endl;
//	cout << "Koliko rijeci zelite unijeti? \nUnesite broj rijec: ";		cin >> brojac;		cin.ignore();
//	cout << endl;
//
//	for (int i = 0; i < brojac; i++) {
//		cout << "Unesite " << i + 1 << ". rijec: ";
//		string temp;											//Uvodimo temp string varijablu
//																//U nju unonsimo rijeci koje cemo kasnije smjestiti u malocas deklarisane vektore 
//		cin >> temp;
//		rijeci.push_back(temp);									//Unesena rijec u temp varijabli se smjesta u vektore "rijeci"
//	}
//
//	string temp;												//Pomocna varijabla koja ce sluziti iskljucivo za poredjenje rijeci
//
//	for (int i = 0; i < rijeci.size(); i++) 					//.size() nam govori koliko elemenata ima taj vektor, u nasem slucaju 
//																//koliko smo rijeci unijeli u pomenuti vektor
//		for (int j = 0; j < rijeci.size() - 1; j++) 
//			if (rijeci[j] > rijeci[j + 1]) {
//				temp = rijeci[j];
//				rijeci[j] = rijeci[j + 1];
//				rijeci[j + 1] = temp;
//			}
//
//	cout << endl;
//	cout << "------------------------------------\n";
//	cout << endl;
//
//	//Nakon sortiranja prva rijec u vektoru, kao sto je slucaj i sa nizovima, je naravno na nultom indeksu tj. prvoj poziciji
//	//Dok je zadnja rijec u sortiranom vektoru na zadnjoj poziciji kao sto se nalazi u liniji ispod
//	cout << "Prva rijec je " << rijeci[0] << ", a zadnja rijec je " << rijeci[rijeci.size() - 1] << endl;
//	cout << endl;
//	cout << "------------------------------------\n";
//
//	cout << endl;
//	cout << "ISPIS RIJECI POREDANIH PO ABECEDI";
//	cout << endl;
//	cout << endl;
//
//	//Nakon sto smo u proslom koraku soritrali niz stringova, ovdje 
//	int br = 1;													//brojac uveden cisto radi oznacavanja koja rijec po redoslijedu odlazi
//
//	rijeci.push_back("");										//Sa komandom .push_back() dodajemo sta zelimo u vektore ciji su elementi stringovi
//
//	for (int i = 0; i < rijeci.size()-1; i++) {
//		if (rijeci[i] != rijeci[i+1]) {							//Uslov kako se ne bi iste rijeci ponavljale u ispisu
//			cout << setw(2) << br++ << ". rijec je: " << setw(5) << rijeci[i] << endl;
//			//setw(x) cisto radi estetike
//		}
//		
//	}
//	cout << endl;
//	cout << "------------------------------------\n";
//	
//
//	cout << endl;
//	cout << endl;
//
//}