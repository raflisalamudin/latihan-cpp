#include <iostream>
using namespace std;

int main(){
	/*
	int a, b;
	bool hasil;
	
	a = 8;
	b = 7; //batas ambang
	
	hasil = a > b; //hasil seleksi kebenaran
	
	string kondisi = hasil == 1 ? "Lulus":"Tidak Lulus";
	
	cout<<"Hasil = "<<kondisi;
	*/
	
	int a, hasil;
	cout<<"Masukkan bilangan bulat = ";
	cin>>a;
	
	hasil = a % 2;
	
	string kondisi = hasil == 1 ? "Ganjil":"Genap";
	
	cout<<"Angka "<<a<<" adalah bilangan "<<kondisi;
	
	
	
	
	
	
	
	
}
