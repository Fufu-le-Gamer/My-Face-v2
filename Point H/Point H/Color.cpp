#include "Color.h"

unsigned char R = 0;
unsigned char G = 0;
unsigned char B = 0;
unsigned char A = 0;

Color::Color()
{
	R = 0;
	G = 0;
	B = 0;
	A = 0;
}

Color::Color(unsigned char _R, unsigned char _G, unsigned char _B, unsigned char _A)
{
	R = _R;
	G = _G;
	B = _B;
	A = _A;
}

void Color::AssignToBlack()
{
	R = 0;
	G = 0;
	B = 0;
	A = 0;
}

void Color::AssignToBlue()
{
	R = 0;
	G = 0;
	B = 255;
	A = 0;
}

void Color::AssignToGreen()
{
	R = 0;
	G = 255;
	B = 0;
	A = 0;
}

void Color::AssignToRed()
{
	R = 255;
	G = 0;
	B = 0;
	A = 0;
}

void Color::SetColor(unsigned char _R, unsigned char _G, unsigned char _B, unsigned char _A)
{
	R = _R;
	G = _G;
	B = _B;
	A = _A;
}

std::string Color::ToString() {
	std::string ColorAsString = "Color: R: " + std::to_string(R) + ", G: " + std::to_string(G) + ", B: " + std::to_string(B) + ", A: " + std::to_string(A);
	return ColorAsString;
}

