#pragma once
#define E 2.718281828
#include <vector>
enum KieuBieuThuc {
	BT,
	BTDonThuc,
	BTCong,
	BTNhan,
	BTChia,
	BTTru
};

class BieuThuc
{
protected:
	std::vector<BieuThuc*> pBieuThuc;
public:
	BieuThuc();
	~BieuThuc();
	void add(BieuThuc*);
	virtual float TinhGiaTri(float, float);
	virtual void display();

	virtual BieuThuc * Cong(BieuThuc*);
	virtual BieuThuc * Tru(BieuThuc*);
	virtual BieuThuc * Chia(BieuThuc*);

	//virtual KieuBieuThuc typeOf() { return BT; }
};
