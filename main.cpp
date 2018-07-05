#include "DonThuc.h"
#include "BieuThucNhan.h"
#include "BieuThucCong.h"
#include "BieuThucChia.h"
#include "SIN.h"
#include "COS.h"
#include "TAN.h"
#include "LOG.h"
#include "HamMu.h"
#include <iostream>
using namespace std;
void main()
{
	int n = 12;
	//1.Danh sach cac bieu thuc
	BieuThuc **pBieuThuc = new BieuThuc*[n];

	DonThuc *x = new DonThuc(1, 'x', 1);
	DonThuc *x2 = new DonThuc(1, 'x', 2);
	DonThuc *y = new DonThuc(1, 'y', 1);
	DonThuc *y2 = new DonThuc(1, 'y', 2);
	//	Bieu thuc A
	pBieuThuc[0] = new DonThuc(1, 'x', 1);
	//	Bieu thuc B
	pBieuThuc[1] = new DonThuc(1, 'y', 2);
	//	Bieu thuc C
	pBieuThuc[2] = new BieuThucNhan();
	pBieuThuc[2]->add(x);
	pBieuThuc[2]->add(y2);
	//	Bieu thuc D
	pBieuThuc[3] = new BieuThucNhan();
	pBieuThuc[3]->add(y);
	pBieuThuc[3]->add(x2);
	//	Bieu thuc E
	pBieuThuc[4] = new BieuThucCong();
	BieuThuc *btn4 = new BieuThucNhan();
	btn4->add(x);
	btn4->add(y);
	pBieuThuc[4]->add(btn4);
	pBieuThuc[4]->add(y2);
	//	Bieu thuc F
	pBieuThuc[5] = new BieuThucNhan();
	pBieuThuc[5]->add(pBieuThuc[4]);
	BieuThuc *btc5 = new BieuThucCong();
	btc5->add(x2);
	btc5->add(y);
	pBieuThuc[5]->add(btc5);
	//	Bieu thuc G
	pBieuThuc[6] = new BieuThucChia();
	BieuThuc *btc61 = new BieuThucCong(), *btc62 = new BieuThucCong();
	BieuThuc *btn6 = new BieuThucNhan();
	btn6->add(x); btn6->add(y);
	btc61->add(x); btc61->add(btn6);
	btc62->add(y2); btc62->add(x);
	pBieuThuc[6]->add(btc61); pBieuThuc[6]->add(btc62);
	//	Bieu thuc C cau 2
	pBieuThuc[7] = new SIN(pBieuThuc[2]);
	// Bieu thuc E cau 2
	pBieuThuc[8] = new LOG(E, pBieuThuc[4]);
	// Bieu thuc F cau 2
	pBieuThuc[9] = new BieuThucNhan();
	pBieuThuc[9]->add(pBieuThuc[4]);
	BieuThuc *btc9 = new BieuThucCong();
	btc9->add(x2); btc9->add(y);
	pBieuThuc[9]->add(new COS(btc9));
	// Bieu thuc H cau 2
	pBieuThuc[10] = new BieuThucNhan();
	pBieuThuc[10]->add(new HamMu(E, pBieuThuc[4]));
	pBieuThuc[10]->add(btc9);
	// Bieu thuc G cau 2
	pBieuThuc[11] = new BieuThucChia();
	pBieuThuc[11]->add(new TAN(btc61));
	pBieuThuc[11]->add(new LOG(10, btc62));
	//Cac bieu thuc khac de test
	BieuThuc *x2x = new DonThuc(2, 'x', 1);


	//2. In ra man hinh
	cout << "DANH SACH CAC BIEU THUC: \n";
	string c = "ABCDEFGHIJKLMN";
	for (int i = 0; i < n; i++, cout << endl)
	{
		if (i == 7)
			cout << "\n";
		cout << "\t" << c[i] << "(x,y) = ";
		pBieuThuc[i]->display();
	}

	//3. Tinh gia tri
	cout << "TINH GIA TRI: \n";
	cout << "Tinh gia tri cua cac bieu thuc tai:\n";
	cout << "x = "; float x0; cin >> x0;
	cout << "y = "; float y0; cin >> y0;
	for (int i = 0; i < n; i++, cout << endl)
	{
		cout << "\t" << c[i] << "(" << x0 << "," << y0 << ")" << " = ";
		cout << pBieuThuc[i]->TinhGiaTri(x0, y0);
	}
	
	//4. Thuc hien phep tinh
	cout << "CAC PHEP TINH\n"; 
	cout << "\tx + 2x = "; x->Cong(x2x)->display(); cout << endl;
	cout << "\tA + B = "; pBieuThuc[0]->Cong(pBieuThuc[1])->display(); cout << endl;
	cout << "\tB + C + D = ";pBieuThuc[1]->Cong(pBieuThuc[2])->Cong(pBieuThuc[3])->display(); cout << endl;
	cout << "\tA - B = "; pBieuThuc[0]->Tru(pBieuThuc[1])->display(); cout << endl;
	cout << "\tC / D = "; pBieuThuc[2]->Chia(pBieuThuc[3])->display(); cout << endl;
	cout << "\tH + K = "; pBieuThuc[8]->Cong(pBieuThuc[10])->display(); cout << endl;
	cout << "\tH / K = "; pBieuThuc[7]->Chia(pBieuThuc[9])->display(); cout << endl;
	cout << "\tI - K - L = "; pBieuThuc[8]->Tru(pBieuThuc[9])->Tru(pBieuThuc[10])->display(); cout << endl;
	system("pause");
}