#include "LOG.h"
#include <iostream>
#include <cmath>
using namespace std;


LOG::LOG()
{
}


LOG::~LOG()
{
}

LOG::LOG(double hesoLoga, BieuThuc *bt)
{
	pBieuThuc.push_back(bt);
	n = hesoLoga;
}

void LOG::display()
{
	if(n == 10)
		cout << "log(";
	else if (n == E)
		cout << "ln(";
	else
		cout << "log" << n << "(";
	for (int i = 0; i < pBieuThuc.size(); i++)
		pBieuThuc[i]->display();
	cout << ")";
}

float LOG::TinhGiaTri(float x, float y)
{
	return log10(pBieuThuc[0]->TinhGiaTri(x, y)) / log10(n);
}
