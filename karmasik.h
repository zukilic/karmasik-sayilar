//Zeynep Ülkü Kılıç

#include <iostream>
#include <vector>

using namespace std;

class KarmasikSayi {
public:
	KarmasikSayi();							//default constructor
	KarmasikSayi(double x);					//conversion constructor
	KarmasikSayi(double x, double y);		//constructor

	friend const KarmasikSayi operator+(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2);	//iki karmaşık sayı toplama
	friend const KarmasikSayi operator+(const KarmasikSayi& karmasikSayi1, double x);							//bir karmaşık sayı ve bir sayıyı toplama
	friend const KarmasikSayi operator+(double x, const KarmasikSayi& karmasikSayi1);
	friend const KarmasikSayi operator-(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2);	//iki karmaşık sayı çıkarma
	friend const KarmasikSayi operator-(const KarmasikSayi& karmasikSayi1, double x);							//bir karmaşık sayıdan bir sayıyı çıkarma
	friend const KarmasikSayi operator-(double x, const KarmasikSayi& karmasikSayi1);
	friend const KarmasikSayi operator-(const KarmasikSayi& karmasikSayi);										//bir karmaşık sayıyı -1 ile çarpma
	friend const KarmasikSayi operator*(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2);	//iki karmaşık sayıyı çarpma
	
	friend bool operator==(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2);				//iki karmaşık sayı eşit mi
	friend bool operator!=(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2);				//iki karmaşık sayı farklı mı
	friend bool operator>(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2);	//İki karmaşık sayıyı karşılaştırmak için > operatörü 
	friend bool operator<(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2);	//İki karmaşık sayıyı karşılaştırmak için < operatörü 
	friend bool operator<=(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2);	//İki karmaşık sayıyı karşılaştırmak için <= operatörü
	friend bool operator>=(const KarmasikSayi& karmasikSayi1, const KarmasikSayi& karmasikSayi2);	//İki karmaşık sayıyı karşılaştırmak için >= operatörü
	
	KarmasikSayi operator=(const KarmasikSayi& karmasikSayi); 										//= operatörü
	KarmasikSayi operator+=(const KarmasikSayi& karmasikSayi);										//+= operatörü
	KarmasikSayi operator-=(const KarmasikSayi& karmasikSayi);										//-= operatörü
	KarmasikSayi operator/=(const KarmasikSayi& karmasikSayi);										///= operatörü
	
	friend const KarmasikSayi operator*(const KarmasikSayi& karmasikSayi1, double x);				//Bir karmaşık sayı ile bir reel sayıyı çarpma
	friend const KarmasikSayi operator*(double x, const KarmasikSayi& karmasikSayi1);
	friend const KarmasikSayi operator!(const KarmasikSayi& karmasikSayi);							//Bir karmaşık sayının eşleniğini (conjugate) veren ! operatörü
	
	friend ostream& operator<<(ostream& outputStream, const KarmasikSayi& A);		//bir karmaşık sayıyı yazdırmak için << opertatörü
	friend istream& operator>>(istream& inputStream, KarmasikSayi& A);				//bir karmaşık sayıyı okumak için >> opertatörü
	
	friend const KarmasikSayi operator++(const KarmasikSayi& karmasikSayi);			//++operatörü
	friend const KarmasikSayi operator--(const KarmasikSayi& karmasikSayi);			//--operatörü
	friend const KarmasikSayi operator^(const KarmasikSayi& karmasikSayi, int x);	//üs alma operatörü
	
	//Kullanıcının girdiği karmaşık sayıların ortalamasını bulan ve ortalama karmaşık sayıyı döndüren bir ortalama fonksiyonu.
	KarmasikSayi ortalama(vector<KarmasikSayi> v);
	//Kullanıcının girdiği karmaşık sayılardan birbirine en uzak çifti bulan ve bu iki karmaşık sayıyı ve aradaki mesafeyi döndüren bir fonksiyon.
	//KarmasikSayi uzaklik(vector<KarmasikSayi> v);
	
private:
	vector<double> v;	
};
