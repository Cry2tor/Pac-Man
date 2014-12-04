#include "Library.h"

int Duch::znajdzdroge(char tmpplansza[][30])
{
}

int Duch::idzdo( short int& y, short int& x )
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE) ;
    COORD position = { x, y } ;

    SetConsoleCursorPosition( hStdout, position ) ;
}

int Duch::latwy_prawo(short int& x, short int& y, char tablica[][30])
{	
	Duch *duszek1 = new Duch;
	duszek1->idzdo(y,x); 
	if(tablica[y][x] == '.'){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
	 cout << '.';
	 }
	else cout << ' ';
	x++;	
	if(tablica[y][x] == '|' || tablica[y][x] == '-' || tablica[y][x] == '_')
	 {
	 	x--;
	 }
	 duszek1->idzdo(y,x);
	 SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x03);
	  cout << "A";
	
	delete duszek1;
} 

int Duch::latwy_lewo(short int& x, short int& y, short int pion, short int poziom, char tablica[][30])
{	
	Duch *duszek2 = new Duch;
	duszek2->idzdo(y,x);
	if(tablica[y][x] == '.'){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
	 cout << '.';
	 }
	else cout << ' ';
	x--;	
	if(tablica[y][x] == '|' || tablica[y][x] == '-' || tablica[y][x] == '_')
	 {
	 	x++;
	 }
	 duszek2->idzdo(y,x);
	 SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x03);
	  cout << "A";
	if(tablica[pion][poziom] == 'A' ){cout << "Przegrales\n Twój wynik to: " << punktacja << endl;  system("pause");}
	delete duszek2;
} 

int Duch::latwy_gora(short int& x, short int& y, char tablica[][30])
{	
	Duch *duszek3 = new Duch;
	duszek3->idzdo(y,x); 
	if(tablica[y][x] == '.'){ 
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
	cout << '.';
	}
	else cout << ' ';
	y--;	
	if(tablica[y][x] == '|' || tablica[y][x] == '-' || tablica[y][x] == '_')
	 {
	 	y++;
	 }
	 duszek3->idzdo(y,x); 
	 SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x03);
	 cout << "A";
	
	delete duszek3;
} 

int Duch::latwy_dol(short int& x, short int& y, char tablica[][30])
{	
	Duch *duszek4 = new Duch;
	duszek4->idzdo(y,x); 
	if(tablica[y][x] == '.'){ 
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
	cout << '.';
	}
	else cout << ' ';
	y++;	
	if(tablica[y][x] == '|' || tablica[y][x] == '-' || tablica[y][x] == '_')
	 {
	 	y--;
	 }
	 duszek4->idzdo(y,x);
	 SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x03);
	  cout << "A";
	
	delete duszek4;
} 
