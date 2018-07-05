#pragma once
#include "BieuThuc.h"

class LOG :
	public BieuThuc
{
private:
	double n;
public:
	LOG();
	~LOG();
	LOG(double, BieuThuc*);
	void display();
	float TinhGiaTri(float x, float y);
};

