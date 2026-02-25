#pragma once
class Block
{
protected:
	float Hardness;
	float Resistance;

public:
	virtual void Describe() = 0;
};

