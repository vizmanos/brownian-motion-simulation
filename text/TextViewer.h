#pragma once

#include <iostream>
#include <fstream>
#include "support_a_dessin.h"
#include "Enceinte.h"
#include "SousParticules.h"


class TextViewer : public SupportADessin {
	
private:
    std::ostream& dessin_;
    std::ofstream sortie_;
	
public:
    TextViewer(std::ostream& dessin, const std::string& nom_fichier);
    ~TextViewer();
		
    virtual void dessine(Enceinte const& enceinte) override;
    virtual void dessine(Argon const& ar) override;
    virtual void dessine(Neon const& he) override;
    virtual void dessine(Helium const& ne) override;
    virtual void dessine(Uranium const& ur) override;
    virtual void dessine(std::deque<Vecteur> const&) override;
};
