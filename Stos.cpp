#include "pch.h"

const int WIELKOSCSTOSU = 10;
static int WartoscStosu[WIELKOSCSTOSU+1];
static int IndexStosu;

static void WyswietlStos()
{
	system("cls");
	cout << "Zawartosc stosu:\n";
	for (int ii = 1; ii <= WIELKOSCSTOSU; ii++)
	{
		cout << WartoscStosu[ii];
		cout << "\n";
	}
	cout << "\n";
}

static void MenuStosu()
{
	cout << "Menu Stosu:\n";
	cout << "1. Push,\n";
	cout << "2. Pop,\n";
	cout << "3. Size,\n";
	cout << "4. Empty,\n";
	cout << "5. Koniec programu.\n";
}

static void Wyswietl()
{
	system("cls");

	WyswietlStos();
	MenuStosu();
}

static bool Push()
{
	int liczba;

	liczba = PodajWartosc();
	if (liczba == 0)
		return false;

	if (IndexStosu >= WIELKOSCSTOSU)
	{
		cout << "Stos jest pelny.\n";
		_getch();
		return false;
	}
	else
	{
		IndexStosu++;
		WartoscStosu[IndexStosu] = liczba;
	}
	return true;
}

static int Pop()
{
	int liczba;
	if (IndexStosu == 0)
	{
		cout << "Stos jest pusty.\n";
		return 0;
	}

	liczba = WartoscStosu[IndexStosu];
	WartoscStosu[IndexStosu] = 0;
	IndexStosu--;
	return liczba;
}

static int Size()
{
	return IndexStosu;
}

static bool Empty()
{
	if (IndexStosu == 0)
		return true;
	else
		return false;
}

bool Stos()
{
	int OpcjeStosu;
	int liczba;

	do {
		Wyswietl();
		cin >> OpcjeStosu;

		switch (OpcjeStosu)
		{
		case 1:
			Push();
			break;
		case 2:
			liczba = Pop();
			if (liczba != 0)
				{
				cout << "Liczba zdjeta ze stosu to: ";
				cout << liczba;
				cout << "\n";
				}
			_getch();
			break;
		case 3:
			liczba = Size();
			cout << "Rozmiar stosu to: ";
			cout << liczba;
			cout << "\n";
			_getch();
			break;
		case 4:
			cout << "Czy stos jest pusty? ";
			if (Empty())
				cout << "Tak\n";
			else
				cout << "Nie\n";
			_getch();
			break;
		case 5:
			return true;

		default:
			break;
		}
	} while (true);

return false;
}