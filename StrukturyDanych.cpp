#include "pch.h"

int main()
{
	do {
	int RodzajStruktury;
	system("cls");
	Sleep(500);
	cout << "Przetestujemy struktury danych.\n";
	cout << "Menu programu:\n";
	cout << "1. Stos,\n";
	cout << "2. Liste,\n";
	cout << "3. Kolejke,\n";
	cout << "4. Drzewo binarne.\n";
	cout << "5. Zakonczenie programu.\n\n";
	cin >> RodzajStruktury;

		switch (RodzajStruktury)
		{
		case 1:
			Stos();
			break;
		case 2:
			Lista();
			break;
		case 3:
			Kolejka();
			break;
		case 4:
			Drzewo();
			break;
		case 5:
			return 0;

		default:
			break;
		}
	} while (true);

	return 0;
}
