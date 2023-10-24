#include <iostream>
using namespace std;

int main(){
	/*
	Operator Aritmatika
	+ penjumlahan
	- pengurangan
	* perkalian
	/ pembagian
	% sisa bagi
	*/
	
	/*
	int a, b, hasil;
	
	cout<<"PENJUMLAHAN"<<endl;
	cout<<"Masukkan angka = ";
	cin>>a;	
	cout<<"Masukkan angka = ";
	cin>>b;
	hasil = a + b;
		
	cout<<"Hasil penjumlahan "<<a<<" + "<<b<<" adalah "<<hasil<<endl;
	cout<<""<<endl;
	
	
	cout<<"PENGURANGAN"<<endl;
	cout<<"Masukkan angka = ";
	cin>>a;	
	cout<<"Masukkan angka = ";
	cin>>b;
	hasil = a - b;
		
	cout<<"Hasil pengurangan "<<a<<" - "<<b<<" adalah "<<hasil<<endl;
	cout<<""<<endl;
	
	int sekarang, tahun_lahir, umur;
	
	cout<<"BERAPA USIA ANDA SEKARANG?"<<endl;
	cout<<"Tahun sekarang  \t= ";
	cin>>sekarang;
	cout<<"Tahun lahir  \t\t= ";
	cin>>tahun_lahir;
	umur = sekarang - tahun_lahir;
	
	cout<<"Jika sekarang adalah tahun "<<sekarang<<", maka usia anda sudah "<<umur<< " tahun"<<endl;
	cout<<""<<endl;
	
	
	cout<<"PERKALIAN"<<endl;
	cout<<"Masukkan angka = ";
	cin>>a;	
	cout<<"Masukkan angka = ";
	cin>>b;
	hasil = a * b;
	
	cout<<"Hasil perkalian "<<a<<" x "<<b<<" adalah "<<hasil<<endl;
	cout<<""<<endl;
	
	
	float a, b, hasil; // pembagian menggunakan float agar bisa menampilkan hasil koma
	cout<<"PEMBAGIAN"<<endl;
	cout<<"Masukkan angka = ";
	cin>>a;	
	cout<<"Masukkan angka = ";
	cin>>b;
	hasil = a / b;
	
	cout<<"Hasil pembagian "<<a<<" : "<<b<<" adalah "<<hasil<<endl;
	cout<<""<<endl;
	*/
	
	int a, hasil;
	cout<<"MENENTUKAN BILANGAN GANJIL ATAU GENAP"<<endl;
	cout<<"Masukkan bilangan = ";
	cin>>a;
	hasil = a % 2;
	string jenis = hasil == 1 ? "Ganjil" : "Genap"; // jenis (variable atau ganjil genap, ? maka, : selain itu)
	
	cout<<"Bilangan "<<a<<" termasuk bilangan "<<jenis;
	
	
	
	
	
	
	
	
	
	
}
