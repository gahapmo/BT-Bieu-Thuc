#include "TAN.h"
#include <iostream>
#include <cmath>
using namespace std;


TAN::TAN()
{
}


TAN::~TAN()
{
}

TAN::TAN(BieuThuc *bt)
{
	pBieuThuc.push_back(bt);
}

void TAN::display()
{
	cout << "tan(";
	for (int i = 0; i < pBieuThuc.size(); i++)
		pBieuThuc[i]->display();
	cout << ")";
}

float TAN::TinhGiaTri(float x, float y)
{
	return tan(pBieuThuc[0]->TinhGiaTri(x, y));
}
