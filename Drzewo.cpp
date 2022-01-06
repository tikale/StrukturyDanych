#include "pch.h"
const int WIELKOSCDRZEWA = 15;
static int WartoscDrzewa[WIELKOSCDRZEWA];

static void WyswietlDrzewo()
{
	//        x               //                         0
	//    x       x           //            1,                          2
	//  x   x   x   x	      //    3,            4,            5,        6
	// x x x x x x x x        //  7,    8,     9,      10,    11       12   13     14
	int spaces;
	cout << "Zawartosc drzewa:\n";
	for (int ii = 0; ii < WIELKOSCDRZEWA; ii++)
	{

		if (ii == 0)
			spaces = 8;
		else if (ii == 1)
			spaces = 4;
		else if (ii == 2)
			spaces = 7;
		else if (ii == 3)
			spaces = 2;
		else if (ii > 3 && ii < 7)
			spaces = 3;
		else if (ii >= 7)
			spaces = 1;

		for (int space = 0; space < spaces; space++)
			cout << "   ";
		
		if  (WartoscDrzewa[ii] < 10)
			cout << "  ";
		else if (WartoscDrzewa[ii] < 100)
			cout << " ";

		cout << WartoscDrzewa[ii];

		if (ii == 0 || ii == 2 || ii == 6 || ii == 14)
			cout << "\n";
	}
	cout << "\n";
}

static void MenuDrzewa()
{
	cout << "Menu Drzewa:\n";
	cout << "1. Add,\n";
	cout << "2. Find,\n";
	cout << "3. Clean,\n";
	cout << "4. Koniec programu.\n";
}

static void Wyswietl()
{
	system("cls");
	Sleep(500);

	WyswietlDrzewo();
	MenuDrzewa();
}

static void Clean()
{
	for (int ii = 0; ii < WIELKOSCDRZEWA; ii++)
	{
		WartoscDrzewa[ii] = 0;
	}
}

static bool Add()
{
	int liczba;
	int index;

	cout << "Podaj wartoœæ elementu od 1 do 999: \n";
	cin >> liczba;

	index = 0;
	while (true)
	{
		if (index >= WIELKOSCDRZEWA)
		{
			cout << "Osiagnieto koniec indexu.\n";
			_getch();
			return true;
		}
		if (WartoscDrzewa[index] == 0)
		{
			WartoscDrzewa[index] = liczba;
			return true;
		}
		if (liczba > WartoscDrzewa[index])
			index = (index + 1) * 2;
		else if (liczba < WartoscDrzewa[index])
			index = ((index + 1) * 2) - 1;
		else if (liczba == WartoscDrzewa[index])
		{
			cout << "Element o wartoœci ";
			cout << liczba;
			cout << " juz istnieje!\n";
			_getch();
			return true;
		}
	}

return true;
}

static bool Find()
{
	int liczba;
	int index;

	if (WartoscDrzewa[0] == 0)
	{
		cout << "Drzewo jest puste.\n";
		return true;
	}

	cout << "Podaj wartoœæ szukanego elementu od 1 do 999: \n";
	cin >> liczba;

	index = 0;
	while (true)
	{
		if((index >= WIELKOSCDRZEWA) || (WartoscDrzewa[index] == 0))
		{
			cout << "Szukanego elementu nie ma w badzie.\n";
			return true;
		}	

		if (liczba > WartoscDrzewa[index])
		{
			index = (index + 1) * 2;

		}
		else if (liczba < WartoscDrzewa[index])
		{
			index = ((index + 1) * 2) - 1;
		}
		else if (liczba == WartoscDrzewa[index])
		{
			cout << "Element o wartoœci ";
			cout << liczba;
			cout << " jest na pozycji ";
			cout << index;
			cout << ".";
			return true;
		}
	}

	return true;
}

bool Drzewo()
{
	int OpcjeDrzewa;
	Clean();

	do {
		Wyswietl();
		cin >> OpcjeDrzewa;

		switch (OpcjeDrzewa)
		{
		case 1:
			Add();
			break;
		case 2:
			Find();
			_getch();
			break;
		case 3:
			Clean();
			break;
		case 4:
			return true;

		default:
			break;
		}

	} while (true);

	return false;
}