//Zeynep Ülkü Kılıç

#include "karmasik.h"

using namespace std;

int main() {
	int sayi;
	cout << "Karmasik Sayi sayisini giriniz:" << endl;
	cin >> sayi;
	KarmasikSayi A(7,1),B(2,5),C;
	vector<KarmasikSayi> v;
	while(sayi > 0) {
		cin >> C;
		cout << C << endl;
		v.push_back(C);
		sayi--;
	}
	cout << C.ortalama(v) << endl;

	cout << "*************************************" << endl;
	cout << A+B << endl;
	cout << A+5 << endl;
	cout << 5+B << endl;
	cout << A-B << endl;
	cout << A-3 << endl;
	cout << 6-B << endl;
	cout << -B << endl;
	cout << A*B << endl;
	cout << ++A << endl;
	cout << --B << endl;
	
	return 0;
}
