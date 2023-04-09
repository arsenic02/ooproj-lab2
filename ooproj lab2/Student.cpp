#include "Student.h"

Student::Student(int i, int j, int brP, char* d)
{
	indeks = i;
	jmbg = j;
	brPredmeta = brP;
	datumUpisa = new char[strlen(d) + 1];
	strcpy(datumUpisa, d);
	trenP = 0;
	predmeti = new Predmet * [brPredmeta];
}
Student::Student()
{
	indeks = jmbg = brPredmeta = trenP = 0;
	datumUpisa = nullptr; predmeti = nullptr;
}

void Student::bira(Predmet* p)
{
	if (trenP < brPredmeta)
		predmeti[trenP++] = p;
}
void Student::menja(Predmet* p1,Predmet* p2)
{
	//p1 se brise
	//na njegovo mesto se dodaje p2
	int i = 0;
	while (predmeti[i] != p1 && i < trenP)
	{
		i++;
	}
	if (predmeti[i] == p1)
		predmeti[i] = p2;
	else
		throw exception("Ne postoji predmet koji student hoce da zameni!");

}
void Student::dodajPredmet(Predmet* p)
{
	if (trenP < brPredmeta)
		predmeti[trenP++] = p;
}
void Student::prikaz(ostream& out)
{
	for (int i = 0; i < trenP; i++)
		predmeti[i]->prikaz(cout);
}