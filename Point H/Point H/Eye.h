#pragma once
#include "Color.h"
#include <string>
struct Eye
{
	Color EyeColor;
	int Size;

	Eye();

	Eye(int _size, Color _eyeColor);


	std::string ToString();
};

