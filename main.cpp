#include <iostream>
#include "classes.classes.h"
using namespace std;

int main(int argc, char const *argv[])
{
	Voiture v1;
	v1.details();
	Voiture v2("Noir", "Ferrari");
	v2.details();

	Voiture v3("Vert", "Hummer v8");
	v3.details();

	Personne p1("Koto", "Directeur", v2);
	p1.details();
	return 0;
}
