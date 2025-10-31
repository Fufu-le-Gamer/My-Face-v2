#pragma once
#include "Color.h"
#include "Mouth.h"
#include "Hair.h"
#include "Eye.h"
#include <string>
class Face
{
public:

	Face();

	Face(Mouth _Mouth, Hair _Hair, Eye _Eye);


	std::string ToString();


};

