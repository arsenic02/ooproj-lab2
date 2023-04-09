#include "Predmet.h"
Predmet::Predmet()
{
	nazivPredmeta = nullptr;
	espb = 0;
}
Predmet::Predmet(char* np, int e)
{
	nazivPredmeta = new char[strlen(np) + 1];
	strcpy(nazivPredmeta, np);
	espb = e;
}
void Predmet::prikaz(ostream& out)
{
	cout << "Naziv predmeta: " << nazivPredmeta << ", ESPB:" << espb << endl;
}