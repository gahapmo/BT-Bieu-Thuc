#include "BieuThucCong.h"
#include <iostream>
using namespace std;


BieuThucCong::BieuThucCong()
{
}


BieuThucCong::~BieuThucCong()
{
}

void BieuThucCong::display()
{
	cout << "(";
	for (int i = 0; i < pBieuThuc.size(); i++)
	{
		if (i != 0)
			cout << " + ";
		pBieuThuc[i]->display();
	}
	cout << ")";
}

float BieuThucCong::TinhGiaTri(float x, float y)
{
	float res = 0;
	for (int i = 0; i < pBieuThuc.size(); i++)
		res += pBieuThuc[i]->TinhGiaTri(x, y);
	return res;
}

