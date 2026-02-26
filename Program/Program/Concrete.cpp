#include "stdafx.h"
#include "Concrete.h"

Concrete::Concrete()
{
	Hardness = 0.5f;
	Resistance = 0.5f;
}

void Concrete::Describe()
{
	cout << "Concrete Hardness : " << Hardness << endl;
	cout << "Concrete Resistance : " << Resistance << endl;
}

Concrete::~Concrete()
{
	cout << "Destroyed Concrete" << endl;
}