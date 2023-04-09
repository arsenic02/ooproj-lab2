#include "Fakultet.h"

Fakultet::Fakultet()
{
	nazivF = datumOsnivanja = nullptr;
	odseci = nullptr;
	tren = 0;
}

Fakultet::Fakultet(char* n, char* d)
{
	nazivF = new char[strlen(n) + 1];
	strcpy(nazivF, n);
	datumOsnivanja = new char[strlen(d) + 1];
	strcpy(datumOsnivanja, d);
	odseci = new Odsek * [brojOdseka];//6
	tren = 0;
}

Fakultet::~Fakultet()
{
	if (nazivF != nullptr)
		delete []nazivF;
	if (datumOsnivanja != nullptr)
		delete[]datumOsnivanja;
	nazivF = datumOsnivanja = nullptr;
}

void Fakultet::upis(Student& s)
{
}

void Fakultet::dodajOdsek(Odsek* o)
{
	odseci[tren++] = o;
}
