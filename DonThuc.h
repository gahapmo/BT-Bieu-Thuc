#pragma once
#include "BieuThuc.h"
class DonThuc :
	public BieuThuc
{
private:
	char TenBien;
	float HeSo;
	int SoMu;
public:
	DonThuc();
	DonThuc(float HeSo, char TenBien, int SoMu);
	~DonThuc();

	void display();
	float TinhGiaTri(float x, float y);
	bool is_CoTheCong(DonThuc *bt) { return bt->TenBien == TenBien && bt->SoMu == SoMu; }

	
	BieuThuc * Cong(BieuThuc*);
	BieuThuc * Tru(BieuThuc*);
	BieuThuc * Chia(BieuThuc*);

	virtual KieuBieuThuc typeOf() { return BTDonThuc; }
};

