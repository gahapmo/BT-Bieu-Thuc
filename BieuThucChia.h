#pragma once
#include "BieuThuc.h"
class BieuThucChia :
	public BieuThuc
{
public:
	BieuThucChia();
	~BieuThucChia();
	void display();
	float TinhGiaTri(float x, float y);

	/*BieuThuc * Cong(BieuThuc*);
	BieuThuc * Tru(BieuThuc*);
	BieuThuc * Chia(BieuThuc*);

	virtual KieuBieuThuc typeOf() { return BTChia; }*/
};

