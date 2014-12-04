#ifndef LIBRARY_HPP
#define LIBRARY_HPP

// deklaracja bibliotek których uzywa program, później znajdą się tu deklaracje klas
#include <conio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <process.h>
#include <time.h>
#include <string>

// przypisanie kodu ASCII do nazw klawiszy dla ułatwienia

#define strzalka_lewo 0x25	
#define strzalka_prawo 0x27
#define strzalka_dol 0x28
#define strzalka_gora 0x26
#define enter 0x0D
#define esc 0x1B

using namespace std;

class Plansza{
	public:
		char tablica[31][30]; // tablica znaków reprezentująca znaki wyswietlane na planszy
		int punktacja; // zmienna do zliczania punktów
		short int poziom;		// zmienna do poruszania się w poziomie po planszy
		short int pion;		// zmienna do poruszania się w pionie po planszy
		short int x;			// zmienna do poruszania się w poziomie po planszy
		short int y;			// zmienna do poruszania się w pionie po planszy
		
		int idzdo(short int pion, short int poziom);		// metoda zmieniająca położenie pac-man'a na planszy
		int prawo(short int pion, short int &poziom, char tablica[][30], short int& x, short int y, int& punktacja); // metoda do poruszania sie w prawo po planszy
		int lewo(short int pion, short int& poziom, char tablica[][30], short int& x, short int y, int& punktacja);		// w lewo
		int gora(short int& pion, short int poziom, char tablica[][30], short int x, short int& y, int& punktacja);		// w gore
		int dol(short int& pion, short int poziom, char tablica[][30], short int x, short int& y, int& punktacja);		// w dol
		int wyswietlanie(char tablica[][30]);		// na start gry wyswietla plansze
		int ruch(char tablica[][30]);				// na start gry pozwala wybrac w ktorym kierunku ma sie ruszyc pac-man
		int edytor(char tablica[][30]);				// metoda do tworzenia plansz
};

class Menu:public Plansza{
	public:
			short int licznik; 		// do liczenia ilosci wcisniec klawiszy prawo/lewo
		
		int poziom(char znak, char tablica[][30]);			// metoda do wyboru ustawien gry
		int menu(short int pion, short int poziom, char tablica[][30]);		// metoda do wyswietlania i obsługi głównego menu
		int wczytajgre(short int pion, short int poziom, char tablica[][30]);	// wczytywanie stanu tablicy (planszy) z pliku
		int wczytajplansze( short int pion, short int poziom, char tablica[][30]);		// wczytuje plansze z pliku 
		int wczytajplanszezpliku(short int licznik, char tablica[][30]); 							// wyswietla plansze w menu ustawien
		int zapisz(short int pion, short int poziom, char tablica[][30]);	// zapis stanu tablicy (planszy) do pliku
		int ranking(int& punktacja, short int pion, short int poziom);					// wyswietla i zapisuje wynik gry do pliku
		void instrukcja(short int pion, short int poziom, char tablica[][30]);			// wyswietla instrukcje do gry
};
/*
class Bonus{
	public:
		
};
*/

class Duch:public Plansza{
	public:
	short int x;
	short int y;
	char tmpplansza[31][30];		// tablica tymczasowa do algorytmu oblicznia najkrótszej drogi
	
	int idzdo(short int& y, short int& x);		// zmienia położenie duszków na planszy
	int znajdzdroge(char tmpplansza[][30]);		// algorytm znajdowania najkrótszej drogi
	int latwy_prawo(short int& x, short int& y, char tablica[][30]);	// poruszanie się w prawo duszka na latwym poziomie trudnosci
	int latwy_lewo(short int& x, short int& y, short int pion, short int poziom, char tablica[][30]);		// w lewo
	int latwy_gora(short int& x, short int& y, char tablica[][30]);		// w gore
	int latwy_dol(short int& x, short int& y, char tablica[][30]);		// w dol
	int sredni();		// poziom sredni sposób poruszania się duszków
	int trudny();		// poziom trudny sposób poruszania się duszków
};


#endif
