#pragma once
#include "BieuThuc.h"
class SIN :
	public BieuThuc
{
public:
	SIN();
	~SIN();
	SIN(BieuThuc*);
	void display();
	float TinhGiaTri(float x, float y);
};

