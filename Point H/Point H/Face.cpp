#include "Face.h"

Mouth Bouche;
Hair Cheveux;
Eye Yeux;

Face::Face()
{
	Bouche = Mouth();
	Cheveux = Hair();
	Yeux = Eye();
}

Face::Face(Mouth _Mouth, Hair _Hair, Eye _Eye)
{
	Bouche = _Mouth;
	Cheveux = _Hair;
	Yeux = _Eye;
}

std::string Face::ToString() {
	std::string FaceString = Bouche.ToString() + Cheveux.ToString() + Yeux.ToString();
	return FaceString;
}