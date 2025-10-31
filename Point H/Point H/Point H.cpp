// Point H.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include "Face.h"

int main()
{
	Face MonVisage = Face(Mouth(), Hair(), Eye(10, Color(0, 120, 0, 0)));
	std::cout << MonVisage.ToString();
}

