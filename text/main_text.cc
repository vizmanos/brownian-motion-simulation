#include <iostream>
#include "TextViewer.h"
#include "Systeme.h"
#include "SousParticules.h"
using namespace std;

int main()
{
	TextViewer ecran(cout, "suivi.txt");
	Systeme s(20.0,20.0,20.0, 0.5);	
	
	s.initialise<Argon>(5);
	s.initialise<Neon>(5);
	s.initialise<Helium>(5);
	s.initialise<Uranium>(1);
	
	s.simulation(1,ecran);
	
	return 0;
}
