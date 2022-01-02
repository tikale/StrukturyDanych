#include "pch.h"
const int WIELKOSCKOLEJKI = 10;
static int WartoscKolejki[WIELKOSCKOLEJKI];

static void WyswietlKolejke()
{
	cout << "Zawartosc kolejki:\n";
	for (int ii = 0; ii < WIELKOSCKOLEJKI; ii++)
	{
		cout << WartoscKolejki[ii];
		cout << "\n";
	}
	cout << "\n";
}

static void MenuKolejki()
{
	cout << "Menu Kolejki:\n";
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

	WyswietlKolejke();
	MenuKolejki();
}

static void Push()
{

}

static void Pop()
{

}

static void Size()
{

}

static void Empty()
{

}

bool Kolejka()
{
	int OpcjeKolejki;

	do {
		Wyswietl();
		cin >> OpcjeKolejki;

		switch (OpcjeKolejki)
		{
		case 1:
			Push();
			break;
		case 2:
			Pop();
			break;
		case 3:
			Size();
			break;
		case 4:
			Empty();
			break;
		case 5:
			return true;

		default:
			break;
		}

	} while (true);

	return false;
}