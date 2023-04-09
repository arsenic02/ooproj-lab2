#pragma once
#include "Fakultet.h"
#include "Odsek.h"
#include "Student.h"
#include <iostream>
using namespace std;
class Predmet
{
private:
	char* nazivPredmeta;
	int espb;
public:
	Predmet();
	Predmet(char*, int);
	~Predmet();
	void prikaz(ostream& out);
};

