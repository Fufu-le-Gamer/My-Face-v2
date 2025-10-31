#pragma once
#include "Color.h"
#include <string>



struct Mouth
{
	int Size;
	int Nbr_Dents;
	Color TongueColor;

	Mouth();

	Mouth(int _Size, int _Nbr_Dents, Color _TongueColor);


	std::string ToString();
};

