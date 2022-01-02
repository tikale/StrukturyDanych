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

static void Push_front()
{

}
static void Push_back()
{

}
static void Pop_front()
{

}
static void Pop_back()
{

}
static void Size()
{

}
static void Max_Size()
{

}
static void Empty()
{

}
static void Remove()
{

}
static void Sort()
{

}
static void Reverse()
{

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
			Push_front();
			break;
		case 2:
			Push_back();
			break;
		case 3:
			Pop_front();
			break;
		case 4:
			Pop_back();
			break;
		case 5:
			Size();
			break;
		case 6:
			Max_Size();
			break;
		case 7:
			Empty();
			break;
		case 8:
			Remove();
			break;
		case 9:
			Sort();
			break;
		case 10:
			Reverse();
			break;
			
		case 11:
			return true;

		default:
			break;
		}

	} while (true);

	return false;
}