#pragma once
#include "BieuThuc.h"
class HamMu :
	public BieuThuc
{
private:
	double HeSo;
public:
	HamMu();
	~HamMu();
	HamMu(double, BieuThuc*);
	void display();
	float TinhGiaTri(float x, float y);
};

