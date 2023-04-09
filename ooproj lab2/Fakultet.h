#pragma once
#include "Odsek.h"
#include "Student.h"
#include "Predmet.h"
#include <string.h>
class Fakultet
{
private:
	char* nazivF;//naziv fakulteta
	char* datumOsnivanja;
	int brojOdseka,tren;
	Fakultet();
	~Fakultet();
	Fakultet(char*, char*);
	Odsek** odseci;
public:
	static Fakultet& getInstance() //neka ga u headeru
	{
		static Fakultet* instanca=new Fakultet();//ili staticki Fakultet instanca, return instanca
		return *instanca;
	}
	void upis(Student& s);
	void dodajOdsek(Odsek* o);
};

