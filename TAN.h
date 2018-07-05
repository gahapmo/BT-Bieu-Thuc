#pragma once
#include "BieuThuc.h"
class TAN :
	public BieuThuc
{
public:
	TAN();
	~TAN();
	TAN(BieuThuc*);
	void display();
	float TinhGiaTri(float x, float y);
};

