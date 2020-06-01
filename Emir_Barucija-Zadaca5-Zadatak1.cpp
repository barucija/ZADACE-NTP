#include "pch.h"

//using namespace std;
//
//string posebno_ispisana_rijec(string, int);											//Uvodjenje funkcije tipa string u koju prosljedjujemo podatke tipa string i int
//
//int main() {
//
//	cout << "\nUnesite recenicu: ";													//Instrukcija za korisnika programa
//	string recenica;																//Uvodjenje string recenica kao podatka u koji ce biti
//																					//snimljena nasa unesena recenica
//	getline(cin, recenica);															//S tim da je u zadatku navedeno da radimo sa stringovima
//																					//na ovaj nacin upisujemo recenicu
//	//getline + (cin , + string)
//
//	cout << "\nUnesite redni broj rijeci koju zelite posebno ispisati: ";			//Instrukcija za korisnika programa
//	int RB_rijeci;																	//Uvodimo i redni broj rijeci koju trazimo i koju cemo na kraju 
//																					//posebno ispisati
//	cin >> RB_rijeci;																//Upisujemo taj redni broj i spasavamo ga u RB_rijeci
//	cin.ignore();																	//"ignorisanje" svih karaktera koji nisu brojevi kako bi osigurali da je 
//																					//broj proizvoda ustvari broj jelte
//
//	cout << "Rijec pod rednim brojem " << RB_rijeci << " je " << posebno_ispisana_rijec(recenica, RB_rijeci);									
//	//Pozivanje funckije koja ce vratiti posebno ispisanu rijec pod rednim brojem kojeg smo unijeli, u koju smo proslijedili
//	//unesenu recenicu, kao i redbni broj trazene rijeci u toj recenici
//
//	system("PAUSE>null");															//Cisto estetike radi
//}
//
//string posebno_ispisana_rijec(string vec_unesena_recenica, int odabrana_rijec) {
//	
//	string rijec_pod_unesenim_rednim_brojem;
//	int mjesta_do_trazene_rijeci = 0;
//
//	int pocetak_odabrane_rijeci = -1;					//Ukoliko se stavi vrijednost jednaka nuli onda se prva rijec
//														//automatski preskace, tako da je mjesto od kojeg ce odabrana rijec krenuti 
//														//sa vrijdnoscu od '-1'
//	int kraj_odabrane_rijeci = -1;						//Uslov vazi kao i u ovom iznad
//	
//	vec_unesena_recenica.push_back(' ');
//
//	for (int i = 0; i < vec_unesena_recenica.size(); i++) {			//For petlja koja ide od nule pa do velicine unesene recenice koju smo dobili
//																	//funkcijom <nesto>.size()
//	
//			if (vec_unesena_recenica[i] == 32) {					//Dajemo uslov ako je dato slovo jednako razmaku ili ' ', to jeste 
//																	//vrijednosti 32 u ASCII tabeli
//				i++;												//brojac i se povecava kako bi se taj razmak preskocio i kako se ne bi ubrojao u rijec koju trazimo
//			}
//
//			mjesta_do_trazene_rijeci++;								//trazimo mjesto od kojeg pocinje trazena rijec jer cemo u zadnjoj petlji nadjenu rijec
//																	//ograniciti od mjesta do trazene rijeci pa do kraja te iste
//
//			if (odabrana_rijec == mjesta_do_trazene_rijeci)			//U slucaju da je mjesto do trazene rijeci jednako odabranoj rijeci koju trazimo
//				pocetak_odabrane_rijeci = i;						//pocetak_odabrane_rijeci dobija vrijednost i tako znamo od koje vrijednosti pocinje nova rijec
//
//			do  {
//				if (vec_unesena_recenica[i + 1] == 32) {			//kada je nadjen pocetak rijeci brojac se povecava sve do trenutka kada je nadjena vrijednost jednaka
//																	//vrijednosti 32 u ASCII tabeli i onda kraj odabrane rijeci dobija vrijednos "i", i na taj nacin
//					kraj_odabrane_rijeci = i;						//znamo granicu od koje pocinje i zavrsava trazena rijec
//				}
//				i++;
//			} while(vec_unesena_recenica[i] != 32);					//ovaj do while loop radi sve dok je vrijednos na poziciji "i" razlicita od razmaka
//
//			if (pocetak_odabrane_rijeci != -1 && kraj_odabrane_rijeci != -1) {
//				break;
//			}
//		}
//
//	for (int j = pocetak_odabrane_rijeci; j <= kraj_odabrane_rijeci; j++) {				//Kao sto sam vec rekao nadjenu rijec smo ogranicili od vrijednosti
//																						//od koje pocinje ta rijec a to je pocetak_odabrane_rijeci kojoj smo
//																						//pridruzili vrijednos i kada je uslov bio zadovoljen, i vrijednost 
//																						//kraj odabrane rijeci kojoj smo takodjer pridruzili vrijednost kada je nadjen
//																						//kraj iste
//		rijec_pod_unesenim_rednim_brojem.push_back(vec_unesena_recenica[j]);			//u strnig mozemo unijeti datu rijec kao sto mozemo i u vektore sa funckijom
//																						//<nesto>.pushback(<rijeckojuunosimo>)
//	}
//
//	return rijec_pod_unesenim_rednim_brojem;											//u main program naime vracamo nadjenu rijec
//}