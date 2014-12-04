#include "library.h"


int Plansza::idzdo( short int pion, short int poziom )
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE) ;	// uchwyt
    COORD position = { poziom, pion } ;		// przypisanie zmiennych do pozycji

    SetConsoleCursorPosition( hStdout, position ) ;	// ustawienie pozycji
}

// metoda pozwalajaca po raz pierwszy wykonac ruch
// reszta ma miejsce w funkcjach odpowiadających strzałkom
int Plansza::ruch( char tablica[][30])
{
	// petla główna. To dzięki niej można poruszać się po planszy
	poziom = 16;
	pion = 1;
	x = 29;
	y = 15;
	
	do{
	Plansza *plan = new Plansza;
	// warunki wcisniecia klawiszy. Np. po wcisnieciu strzalki w lewo zmienna poziom maleje o 1.
	// ma to później przełożenie na wyswietlanie planszy i zaznaczenie pozycji kolorem
	// funkcja zaczerpnieta z biblioteki Windows.h jest to odpowiednik funkcji getch()
 	if ((GetKeyState(strzalka_prawo) & 0x8000) && poziom < 27)
	 {
	 	plan->prawo(pion,poziom,tablica,x,y,punktacja);
	 } 
	 
	 
    if ((GetKeyState(strzalka_lewo) & 0x8000) && poziom > 0)
	{
		plan->lewo(pion,poziom,tablica,x,y,punktacja);
	}
	
	
    if ((GetKeyState(strzalka_dol) & 0x8000) && pion < 31)
    {
    	plan->dol(pion,poziom,tablica,x,y,punktacja);
	}
	
	
    if ((GetKeyState(strzalka_gora) & 0x8000) && pion > 0)
    {
    	plan->gora(pion,poziom,tablica,x,y,punktacja);
	}
	
	
	delete plan;
	
	// główna pętla działa dopóki zmienna poziomu nie osiągnie wartosci 30
   // wartosc poziom jest ograniczona do 28 pól co powoduje, że pętla ta nigdy sie nie skonczy
   // chyba że zostanie wcisniety przycisk wyscia z gry 	
	}while(poziom != 30);
	system("pause");
}

// metoda wyswietlająca plansze po raz pierwszy
// zmiany później mają miejsce dzięki metodzie idzdo()
int Plansza::wyswietlanie(char tablica[][30])
{
		// na start zmiana miejsca wczytywania planszy aby ładniej wyglądało
		// cout << "\t" po pierwszej pętli powoduje wyswietlanie każdej lini 
		// w odleglosci tabulatora od lewj krawedzi okna
		// obie pętle służą do wyswietlania Planszy. Pierwsza wyswietla pion, druga poziom. 
			
			Plansza *plansza1 = new Plansza;
			
	   		for (int lpo = 0; lpo < 31; ++lpo){ 
                for (int lpi = 0; lpi < 30; ++lpi)
                {	
						if(tablica[lpo][lpi] == '2')
						{
							SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x00);
						}
                		if(tablica[lpo][lpi] == '|' || tablica[lpo][lpi] == '-' || tablica[lpo][lpi] == '_' ){
                			SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x03);
                		}
                		if(tablica[lpo][lpi] == '.') SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
                		plansza1->idzdo(lpo,lpi + 15);
						cout <<  tablica[lpo][lpi];
				}
				// przejscie do nastepnej lini
            	cout << "\n";
            }
            Sleep(100);
            delete plansza1;
}

int Plansza::lewo(short int pion, short int& poziom, char tablica[][30], short int& x, short int y, int& punktacja)
{
	
	Duch *duszek = new Duch;
	Plansza *plan1 = new Plansza;
		while(tablica[pion][poziom] != 0 )
	 	{
	 		plan1->idzdo( pion, poziom + 15 ); tablica[pion][poziom] = ' '; cout << ' ';
			poziom--;
			
				if(tablica[pion][poziom + 15] == '.')
				 {
				 	tablica[pion][poziom + 15] = ' ';
				 	punktacja += 1;
				 }
				  if(tablica[pion][poziom] == '|' || tablica[pion][poziom] == '-' || tablica[pion][poziom] == '_')
				 {
				 	poziom++;
				 }
				 if(tablica[pion][poziom + 15] == 'o')
				 {
				 	punktacja += 100;
				 }
				 
				 // potrzebne sprawdzenie petlami czy zostaly zjedzone wszystkie kropki
				 // kazda kropka zmienna++; jesli brak to wygrales
				 if(punktacja == 641)
				 {
				 	system("cls");
				 	cout << "Wygrales\n"; 
					system("pause");
					system("cls");
				 }
				 duszek->latwy_lewo(x,y,pion,poziom,tablica);
				 plan1->idzdo( pion, poziom+15 );
				 cout << ">";
				if ((GetKeyState(strzalka_prawo) & 0x8000)) plan1->prawo(pion,poziom,tablica,x,y,punktacja);
				if ((GetKeyState(strzalka_dol) & 0x8000)) plan1->dol(pion,poziom,tablica,x,y,punktacja);
				if ((GetKeyState(strzalka_gora) & 0x8000)) plan1->gora(pion,poziom,tablica,x,y,punktacja);
				 
			Sleep(200);
			
		}
		delete duszek;
		delete plan1;
}

int Plansza::prawo(short int pion, short int& poziom, char tablica[][30], short int& x, short int y, int& punktacja)
{
	Duch *duszek = new Duch;
	Plansza *plan1 = new Plansza;
	while(tablica[pion][poziom] != 0 )
	 	{
	 		plan1->idzdo( pion, poziom + 15); tablica[pion][poziom] = ' '; cout << ' ';
		 	poziom++;
		 		if(tablica[pion][poziom + 15] == '.')
				 {
				 	punktacja += 1;
				 }
				 if(tablica[pion][poziom] + 15 == 'o')
				 {
				 	tablica[pion][poziom + 15] = ' ';
				 	punktacja += 100;
				 }
				 if(tablica[pion][poziom] == '|' || tablica[pion][poziom] == '-' || tablica[pion][poziom] == '_')
				 {
				 	poziom--;
				 }
				 if(punktacja == 641){
				  	system("cls");
				   	cout << "Wygrales\n";
				    system("pause");
					system("cls");
					}
				 if(tablica[pion][poziom + 15] == 'A'){system("pause");cout << "Przegrales\n Twój wynik to" << punktacja << endl; system("pause"); break;	}
				 duszek->latwy_prawo(x,y,tablica);
				 plan1->idzdo( pion, poziom + 15); 
				 cout << "<";
				 
				plan1->idzdo(31,1); cout << "Score: " << punktacja << endl;
			if(GetKeyState(esc) & 0x8000) {Menu *menu1 = new Menu; menu1->menu(pion,poziom,tablica); delete menu1;}
			 if ((GetKeyState(strzalka_lewo) & 0x8000)) plan1->lewo(pion,poziom,tablica,x,y,punktacja);
			 else if ((GetKeyState(strzalka_dol) & 0x8000)) plan1->dol(pion,poziom,tablica,x,y,punktacja);
			 else if ((GetKeyState(strzalka_gora) & 0x8000)) plan1->gora(pion,poziom,tablica,x,y,punktacja);
			 Sleep(200);	
		}
		delete plan1;
}
                                            
int Plansza::dol(short int& pion, short int poziom, char tablica[][30], short int x, short int& y, int& punktacja)
{
	Plansza *plan1 = new Plansza;
		while(tablica[pion][poziom] != 0 )
	 	{	
	 		Duch *duszek = new Duch;
	 		plan1->idzdo( pion, poziom + 15); tablica[pion][poziom] = ' '; cout << ' ';
	    	pion++;
				if(tablica[pion][poziom + 15] == '.')
				 {
				 	punktacja += 1;
				 }
				 if(tablica[pion][poziom + 15] == 'o')
				 {
				 	tablica[pion][poziom + 15] = ' ';
				 	punktacja += 100;
				 }
				  if(tablica[pion][poziom] == '|' || tablica[pion][poziom] == '-' || tablica[pion][poziom] == '_')
				 {
				 	pion--;
				 }
				 if(punktacja == 641){
				  system("cls");
				   cout << "Wygrales\n";
				    system("pause");
					system("cls");
					 }
				 if(tablica[pion][poziom + 15] == 'A'){cout << "Przegrales\n Twój wynik to" << punktacja << endl; system("pause"); break;	}
				 duszek->latwy_dol(x,y,tablica);
				 plan1->idzdo( pion, poziom + 15);
				cout << "^";
				plan1->idzdo(31,1); cout << "Score: " << punktacja << endl;
				 if ((GetKeyState(strzalka_prawo) & 0x8000)) plan1->prawo(pion,poziom,tablica,x,y,punktacja);	   
				 else if ((GetKeyState(strzalka_lewo) & 0x8000)) plan1->lewo(pion,poziom,tablica,x,y,punktacja);
				 else if ((GetKeyState(strzalka_gora) & 0x8000)) plan1->gora(pion,poziom,tablica,x,y,punktacja);
				  Sleep(200);
		}
		delete plan1;
}
           
int Plansza::gora(short int& pion, short int poziom, char tablica[][30], short int x, short int& y, int& punktacja)
{                                                                                     
	Duch *duszek = new Duch;
	Plansza *plan1 = new Plansza;
	while(tablica[pion][poziom] != 0 )
	 	{                  
	 		plan1->idzdo( pion, poziom + 15); tablica[pion][poziom] = ' '; cout << ' ';
	    	pion--;
	    	   	if(tablica[pion][poziom + 15] == '.')
				 {
				 	punktacja += 1;
				 }
				 if(tablica[pion][poziom + 15] == 'o')
				 {
				 	tablica[pion][poziom + 15] = ' ';
				 	punktacja += 100;
				 }
				  if(tablica[pion][poziom] == '|' || tablica[pion][poziom] == '-' || tablica[pion][poziom] == '_')
				 {
				 	pion++;                                                          
				}
				if(punktacja == 641){ 
				system("cls");
				 cout << "Wygrales\n";
				  system("pause");
				  system("cls");
					}
				if(tablica[pion][poziom + 15] == 'A'){cout << "Przegrales\n Twój wynik to" << punktacja << endl; system("pause"); break;	}
				duszek->latwy_gora(x,y,tablica);
				 plan1->idzdo( pion, poziom + 15 );
				  cout << "V";
				  plan1->idzdo(31,1); cout << "Score: " << punktacja << endl;
				 if ((GetKeyState(strzalka_prawo) & 0x8000)) plan1->prawo(pion,poziom,tablica,x,y,punktacja);
				 else if ((GetKeyState(strzalka_lewo) & 0x8000)) plan1->lewo(pion,poziom,tablica,x,y,punktacja);
				 else if ((GetKeyState(strzalka_dol) & 0x8000)) plan1->dol(pion,poziom,tablica,x,y,punktacja);
				 Sleep(200);
		}
		delete plan1;
}                                                                                
