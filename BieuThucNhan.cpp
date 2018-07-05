#include "BieuThucNhan.h"
#include <string>
#include <iostream>
using namespace std;


BieuThucNhan::BieuThucNhan()
{
}


BieuThucNhan::~BieuThucNhan()
{
}

void BieuThucNhan::display()
{
	for (int i = 0; i < pBieuThuc.size(); i++)
	{
		if (i != 0)
			cout << ".";
		pBieuThuc[i]->display();
	}
}

float BieuThucNhan::TinhGiaTri(float x, float y)
{
	float res = pBieuThuc[0]->TinhGiaTri(x, y);
	for (int i = 1; i < pBieuThuc.size(); i++)
		res *= pBieuThuc[i]->TinhGiaTri(x, y);
	return res;
}
