#include "Mouth.h"


Mouth::Mouth()
{
	Size = 0;
	Nbr_Dents = 0;
	TongueColor = Color();
}

Mouth::Mouth(int _Size, int _Nbr_Dents, Color _TongueColor)
{
	Size = _Size;
	Nbr_Dents = _Nbr_Dents;
	TongueColor = _TongueColor;
}

std::string Mouth::ToString() {
	std::string MouthString = "My Face:\n\nMy Mouth --> Size : " + std::to_string(Size) + " - NbrDents: " + std::to_string(Nbr_Dents) + " - langue" + TongueColor.ToString() + "\n";

	return MouthString;
}
