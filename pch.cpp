// pch.cpp: plik źródłowy odpowiadający wstępnie skompilowanemu nagłówkowi, niezbędny do powodzenia kompilacji

#include "pch.h"

int PodajWartosc(void)
{
	int liczba;

	cout << "Podaj wartość elementu od 1 do 999: ";
	cin >> liczba;
	cout << "\n";

	if (liczba < 1 || liczba > 999)
	{
		liczba = 0;
		cout << "Liczba poza zakresem .\n";
		_getch();
	}
	return liczba;
}
// Ogólnie rzecz biorąc, zignoruj ten plik, ale miej go pod ręką, jeśli używasz wstępnie skompilowanych nagłówków.
