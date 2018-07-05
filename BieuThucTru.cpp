#include "BieuThucTru.h"
#include <iostream>
using namespace std;


BieuThucTru::BieuThucTru()
{
}


BieuThucTru::~BieuThucTru()
{
}

void BieuThucTru::display()
{
	cout << "(";
	for (int i = 0; i < pBieuThuc.size(); i++)
	{
		if (i != 0)
			cout << " - ";
		pBieuThuc[i]->display();
	}
	cout << ")";
}

float BieuThucTru::TinhGiaTri(float x, float y)
{
	float res = 0;
	for (int i = 0; i < pBieuThuc.size(); i++)
		res -= pBieuThuc[i]->TinhGiaTri(x, y);
	return res;
}
