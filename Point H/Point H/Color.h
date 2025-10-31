#pragma once
#include <string>
struct Color
{
	Color();


	Color(unsigned char _R, unsigned char _G, unsigned char _B, unsigned char _A);


	void AssignToBlack();


	void AssignToBlue();


	void AssignToGreen();


	void AssignToRed();


	void SetColor(unsigned char _R, unsigned char _G, unsigned char _B, unsigned char _A);


	std::string ToString();
};

