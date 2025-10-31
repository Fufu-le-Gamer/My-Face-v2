#include "Hair.h"



Hair::Hair()
{
	type = 0;
	nb_cheveux = 100000;
	motif_sur_les_cheveux = 1;
	HairLength = 50;
	HairColor = Color();
}

Hair::Hair(int _type, int _nb_cheveux, int _motif_sur_les_cheveux, int _HairLength, Color _HairColor)
{
	type = _type;
	nb_cheveux = _nb_cheveux;
	motif_sur_les_cheveux = _motif_sur_les_cheveux;
	HairLength = _HairLength;
	HairColor = _HairColor;
}

std::string Hair::ToString() {
	std::string HairString = "\nMy Hair --> Type: " + std::to_string(type) + " - nb_cheveux: " + std::to_string(nb_cheveux) + " - motif_sur_les_cheveux: " + std::to_string(motif_sur_les_cheveux) + " - HairLength: " + std::to_string(HairLength) + " - Hair" + HairColor.ToString() + "\n";
	return HairString;
}
