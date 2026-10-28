#include "Systeme.h"
#include "TextViewer.h"
#include "SousParticules.h"
using namespace std;

int main()
{
	TextViewer ecran;
	Systeme s(20.0,20.0,20.0, 0.5);
	
	s.initialise<Argon>(2);
	s.initialise<Neon>(3);
	s.initialise<Helium>(1);
	
	s.simulation(ecran);
	
	return 0;
}
