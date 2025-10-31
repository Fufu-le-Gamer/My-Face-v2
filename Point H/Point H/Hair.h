#pragma once
#include "Color.h"
#include <string>

struct Hair
{
	int type;
	int nb_cheveux;
	int motif_sur_les_cheveux;
	Color HairColor;
	int HairLength;

	Hair();

	Hair(int _type, int _nb_cheveux, int _motif_sur_les_cheveux, int _HairLength, Color _HairColor);


	std::string ToString();
};

