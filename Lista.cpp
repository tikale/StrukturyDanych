#include "pch.h"
#include "Lista.h"

List MojaLista;
ListElements *P;

static void MenuListy()
{
	cout << "Menu Listy:\n";
	cout << "1. Push_front,\n";
	cout << "2. Push_back,\n";
	cout << "3. Pop_front,\n";
	cout << "4. Pop_back,\n";
	cout << "5. Size,\n";
	cout << "0. Koniec programu.\n";
}

static void Wyswietl()
{
	system("cls");

	MojaLista.Show_Index();
	MenuListy();
}

bool Lista()
{
	int OpcjeListy;
	int IndexLoc;

	do {
		Wyswietl();
		cin >> OpcjeListy;

		switch (OpcjeListy)
		{
		case 1:
			P = new ListElements;
			cin >> IndexLoc;
			P->Index = IndexLoc;
			MojaLista.Push_front(P);
			break;
		case 2:
			P = new ListElements;
			cin >> IndexLoc;
			P->Index = IndexLoc;
			MojaLista.Push_back(P);
			break;
		case 3:
			MojaLista.Pop_front();
			break;
		case 4:
			MojaLista.Pop_back();
			break;
		case 5:
			cout << "Rozmiar = ";
			cout << MojaLista.Size();
			_getch();
			break;
			
		case 0:
			return true;

		default:
			break;
		}

	} while (true);

	return false;
}