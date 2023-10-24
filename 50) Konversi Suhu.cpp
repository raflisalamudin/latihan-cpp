#include <iostream>
using namespace std;

double hitungR(double c){
	double r = c * 4 / 5;
	return r;
}

double hitungK(double c){
	double k = c + 273;
	return k;
}

double hitungF(double c){
	double f = (c * 9 / 5) + 32;
	return f;
}

void tampilKonversi(double c){
	double r, k, f;
	r = hitungR(c);
	k = hitungK(c);
	f = hitungF(c);
	cout<<c<<" derajat celcius itu sama dengan "<<endl;
	cout<<r<<" derajat reamur"<<endl;
	cout<<k<<" derajat kelvin"<<endl;
	cout<<f<<" derajat fahrenheit"<<endl;
}

int main(){
	double c, r, k, f;
	string lanjut;
	do {
		system("cls");
		cout<<"Konversi Suhu"<<endl;
		cout<<"Masukkan Suhu Celcius : "; cin>>c;
		tampilKonversi(c);
		cout<<"Ulangi Program <y/n> : "; cin>>lanjut;
	} while (lanjut == "y");
	system("cls");
	cout<<"Program Selesai"<<endl;
}
