#include "stdafx.h"
#include "Stone.h"

Stone::Stone()
{
	Hardness = 0.5f;
	Resistance = 0.5f;
}

void Stone::Describe()
{
	cout << "Stone Hardness : " << Hardness << endl;
	cout << "Stone Resistance : " << Resistance << endl;
}

Stone::~Stone()
{
	cout << "Destroyed Stone" << endl;
}