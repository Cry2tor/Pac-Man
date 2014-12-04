#include "Library.h"



// funkcja odpowiada za wybor pozomu trudnosci
int Menu::poziom(char znak, char tablica[][30])
{
	int oppoziom = 0;
	int oppion = 0;
		licznik = 0;
	
	Plansza *plansza1 = new Plansza;
	Menu *menu1 = new Menu;
	
	system("cls");
	cout << "\n\n\n";

while(oppion != 10)
{
	
	if(oppion == 1 && oppoziom == 1)
	{
		licznik -=1;
		menu1->wczytajplanszezpliku(licznik,tablica);
		plansza1->idzdo(1,15);
		plansza1->wyswietlanie(tablica);
		plansza1->idzdo(37,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Wybierz plansze:\n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << "\t\t <-";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "    Standard    ->\n";
	}
	else if(oppion == 1 && oppoziom == 2)
	{
		licznik += 1;
		menu1->wczytajplanszezpliku(licznik,tablica);
		plansza1->idzdo(1,15);
		plansza1->wyswietlanie(tablica);
		plansza1->idzdo(37,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Wybierz plansze:\n";
		cout << "\t\t <-    Standard    ";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << "->\n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
	}
	else{
		plansza1->idzdo(37,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Wybierz plansze:\n";
		cout << "\t\t <-    Standard    ->\n";
	}
	if(oppion == 2 && oppoziom == 1)
	{
		plansza1->idzdo(40,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Poziom Trudnosci:\n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << "\t\t <- ";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "   Latwy       ->\n";
	}	
	else if(oppion == 2 && oppoziom == 2)
	{
		plansza1->idzdo(40,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Poziom Trudnosci:\n";
		cout << "\t\t <-    Latwy       ";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << "->\n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
	}
	else{
		plansza1->idzdo(40,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Poziom Trudnosci:\n";
		cout << "\t\t <-    Latwy       ->\n";
	}
	if( oppion == 3 && oppoziom == 1)
	{
		plansza1->idzdo(42,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Ilosc duszkow: \n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << "\t\t <- ";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "    1          ->\n";
	}
	else if( oppion == 3 && oppoziom == 2)
	{
		plansza1->idzdo(42,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Ilosc duszkow: \n";
		cout << "\t\t <-     1         ";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << " ->\n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
	}
	else{
		plansza1->idzdo(42,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Ilosc duszkow: \n";
		cout << "\t\t <-     1          ->\n";
	}
	if(oppion == 4 && oppoziom == 1)
	{
		plansza1->idzdo(44,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Kolor planszy: \n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << "\t\t <-   ";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "niebieski    -> \n";
	}
	else if(oppion == 4 && oppoziom == 2)
	{
		plansza1->idzdo(44,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Kolor planszy: \n";
		cout << "\t\t <-   niebieski   ";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << " -> \n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
	}
	else{
		plansza1->idzdo(44,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Kolor planszy: \n";
		cout << "\t\t <-   niebieski    -> \n";
	}
	if(oppion == 5 && oppoziom == 1)
	{
		plansza1->idzdo(46,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Wybierz muzyke: \n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << "\t\t <-   ";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "default      -> \n";
	}
	else if(oppion == 5 && oppoziom == 2)
	{
		plansza1->idzdo(46,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Wybierz muzyke: \n";
		cout << "\t\t <-   default   ";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << "   -> \n";
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
	}
	else{
		plansza1->idzdo(46,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Wybierz muzyke: \n";
		cout << "\t\t <-   default      -> \n";	
	}
	if(oppion == 6 && oppoziom == 1)
	{
		plansza1->idzdo(50,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x04);
		cout << "Wyjdz";
	}
	else{
		plansza1->idzdo(50,20);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Wyjdz";
	}
	if(oppion == 6 && oppoziom == 1 && znak == 13)
	{
		system("cls");
		break;
	}			
	if(oppion == 6 && oppoziom == 2)
	{
		plansza1->idzdo(50,35);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x02);
		cout << "Graj";
	}
	else{
		plansza1->idzdo(50,35);
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x07);
		cout << "Graj";
	}
	if(oppion == 6 && oppoziom == 2 && znak == 13)
	{
		system("cls");
		plansza1->wyswietlanie(tablica);
		plansza1->ruch(tablica);
	}
	
		znak = getch();	
		switch( znak )
	    {
	    case 72: //strzalka w gore
	   	oppion--; break;
	    case 80: // strzałka w dół
		oppion++; break;
		case 75: // strzałka w lewo
		oppoziom--; break;
		case 77: // strzałka w prawo
		oppoziom++; break;
		}
		if(oppion == 0) oppion++;  
		if(oppion == 7) oppion--;
		if(oppoziom == 0) oppoziom++;
		if(oppoziom == 3) oppoziom--;
	
	}
	delete menu1;
	delete plansza1;
}

int Menu::menu(short int pion, short int poziom, char tablica[][30])
{
	int opcja = 0;
    char znak;
    
    // opcja nigdy nie będzie wynosiła 10
    while( opcja != 10 )
    {
		Menu *menu1 = new Menu;
        system("cls");
        
        cout << "\n\n\n\n\n\n";
        
        if ( opcja == 0)
		{	
			SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x02);
        	cout << "   \t-> Graj\n";	
        }
        else
		{
				cout << "   \tGraj\n"; 
		} 
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07 );
		if( opcja == 0 && znak == 13 ) 
		{
			for(int licz = 6; licz <= 14; ++licz )
			{
				menu1->idzdo(6,licz);
				cout << '<';
				menu1->idzdo(6,licz-1);
				cout << ' ';
				Sleep(100);
			}
			system("cls");
			menu1->poziom(znak,tablica);
			cout << "\n";
			
		}
		if ( opcja == 1)
		{	
			SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x02);
        	cout << "   \t-> Ranking\n";	
        }
        else
		{
				cout << "   \tRanking\n"; 
		} 
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07 );
		if( opcja == 1 && znak == 13 ) 
		{
			for(int licz = 6; licz <= 17; ++licz )
			{
				menu1->idzdo(7,licz);
				cout << '<';
				menu1->idzdo(7,licz-1);
				cout << ' ';
				Sleep(100);
			}
			system("cls");
			menu1->ranking(punktacja,pion,poziom);
			cout << "\n";
			
		}
		if( opcja == 2 )
		{
			SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x02);
        	cout << "    \t-> Instrukcja\n";
		}
		 else
		{
        	cout << "    \tInstrukcja\n";	
        }
      	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07 );
		if( opcja == 2 && znak == 13)
		{
			for(int licz = 6; licz <= 20; ++licz )
			{
				menu1->idzdo(8,licz);
				cout << '<';
				menu1->idzdo(8,licz-1);
				cout << ' ';
				Sleep(100);
			}
			system("cls");
			menu1->instrukcja(pion, poziom, tablica);
		}
		if ( opcja == 3)
		{	
			SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x02);
        	cout << "   \t-> Edytor\n";	
        }
        else
		{
				cout << "   \tEdytor\n"; 
		} 
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07 );
		if( opcja == 3 && znak == 13 ) 
		{
			for(int licz = 6; licz <= 17; ++licz )
			{
				menu1->idzdo(9,licz);
				cout << '<';
				menu1->idzdo(9,licz-1);
				cout << ' ';
				Sleep(100);
			}
			system("cls");
			Plansza *plan1 = new Plansza;
			plan1->edytor(tablica);
			delete plan1;
			cout << "\n";
			
		}	
        if( opcja == 4 ) 
        {
        	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x02);
        	cout << "    \t-> Wczytaj\n";
        }
        else
		{
        	cout << "    \tWczytaj\n";	
        }
        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07 );
        if( opcja == 4 && znak == 13 ) 
        {
        	for(int licz = 6; licz <= 17; ++licz )
			{
				menu1->idzdo(10,licz);
				cout << '<';
				menu1->idzdo(10,licz-1);
				cout << ' ';
				Sleep(100);
			}
        	system("cls");
        	menu1->wczytajgre(pion,poziom,tablica);
        	
        }
		if ( opcja == 5 )
        {
        	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE  ), 0x02);
        	cout << "    \t-> Wyjdź\n";
        }
        else
        {
        	cout << "     \tWyjdź\n";	
        }
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07 );
        if(opcja == 5 && znak == 13)
        {
        	for(int licz = 6; licz <= 17; ++licz )
			{
				menu1->idzdo(11,licz);
				cout << '<';
				menu1->idzdo(11,licz-1);
				cout << ' ';
				Sleep(100);
			}
        	break;
        }
        
		znak = getch();
        
        switch( znak )
        {
        case 72: //strzalka w gore
        {
        	opcja--;
        } break;
        case 80: // strzałka w dół
         {
         	 opcja++;	
         } break;
        }
        
        if( opcja < 0 ) 
		{
			opcja++;
		}
        
        if( opcja > 5 )
		{
			opcja-- ;
		} 
        
    }
     
    return 0;
}

int Menu::wczytajplansze( short int pion, short int poziom, char tablica[][30])
{
    ifstream plik;
    plik.open("Standard.txt");
    if(plik)
    {
	        for( pion = 0; pion < 31; ++pion )
	        {
	            for( poziom = 0; poziom < 30; ++poziom)
	            {
	                plik >> tablica[pion][poziom];
	         	}	
	        }
	}
	else{
		cout << "Wczytywanie nie powiodło się! " << endl;
	}
}

// wczytywanie rozmieszczenia elementów na tablicy
int Menu::wczytajgre( short int pion, short int poziom, char tablica[][30])
{
    ifstream plik;
    plik.open("Pac-Man.txt");
    if(plik)
    {
	        for( pion = 0; pion < 31; ++pion )
	        {
	            for( poziom = 0; poziom < 30; ++poziom)
	            {
	                plik >> tablica[pion][poziom];
	         	}	
	        }
	}
	else{
		cout << "Wczytywanie nie powiodło się! " << endl;
	}
}
// zapisywanie planszy w fornie liczb pisanych z gory na dol, bo inaczej wczytywalo 9 liczb w jedno miejsce
int Menu::zapisz(short int pion, short int poziom, char tablica[][30])
{
    ofstream plik;
    plik.open("Pac-Man.txt");
    if(plik)
    {
        for( pion = 0; pion < 31; ++pion )
	        {
	            for( poziom = 0; poziom < 30; ++poziom)
	            {
	                plik << tablica[pion][poziom];
	                plik << "\n";
	         	}	
	        }
    }
    else{
    	cout << " Zapisanie gry nie powiodło się" << endl;
    }
}

int Menu::ranking(int& punktacja, short int pion, short int poziom)
{
	int tmp;

// funkcja wczytywania z pliku
	ifstream plik;
    plik.open("ranking.txt"); // otwieranie danego pliku
    if(plik)
    {
	        for( pion = 0; pion < 31; ++pion )
	        {
	            for(poziom = 0; poziom < 27; ++poziom)
	            {
	                plik >> tablica[pion][poziom];   // zapisywanie danych z pliku do tablicy
				}
	        }
	}
	else{
		cout << "Wczytywanie nie powiodło się! " << endl;  // jesli sie nie uda to poinformuj
	}


	if(punktacja > 0)
	{	
		for(int licznik = 9 ; licznik >= 0; licznik--)
		{
			// zmiennna z wartoscia 3 poziewaz na tym miejscu jest zapisana informacja o ilosci pkt
			int licz = 3;
			// jesli wynik w rankingu jest wiekszy to nic nie rob
			if(tablica[licznik][licz] > punktacja)
			{
				break;
			}
			// jesli jest rowny to zmien nazwe
			if(tablica[licznik][licz] = punktacja)
			{
				
			}
			// jesli mniejszy to sortowanie przez wstawiane
			if(tablica[licznik][licz] < punktacja)
			{
				tmp = tablica[licznik][licz];
				tablica[licznik][licz] = punktacja;
			}
			if(tablica[licznik - 1][licz] < punktacja)
			{
				tablica[licznik - 1][licz] = punktacja;
				tablica[licznik][licz] = tmp;
			}
		}
	}
		
		//Pętla wyswietlajaca tablice
		 
	for (int lpo = 0; lpo < 10; ++lpo){
        for (int lpi = 0; lpi < 30; ++lpi)
        {	
 			if(tablica[lpo][lpi] == '|' || tablica[lpo][lpi] == '-' || tablica[lpo][lpi] == '_' ){
 			SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x03);
       		}
          		if(tablica[lpo][lpi] == '.') SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
				cout << tablica[lpo][lpi];
			}
		// przejscie do nastepnej lini
       	cout << "\n";
    }
}

void Menu::instrukcja(short int pion, short int poziom, char tablica[][30])
{
	system("cls");
	cout << "Witam w grze PAC-MAN\n"
			"\n"
			"Aby rozpoczac gre w menu glownym wybierz opcje \"Nowa gra\".\n"
			"Twoim oczom ukaże się menu wyboru opcji gry. Możesz tam ustawić\n"
			"poziom trudnosci gry, ilosc duszkow na planszy, wybrac muzyke, \n"
			"ktora bedzie ci towarzyszyla w czasie rozgrywki, a takze wybrac \n"
			"plansze od ktorej zaczniesz rozgrywke.\n"
			"Gdy juz wybierzesz rodzaj gry wcisnij przycisk \"Graj\"\n"
			"Twoim oczom ukaze sie plansza. Poruszasz sie po niej za pomoca \n"
			"klawiszy strzalek. W dowolnym momencie gry mozesz zatrzymac \n"
			"rozgrywke wciskajac klawisz \"P\" wtedy tez bedziesz mial mozliwosc\n"
			"zapisania gry. \n"
			"\n"
			"Wielu godzin przyjemnej rozgrywki zycza tworcy gry\n";
			
			if((GetKeyState(esc) & 0x8000))
			{
				Menu *menu1 = new Menu;
				menu1->menu(pion, poziom, tablica);
				delete menu1;
			}
}

int Menu::wczytajplanszezpliku(short int licznik, char tablica[][30])
{
	WIN32_FIND_DATA File_Data;
 
 	HANDLE hfile = FindFirstFile(TEXT("K:\\000_Alice\\C++\\Pac-Man\\Plansze\\*.txt"), &File_Data);

   	if(licznik != 0){
    	FindNextFile(hfile, &File_Data);
	}
	
    ifstream plik;
    plik.open(File_Data.cFileName); // otwieranie danego pliku
    if(plik)
    {
	        for( int pion = 0; pion < 31; ++pion )
	        {
	            for( int poziom = 0; poziom < 28; ++poziom)
	            {
	                plik >> tablica[pion][poziom];   // zapisywanie danych z pliku do tablicy
				}
	        }
	}
	else{
		cout << "Wczytywanie nie powiodło się! " << endl;  // jesli sie nie uda to poinformuj
	}

    FindClose(hfile);
    
    return tablica[31][30];
} 
