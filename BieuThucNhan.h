#pragma once
#include "BieuThuc.h"
class BieuThucNhan :
	public BieuThuc
{
public:
	BieuThucNhan();
	~BieuThucNhan();
	void display();
	float TinhGiaTri(float x, float y);

	/*BieuThuc * Cong(BieuThuc*);
	BieuThuc * Tru(BieuThuc*);
	BieuThuc * Chia(BieuThuc*);*/

	//virtual KieuBieuThuc typeOf() { return BTNhan; }
};

