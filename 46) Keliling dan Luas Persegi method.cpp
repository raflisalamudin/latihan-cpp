#include <iostream>
using namespace std;

double hitungLPersegi(double s){
	double L = s * s;
	return L;
}

double hitungKPersegi(double s){
	double K = 4 * s;
	return K;
}

void tampilLuas(double s){
	double L = hitungLPersegi(s);
	cout<<"Luas : "<<endl;
	cout<<"L \t = s x s"<<endl;
	cout<<"L \t = "<<s<<" x "<<s<<endl;
	cout<<"L \t = "<<L<<endl;
}

void tampilKeliling(double s){
	double K = hitungKPersegi(s);
	cout<<"Keliling : "<<endl;
	cout<<"K \t = 4 x s"<<endl;
	cout<<"K \t = "<<4<<" x "<<s<<endl;
	cout<<"K \t = "<<K<<endl;
}

int main(){
	double s;
	string lanjut;
	do{
		system("cls");
		cout<<"Masukkan Sisi : "; cin>>s;
		tampilLuas(s);
		cout<<"================================="<<endl;
		tampilKeliling(s);
		cout<<"ulangi proses? <y/n>"; cin>>lanjut;
	} while(lanjut == "y");
	cout<<"Program Selesai"<<endl;
}
