#include "BieuThucChia.h"
#include <iostream>
using namespace std;


BieuThucChia::BieuThucChia()
{
}


BieuThucChia::~BieuThucChia()
{
}

void BieuThucChia::display()
{
	for (int i = 0; i < pBieuThuc.size(); i++)
	{
		if (i != 0)
			cout << " / ";
		cout << "(";
		pBieuThuc[i]->display();
		cout << ")";
	}
}

float BieuThucChia::TinhGiaTri(float x, float y)
{
	float res = pBieuThuc[0]->TinhGiaTri(x, y);
	for (int i = 1; i < pBieuThuc.size(); i++)
		res /= pBieuThuc[i]->TinhGiaTri(x, y);
	return res;
}

