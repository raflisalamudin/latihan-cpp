#include <iostream>
#include <cmath>
using namespace std;

double hitungAkar(double angka){
	return sqrt(angka);
}

void tampilAkar(double angka){
	double hasil = hitungAkar(angka);
	cout<<"Akar kuadrat dari "<<angka<<" adalah "<<hasil<<endl;
}

int main(){
	string ulang;
	double angka;
	
	do{
		system("cls");
		cout<<"Masukkan angka : "; cin>>angka;
		tampilAkar(angka);
		cout<<"Ulangi Program <y/n> : "; cin>>ulang;
	} while(ulang == "y");
	system("cls");
	cout<<"Program Selesai";
}
