#pragma once
#include "BieuThuc.h"
class BieuThucTru :
	public BieuThuc
{
public:
	BieuThucTru();
	~BieuThucTru();
	void display();
	float TinhGiaTri(float x, float y);

	/*BieuThuc * Cong(BieuThuc*);
	BieuThuc * Tru(BieuThuc*);
	BieuThuc * Chia(BieuThuc*);*/

	//virtual KieuBieuThuc typeOf() { return BTTru; }
};

