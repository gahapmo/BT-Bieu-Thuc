#include "SIN.h"
#include <iostream>
#include <cmath>
using namespace std;


SIN::SIN()
{
}


SIN::~SIN()
{
}

SIN::SIN(BieuThuc *bt)
{
	pBieuThuc.push_back(bt);
}

void SIN::display()
{
	cout << "sin(";
	for (int i = 0; i < pBieuThuc.size(); i++)
		pBieuThuc[i]->display();
	cout << ")";
}

float SIN::TinhGiaTri(float x, float y)
{
	return sin(pBieuThuc[0]->TinhGiaTri(x, y));
}
