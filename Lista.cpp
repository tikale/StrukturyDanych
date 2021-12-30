#include "pch.h"
static void WyswietlListe()
{
	cout << "Zawartosc listy:\n";
	for (int ii = 0; ii < 10; ii++)
	{
		cout << " ... ";
		cout << "\n";
	}
	cout << "\n";
}

static void MenuListy()
{
	cout << "Menu Listy:\n";
	cout << "1. Push_front,\n";
	cout << "2. Push_back,\n";
	cout << "3. Pop_front,\n";
	cout << "4. Pop_back,\n";
	cout << "5. Size,\n";
	cout << "6. Max_Size,\n";
	cout << "7. Empty,\n";
	cout << "8. Remove,\n";
	cout << "9. Sort,\n";
	cout << "10. Reverse,\n";
	cout << "11. Koniec programu.\n";
}

static void Wyswietl()
{
	system("cls");
	Sleep(500);

	WyswietlListe();
	MenuListy();
}

bool Lista()
{
	int OpcjeListy;

	do {
		Wyswietl();
		cin >> OpcjeListy;

		switch (OpcjeListy)
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
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
			
		case 11:
			return true;

		default:
			break;
		}

	} while (true);

	return false;
}