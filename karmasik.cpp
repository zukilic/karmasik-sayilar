//Zeynep Ülkü Kılıç

#include "karmasik.h"

using namespace std;

//default constructor
KarmasikSayi::KarmasikSayi() {}

//conversion constructor
KarmasikSayi::KarmasikSayi(double x) {
	v.push_back(x);
	v.push_back(0);
}

//consturctor
KarmasikSayi::KarmasikSayi(double x, double y) {
	v.push_back(x);
	v.push_back(y);
}

//iki karmaşık sayı toplama
const KarmasikSayi operator+(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2) {
	double a = karmasikSayi1.v[0] + karmasikSayi2.v[0];
	double b = karmasikSayi1.v[1] + karmasikSayi2.v[1];
	return KarmasikSayi(a, b);
}

//bir karmaşık sayı ve bir reel sayı toplama
const KarmasikSayi operator+(const KarmasikSayi& karmasikSayi1, double x) {
	double a = karmasikSayi1.v[0] + x;
	double b = karmasikSayi1.v[1];
	return KarmasikSayi(a, b);
}

//bir karmaşık sayı ve bir reel sayı toplama
const KarmasikSayi operator+(double x, const KarmasikSayi& karmasikSayi1) {
	double a = karmasikSayi1.v[0] + x;
	double b = karmasikSayi1.v[1];
	return KarmasikSayi(a, b);
}

//iki karmaşık sayı çıkarma
const KarmasikSayi operator-(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2) {
	double a = karmasikSayi1.v[0] - karmasikSayi2.v[0];
	double b = karmasikSayi1.v[1] - karmasikSayi2.v[1];
	return KarmasikSayi(a, b);
}

//bir karmaşık sayı ve bir reel sayı çıkarma
const KarmasikSayi operator-(const KarmasikSayi& karmasikSayi1, double x) {
	double a = karmasikSayi1.v[0] - x;
	double b = karmasikSayi1.v[1];
	return KarmasikSayi(a, b);
}

//bir karmaşık sayı ve bir reel sayı çıkarma
const KarmasikSayi operator-(double x, const KarmasikSayi& karmasikSayi1) {
	double a = karmasikSayi1.v[0] - x;
	double b = karmasikSayi1.v[1];
	return KarmasikSayi(a, b);
}

//bir karmaşık sayıyı -1 ile çarpma
const KarmasikSayi operator-(const KarmasikSayi& karmasikSayi) {
	double a = karmasikSayi.v[0];
	double b = karmasikSayi.v[1];
	return KarmasikSayi(-a, -b);
}

//iki karmaşık sayıyı çarpma
const KarmasikSayi operator*(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2) {
	double a = (karmasikSayi1.v[0])*(karmasikSayi2.v[0]) - (karmasikSayi1.v[1])*(karmasikSayi2.v[1]);
	double b = (karmasikSayi1.v[0])*(karmasikSayi2.v[1]) + (karmasikSayi1.v[1])*(karmasikSayi2.v[0]);
	return KarmasikSayi(a, b);
}

//= operatörü
KarmasikSayi KarmasikSayi::operator=(const KarmasikSayi& karmasikSayi) {
	v[0] = karmasikSayi.v[0];
	v[1] = karmasikSayi.v[1];
		return *this;		
}

//+= operatörü
KarmasikSayi KarmasikSayi::operator+=(const KarmasikSayi& karmasikSayi) {
	v[0] += karmasikSayi.v[0];
	v[1] += karmasikSayi.v[1];
	return *this;
}

//-= operatörü
KarmasikSayi KarmasikSayi::operator-=(const KarmasikSayi& karmasikSayi) {
	v[0] -= karmasikSayi.v[0];
	v[1] -= karmasikSayi.v[1];
	return *this;
}

///= operatörü
KarmasikSayi KarmasikSayi::operator/=(const KarmasikSayi& karmasikSayi) {
	v[0] /= karmasikSayi.v[0];
	v[1] /= karmasikSayi.v[1];
	return *this;
}

//iki karmaşık sayı eşit mi
bool operator==(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2) {
	if((karmasikSayi1.v[0] == karmasikSayi2.v[0]) && (karmasikSayi1.v[1] == karmasikSayi2.v[1]))
		return true;
	else
		return false;
}

//iki karmaşık sayı farklı mı
bool operator!=(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2) {
	if((karmasikSayi1.v[0] == karmasikSayi2.v[0]) && (karmasikSayi1.v[1] == karmasikSayi2.v[1]))
		return false;
	else
		return true;
}

//iki karmaşık sayıyı karşılaştırma
bool operator>(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2) {
	if(karmasikSayi1.v[0] > karmasikSayi2.v[0])
		return true;
	else
		return false;
}

//iki karmaşık sayıyı karşılaştırma
bool operator<(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2) {
	if(karmasikSayi1.v[0] < karmasikSayi2.v[0])
		return true;
	else
		return false;
}

//iki karmaşık sayıyı karşılaştırma
bool operator<=(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2) {
	if(karmasikSayi1.v[0] <= karmasikSayi2.v[0])
		return true;
	else
		return false;
}

//iki karmaşık sayıyı karşılaştırma
bool operator>=(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2) {
	if(karmasikSayi1.v[0] >= karmasikSayi2.v[0])
		return true;
	else
		return false;
}

//bir karmaşık sayı ile bir reel sayıyı çarpma
const KarmasikSayi operator*(const KarmasikSayi& karmasikSayi1, double x) {
	double a = karmasikSayi1.v[0] * x;
	double b = karmasikSayi1.v[1] * x;
	return KarmasikSayi(a, b);
}

//bir karmaşık sayı ile bir reel sayıyı çarpma
const KarmasikSayi operator*(double x, const KarmasikSayi& karmasikSayi1) {
	double a = karmasikSayi1.v[0] * x;
	double b = karmasikSayi1.v[1] * x;
	return KarmasikSayi(a, b);
}

//bir karmaşık sayının eşleneğini alma
const KarmasikSayi operator!(const KarmasikSayi& karmasikSayi) {
	double a = karmasikSayi.v[0];
	double b = karmasikSayi.v[1];
	return KarmasikSayi(a, -b);
}

//karmaşık sayıyı yazdırmak
ostream& operator<<(ostream& outputStream, const KarmasikSayi& A) {
	outputStream << A.v[0] << " + ";
	outputStream << A.v[1] << "i";
	outputStream << endl;
	return outputStream;
}

//karmaşık sayıyı okumak
istream& operator>>(istream& inputStream, KarmasikSayi& A) {
	double a, b;
	A.v.resize(2);
	cout << "reel kisim:" << endl;
	inputStream >> a;
	cout << "sanal kisim:" << endl;
	inputStream >> b;
	A.v[0] = a;
	A.v[1] = b;
	return inputStream;
}

//karmaşık sayıyı bir arttırmak
const KarmasikSayi operator++(const KarmasikSayi& karmasikSayi) {
	double a = karmasikSayi.v[0] + 1;
	double b = karmasikSayi.v[1];
	return KarmasikSayi(a, b);		
}

//karmaşık sayıyı bir azaltmak
const KarmasikSayi operator--(const KarmasikSayi& karmasikSayi) {
	double a = karmasikSayi.v[0] - 1;
	double b = karmasikSayi.v[1];
	return KarmasikSayi(a, b);		
}

//üs alma
const KarmasikSayi operator^(const KarmasikSayi& karmasikSayi, int x) {
	KarmasikSayi A(1,0);
	for(int i = 0; i < x; ++i) {
		A = A*karmasikSayi;
	}
	return A;
}

//Kullanıcının girdiği karmaşık sayıların ortalamasını bulan ve ortalama karmaşık sayıyı döndüren fonksiyon.
KarmasikSayi KarmasikSayi::ortalama(vector<KarmasikSayi> v) {
	int i = 0;
	KarmasikSayi ort(0,0);
	int buyukluk = v.size();
	while(i < buyukluk) {
		ort += v[i];
		i++;
	}
	ort.v[0] = ort.v[0]/buyukluk;
	ort.v[1] = ort.v[1]/buyukluk;
	return ort;
}

/*Kullanıcının girdiği karmaşık sayılardan birbirine en uzak çifti bulan ve bu iki karmaşık sayıyı ve aradaki mesafeyi döndüren fonksiyon.
KarmasikSayi KarmasikSayi::uzaklik(vector<KarmasikSayi> v) {
	
	
	
}*/
