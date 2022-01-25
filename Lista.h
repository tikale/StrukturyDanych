#ifndef LISTA_H
#define LISTA_H

struct ListElements
{
	ListElements *Next;
	int Index;
};

class List
{
private:

	ListElements *Front, *Back;
	unsigned Counter;

public:

	List()
	{
		Front = Back = NULL;
		Counter = 0;
	}

	~List()
	{
		ListElements *P;

		while (Front)
		{
			P = Front->Next;
			delete Front;
			Front = P;
		}
	}

	unsigned Size()
	{
		return Counter;
	}

	ListElements *Push_front(ListElements *P)
	{
		P->Next = Front;
		Front = P;
		if (!Back) Back = Front;
		Counter++;
		return Front;
	}

	ListElements *Push_back(ListElements *P)
	{
		if (Back) Back->Next = P;
		P->Next = NULL;
		Back = P;
		if (!Front) Front = Back;
		Counter++;
		return Back;
	}

	ListElements *Pop_front()
	{
		ListElements * P;

		if (Front)
			{
			P = Front;
			Front = Front->Next;
			if (!Front) Back = NULL;
			Counter--;
			return P;
			}
		else return NULL;
	}

	ListElements *Pop_back()
	{
		ListElements *P;

		if (Back)
			{
				P = Back;
				if (P == Front) Front = Back = NULL;
				else
					{
					Back = Front;
					while (Back->Next != P) Back = Back->Next;
					Back->Next = NULL;
					}
				Counter--;
				return P;
			}
			else return NULL;
	}

	ListElements *Remove(ListElements *P)
	{
		ListElements *Temp;
		if (P == Front) return Pop_front();
		else
			{
			Temp = Front;
			while (Temp->Next != P) Temp = Temp->Next;
			Temp->Next = P->Next;
			if (!(Temp->Next)) Back = Temp;
				Counter--;
			return P;
			}
	}

	void Show_Index()
	{
		ListElements *P;
		if (!Front) cout << "Lista jest pusta." << endl;
		else
		{
			P = Front;
			while (P)
			{
				cout << P->Index << " ";
				P = P->Next;
			}
			cout << endl;
		}
	}
	
};

#endif // !LISTA_H

