#include "BieuThuc.h"
#include "BieuThucCong.h"
#include "BieuThucTru.h"
#include "BieuThucNhan.h"
#include "BieuThucChia.h"

BieuThuc::BieuThuc()
{
}


BieuThuc::~BieuThuc()
{
}

void BieuThuc::add(BieuThuc *p)
{
	pBieuThuc.push_back(p);
}

float BieuThuc::TinhGiaTri(float x, float y)
{
	float res;
	res = pBieuThuc[0]->TinhGiaTri(x, y);
	return res;
}

void BieuThuc::display()
{
	pBieuThuc[0]->display();
}

BieuThuc * BieuThuc::Cong(BieuThuc *b)
{
	BieuThuc *res = new BieuThucCong();
	res->add(this);
	res->add(b);
	return res;
}

BieuThuc * BieuThuc::Tru(BieuThuc *b)
{
	BieuThuc *res = new BieuThucTru();
	res->add(this);
	res->add(b);
	return res;
}

BieuThuc * BieuThuc::Chia(BieuThuc *b)
{
	BieuThuc *res = new BieuThucChia();
	res->add(this);
	res->add(b);
	return res;
}
