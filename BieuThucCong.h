#pragma once
#include "BieuThuc.h"
class BieuThucCong :
	public BieuThuc
{
public:
	BieuThucCong();
	~BieuThucCong();
	void display();
	float TinhGiaTri(float x, float y);

	/*BieuThuc * Cong(BieuThuc*);
	BieuThuc * Tru(BieuThuc*);
	BieuThuc * Chia(BieuThuc*);*/

	//virtual KieuBieuThuc typeOf() { return BTCong; }
};

