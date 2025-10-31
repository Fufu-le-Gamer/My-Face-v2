#include "Eye.h"





Eye::Eye()
{
	Size = 0;
	EyeColor = Color();
}

Eye::Eye(int _size, Color _eyeColor)
{
	Size = _size;
	EyeColor = _eyeColor;
}

std::string Eye::ToString() {
	std::string EyeString = "\nMy Eye --> My Eye" + EyeColor.ToString() + " - Size: " + std::to_string(Size);
	return EyeString;
}
