#include "pch.h"

const int WIELKOSCSTOSU = 10;
static int WartoscStosu[WIELKOSCSTOSU+1];
static int IndexStosu;

static void WyswietlStos()
{
	system("cls");
	cout << "Zawartosc stosu:\n";
	for (int ii = 1; ii < WIELKOSCSTOSU; ii++)
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
	Sleep(500);

	WyswietlStos();
	MenuStosu();
}

static bool Push()
{
	int Liczba;
	cout << "Podaj wartosc elementu: ";
	cin >> Liczba;
	cout << "\n";
	if (IndexStosu >= WIELKOSCSTOSU)
	{
		cout << "Stos jest pelny.\n";
		return false;
	}
	else
	{
		IndexStosu++;
		WartoscStosu[IndexStosu] = Liczba;
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
			Sleep(2000);
			break;
		case 2:
			liczba = Pop();
			cout << "Liczba zdjeta ze stosu to: ";
			cout << liczba;
			cout << "\n";
			Sleep(2000);
			break;
		case 3:
			liczba = Size();
			cout << "Rozmiar stosu to: ";
			cout << liczba;
			cout << "\n";
			Sleep(2000);
			break;
		case 4:
			liczba = Empty();
			cout << "Czy stos jest pusty? ";
			if (liczba > 0)
				cout << "Tak\n";
			else
				cout << "Nie\n";
			Sleep(2000);
			break;
		case 5:
			return true;

		default:
			break;
		}

	} while (true);

return false;
}