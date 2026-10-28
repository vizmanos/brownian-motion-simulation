#include "TextViewer.h"
using namespace std;

TextViewer::TextViewer(ostream& dessin, const string& nom_fichier)
	: dessin_(dessin), sortie_(nom_fichier)
{ 
	if (!sortie_.is_open()) {
            cerr << "Impossible d'ouvrir le fichier : suivi.txt" << endl;
        } else {
		sortie_ <<"Positions prises par la particule d'Uranium :" << endl;
	}
}

TextViewer::~TextViewer() { 
	sortie_ << "Fin suivi" << endl;
	sortie_.close(); }
void TextViewer::dessine(Enceinte const& enceinte) {
	dessin_ << enceinte;
}
		
void TextViewer::dessine(Argon const& ar) {
	dessin_ << ar;
}

void TextViewer::dessine(Neon const& ne) {
	dessin_ << ne;
}

void TextViewer::dessine(Helium const& he) {
	dessin_ << he;
}

void TextViewer::dessine(Uranium const& ur) {
	dessin_ << ur;
	sortie_ << " " << ur.get_position() << endl;
}

void TextViewer::dessine(std::deque<Vecteur> const&) {}


