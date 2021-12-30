#include "pch.h"

const int WIELKOSCSTOSU = 10;
int WartoscStosu[WIELKOSCSTOSU];

static void WyswietlStos()
{
	cout << "Zawartosc stosu:\n";
	for (int ii = 0; ii < WIELKOSCSTOSU; ii++)
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

bool Stos()
{
	int OpcjeStosu;

	do {
		Wyswietl();
		cin >> OpcjeStosu;

		switch (OpcjeStosu)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			return true;

		default:
			break;
		}

	} while (true);

return false;
}