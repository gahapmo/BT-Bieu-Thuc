#include "COS.h"
#include <iostream>
#include <cmath>
using namespace std;


COS::COS()
{
}


COS::~COS()
{
}

COS::COS(BieuThuc *bt)
{
	pBieuThuc.push_back(bt);
}

void COS::display()
{
	cout << "cos(";
	for (int i = 0; i < pBieuThuc.size(); i++)
		pBieuThuc[i]->display();
	cout << ")";
}

float COS::TinhGiaTri(float x, float y)
{
	return cos(pBieuThuc[0]->TinhGiaTri(x, y));
}
