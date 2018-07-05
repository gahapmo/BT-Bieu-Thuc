#pragma once
#include "BieuThuc.h"
class COS :
	public BieuThuc
{
public:
	COS();
	~COS();
	COS(BieuThuc*);
	void display();
	float TinhGiaTri(float x, float y);
};

