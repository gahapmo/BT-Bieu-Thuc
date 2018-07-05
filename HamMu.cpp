#include "HamMu.h"
#include <iostream>
#include <cmath>
using namespace std;



HamMu::HamMu()
{
}


HamMu::~HamMu()
{
}

HamMu::HamMu(double HS, BieuThuc *bt)
{
	HeSo = HS;
	pBieuThuc.push_back(bt);
}

void HamMu::display()
{
	if (HeSo == E)
		cout << "e";
	else
		cout << HeSo;
	if (HeSo != 1 && HeSo != 0)
	{
		cout << "^(";
		pBieuThuc[0]->display();
		cout << ")";
	}
}

float HamMu::TinhGiaTri(float x, float y)
{
	return pow(HeSo, pBieuThuc[0]->TinhGiaTri(x, y));
}