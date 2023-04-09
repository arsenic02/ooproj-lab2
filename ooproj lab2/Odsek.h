#pragma once
#include "Fakultet.h"
#include "Predmet.h"
#include "Student.h"
#include <string.h>
class Odsek
{
private:
	char* nazivOdseka;
	int trenutniBr, brStud;
	Student** studenti;
public:
	Odsek();
	Odsek(char*,int);
	~Odsek();
	void upisiStudenta(Student* s);//upisiStudenta
};

