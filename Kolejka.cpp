#include "pch.h"
const int WIELKOSCKOLEJKI = 10;
static int WartoscKolejki[WIELKOSCKOLEJKI];
static int ogon;
static int glowa;

static int Size()
{
	int size = 0;
	for (int ii = 0; ii < WIELKOSCKOLEJKI; ii++)
	{
		if (WartoscKolejki[ii] > 0)
			size++;
	}
	return size;
}

static void WyswietlKolejke()
{
	cout << "Zawartosc kolejki:\n";

	int size = Size();
	int index = glowa;

	for (int ii = 0; ii < size; ii++)
	{
		index = glowa + ii;
		if (glowa + ii >= WIELKOSCKOLEJKI)
			index = (glowa + ii) - WIELKOSCKOLEJKI;
		cout << WartoscKolejki[index];
		cout << ", ";
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

	WyswietlKolejke();
	MenuKolejki();
}

static bool Push()
{
int liczba;

	if (WartoscKolejki[ogon] == 0)
	{
		liczba = PodajWartosc();
		if (liczba == 0)
			return false;
		WartoscKolejki[ogon] = liczba;
		if (ogon < WIELKOSCKOLEJKI - 1)
			ogon++;
		else
			ogon = 0;
	}
	else
	{
		cout << "Kolejka pelna !\n";
		_getch();
		return false;
	}

	return true;
}

static bool Empty()
{
	if (WartoscKolejki[glowa] == 0)
		return true;
	else
		return false;
}

static int Pop()
{
int liczba;
	if (Empty())
	{
		cout << "Kolejka jest pusta !\n";
		return 0;
	}

	liczba = WartoscKolejki[glowa];
	WartoscKolejki[glowa] = 0;
	if (glowa < WIELKOSCKOLEJKI)
		glowa++;
	else
		glowa = 0;

	return liczba;
}

bool Kolejka()
{
	int OpcjeKolejki;
	int liczba;

	do {
		Wyswietl();
		cin >> OpcjeKolejki;

		switch (OpcjeKolejki)
		{
		case 1:
			Push();
			break;
		case 2:
			liczba = Pop();
			if (liczba != 0)
			{
				cout << "Liczba zdjeta z kolejki to: ";
				cout << liczba;
				cout << "\n";
			}
			_getch();
			break;
		case 3:
			liczba = Size();
			cout << "Rozmiar kolejki to: ";
			cout << liczba;
			cout << "\n";
			_getch();
			break;
		case 4:
			cout << "Czy kolejka jest pusta? ";
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