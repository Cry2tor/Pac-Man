#include "library.h"


short int pion = 1;
short int poziom = 5;	
int punktacja;		
char tmpplansza[31][30];
	//deklaracja planszy. Puste miejsca i kropki oznaczają, że pac-man może się po tych polach poruszać
	// za najechanie na kropkę dodawane są punkty
	// Pac-man nie może zas przekroczyc znaków | _ -
	// plansza zaczerpnieta z internetu
char tablica[31][30];

int main()
{
	// na razie jeszcze nie przydatne
	for (int lpo = 0; lpo < 31; ++lpo){ 
         for (int lpi = 0; lpi < 30; ++lpi){
           tmpplansza[lpo][lpi] = tablica[lpo][lpi];
         }
    }
 
 // wywołanie menu. Reszta programu dzieje się w innych funkcjach   
    
    Menu *menu1 = new Menu;
	menu1->menu(pion,poziom,tablica);
	delete menu1;	
	
}
