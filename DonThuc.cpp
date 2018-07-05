#include "DonThuc.h"
#include "BieuThucCong.h"
#include "BieuThucTru.h"
#include "BieuThucNhan.h"
#include "BieuThucChia.h"
#include <cmath>
#include <iostream>
using namespace std;

DonThuc::DonThuc()
{
}

DonThuc::DonThuc(float HeSo, char TenBien, int SoMu)
{
	this->HeSo = HeSo;
	this->TenBien = TenBien;
	this->SoMu = SoMu;
}


DonThuc::~DonThuc()
{
}

void DonThuc::display()
{
	if (HeSo == 0)
		cout << 0;
	else if (HeSo != 1)
		cout << HeSo;
	if (SoMu == 1)
		cout << TenBien;
	else if (SoMu != 0)
		cout << TenBien << "^" << SoMu;
}

float DonThuc::TinhGiaTri(float x, float y)
{
	if (TenBien == 'x')
		return pow(HeSo * x, SoMu);
	return pow(HeSo * y, SoMu);
}


BieuThuc * DonThuc::Cong(BieuThuc *bt)
{
	if (is_CoTheCong((DonThuc*)bt))
	{
		return new DonThuc(HeSo + ((DonThuc*)bt)->HeSo, TenBien, SoMu);
	}
	else
	{
		BieuThuc *res = new BieuThucCong();
		res->add(this);
		res->add(bt);
		return res;
	}
}

BieuThuc * DonThuc::Tru(BieuThuc *bt)
{
	if (is_CoTheCong((DonThuc*)bt))
	{
		return new DonThuc(HeSo - ((DonThuc*)bt)->HeSo, TenBien, SoMu);
	}
	else
	{
		BieuThuc *res = new BieuThucTru();
		res->add(this);
		res->add(bt);
		return res;
	}
}

BieuThuc * DonThuc::Chia(BieuThuc *bt)
{
		BieuThuc *res = new BieuThucChia();
		res->add(this);
		res->add(bt);
		return res;
}
