#include "Odsek.h"

Odsek::Odsek()
{
	nazivOdseka = nullptr;
	studenti = nullptr;
}



Odsek::Odsek(char* ods,int br)
{
	nazivOdseka = new char[strlen(ods) + 1];
	strcpy(nazivOdseka, ods);
	studenti = new Student * [brStud];
	brStud = br;
}

Odsek::~Odsek()
{
	if (nazivOdseka != nullptr)
		delete[]nazivOdseka;
	nazivOdseka = nullptr;
	if (studenti!= nullptr)
	{
		for (int i = 0; i < trenutniBr; i++)
			delete studenti[i];
		delete[]studenti;
		studenti = nullptr;
	}
}

void Odsek::upisiStudenta(Student* s)
{
	if (trenutniBr < brStud)
		studenti[trenutniBr++] = s;
}
