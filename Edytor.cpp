#include "library.h"

int Plansza::edytor(char tablica[][30])
{
	char bok = '|';
	char sicana = '-';
	char dol = '_';
	int x;
	int y;
	int opcja = 0;
	char tablica2[100][100];
	
	Plansza *plansza1 = new Plansza;
	
	cout << "Podaj wielkosc planszy ktora chcesz utworzyc\n";
	cout << "maksymalny rozmiar to 100x100\n";
	cout << "szerokosc: "; cin >> x;
	cout << "\nwysokosc: "; cin >> y;
	
	for(int licznik = 0; licznik <= x; ++licznik)
	{
		for(int licznik2 = 0; licznik2 <= y; ++licznik2)
		{
			cout << tablica[licznik][licznik2];
		}
	}
	plansza1->idzdo(licznik);
}
