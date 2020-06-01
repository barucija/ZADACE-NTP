#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct student{
	char ime[10];
	char prezime[15];
	int predmet;
	int ocjena;
}studenti[100];

int main(){
	
	
	
	float s1=0, s2=0, s3=0, s4=0, s5=0, s6=0, s7=0, s8=0, s9=0, s10=0; //sume
	float br1=0, br2=0, br3=0, br4=0, br5=0, br6=0, br7=0, br8=0, br9=0, br10=0; //brojaci
	float p1=1, p2=1, p3=1, p4=1, p5=1, p6=1, p7=1, p8=1, p9=1, p10=1; //prosjek
	//tip podataka float iz razloga sto ce krajnji rezultat doci sa zarezom, to jeste imat ce decimalni dio

	student s;
	
	int ocjena;
	
	int br;
	cout << "----------------------------------" << endl;
	do{
		cout << "Broj studenata je: ";	cin >> br;
	} while ((br < 0) || (br > 100));	//granica koja je data tekstom u zadatku se osigurao ovim uslovom

	for (int i = 0; i < br; i++){
		
		cout << "-------------------------" << endl;
		cout << i+1 << ". student je: \n";
		cout << "Ime: ";	cin >> studenti[i].ime;
		cout << "Prezime: ";	cin >> studenti[i].prezime;
		
		do {
				cout << "Unesi predmet: ";
				cin >> studenti[i].predmet;

			if((studenti[i].predmet < 1) || (studenti[i].predmet > 10)) {
				cout << "[GRESKA] Predmeti su od 1 do 10. Molimo Vas unesite opet predmet!\n";
				cout << "Unesi predmet: ";
				cin >> studenti[i].predmet;
			}
			
		}while ((studenti[i].predmet < 1) || (studenti[i].predmet > 10));		//raspon od kojeg broja do kojeg idu predmeti se osigurao ovim uslovom
		
		do{
			cout << "Unesi ocjenu: ";
				cin >> studenti[i].ocjena;
					
					if((studenti[i].ocjena < 5) || (studenti[i].ocjena > 10)) {
					cout << "[GRESKA] Ocjene su od 5 do 10. Molimo Vas unesite opet ocjenu!\n";
					cout << "Unesi ocjenu: ";
					cin >> studenti[i].ocjena;
					}
		}while((studenti[i].ocjena < 5) || (studenti[i].ocjena > 10));		//raspon od kojeg broja do kojeg idu ocjene se osigurao ovim uslovom
				
			int ocjena;
		//	ocjena=studenti[i].ocjena;
			
			
			//uslovi uz pomoc kojih se dolazi do racunice za sam prosjek
			//svaki predmet od 0 do 10 ima svoj islov, a isti se ispunjava unosenjem upravo jednog od tih brojeva
			if (studenti[i].predmet==1){
				s1+=studenti[i].ocjena;
				br1++;
			}			
			if(studenti[i].predmet==2){
				s2+=studenti[i].ocjena;
				br2++;
			}
			if(studenti[i].predmet==3){
				s3+=studenti[i].ocjena;
				br3++;
			}
			if(studenti[i].predmet==4){
				s4+=studenti[i].ocjena;
				br4++;	
			}
			if(studenti[i].predmet==5){
				s5+=studenti[i].ocjena;
				br5++;		
			}
			if(studenti[i].predmet==6){
				s6+=studenti[i].ocjena;
				br6++;
			}
			if(studenti[i].predmet==7){
				s7+=studenti[i].ocjena;
				br7++;
			}
			if(studenti[i].predmet==8){
				s8+=studenti[i].ocjena;
				br8++;
			}
			if(studenti[i].predmet==9){
				s9+=studenti[i].ocjena;
				br9++;
			}
			if(studenti[i].predmet==10){
				s10+=studenti[i].ocjena;
				br10++;
			}
	}
	
	cout << "---------------------------------------" << endl;

		
		//krajnji ispis trazen u zadatku
	for ( int i=0; i<br; i++ )	//for petlja koja ima istu funkciju kao i pocetna, a to je da ispisuje studente
		cout << studenti[i].ime << "" <<setw(5) << "" << studenti[i].prezime << "" << setw(7) << "" << setprecision(2) << studenti[i].predmet << "" << setw(7) << "" 
		<< studenti[i].ocjena << endl;

	cout << "--------------------------------------" << endl;
	
	//racunanje prosjeka
	//brojac koji nije veci od 1, to jeste koji se u if petljama iznad nije povecao ce automatski iskljucuje svoju funkciju
	//brojaci koji imaju vrijednost vecu od 1 ulaze u krug racunanja prosjeka jer su isti ispunili uslov
	if(br1>0){
		p1=s1/br1;
		cout << "1		" << fixed << setprecision(2) << p1 << endl;
	}
	if(br2>0){
		p2=s2/br2;
		cout << "2		" << fixed << setprecision(2) << p2 << endl;	
	}
	if(br3>0){
		p3=s3/br3;
		cout << "3		" << fixed << setprecision(2) << p3 << endl;	
	}
	if(br4>0){
		p4=s4/br4;
		cout << "4		" << fixed << setprecision(2) << p4 << endl;
	}
	if(br5>0){
		p5=s5/br5;
		cout << "5		" << fixed << setprecision(2) << p5 << endl;
	}
	if(br6>0){
		p6=s6/br6;
		cout << "6		" << fixed << setprecision(2) << p6 << endl;
	}
	if(br7>0){
		p7=s7/br7;
		cout << "7		" << fixed << setprecision(2) << p7 << endl;
	}
	if(br8>0){
		p8=s8/br8;
		cout << "8		" << fixed << setprecision(2) << p8 << endl;
	}
	if(br9>0){
		p9=s9/br9;
		cout << "9		" << fixed << setprecision(2) << p9 << endl;
	}
	if(br10>0){
		p10=s10/br10;
		cout << "10		" << fixed << setprecision(2) << p10 << endl;
	}

	return 0;
}



