#include <iostream>
using namespace std;

double hitungL(double a, double t){
	double L = 0.5 * a * t;
	return L;
}

void tampilL(double a, double t){
	double L = hitungL(a, t);
	cout<<"Luas : "<<endl;
	cout<<"L \t= 0.5 x a x t"<<endl;
	cout<<"L \t= 0.5 x "<<a<<" x "<<t<<endl;
	cout<<"L \t= "<<L<<endl;
}

int main(){
	// K = 3 x s
	// L = 0.5 x a x t
	double K, L, a, t;
	string lanjut;
	
	do{
		system("cls");
		cout<<"Masukkan alas   : "; cin>>a;
		cout<<"Masukkan tinggi : "; cin>>t;
	
		tampilL(a, t);
		cout<<"ulangi program? <y/n>:"; cin>>lanjut;
	} while(lanjut == "y");
	system("cls");
	cout<<"Program Selesai"<<endl;
}
