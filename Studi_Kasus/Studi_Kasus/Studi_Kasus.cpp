#include <iostream>

using namespace std;
int main()
{
	int tbayar, tbeli, hbarang, jmlh, dis;
	cout << "Perhitungan Pembayaran Barang" << endl;
	cout << "=====================" << endl;
	cout << "Jumlah Barang = " << endl;
	cin >> jmlh;
	cout << "Harga Barang= " << endl;
	cin >> hbarang;
	//total beli
	tbeli = jmlh * hbarang;
	//kondisi
	if (tbeli > 150000)
	{
		dis = tbeli * 0.2;
	}
	else {
		dis = tbeli * 0.05;
	}
	tbayar = tbeli - dis;
	cout << "=========================" << endl;
	cout << "Total Beli = Rp,  " << tbeli << endl;
	cout << "Total Diskon = Rp. " << dis<< endl;
	cout << "Total Bayar = Rp. " << tbayar << endl;
	cout << "=========================" << endl;
}

