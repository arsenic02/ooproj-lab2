#pragma once
#include "Predmet.h"
#include "Fakultet.h"
#include "Odsek.h"
#include <string.h>
#include <iostream>
using namespace std;
#include <exception>
class Student
{
private:
	int indeks,jmbg;
	char* datumUpisa;
	Predmet** predmeti;
	int trenP, brPredmeta;
public:
	Student();
	~Student();
	Student(int, int, int, char*);
	void bira(Predmet* p);
	void menja(Predmet* p1,Predmet* p2);
	int ukupnoESPB();
	void dodajPredmet(Predmet* p);
	void prikaz(ostream& out);
};

