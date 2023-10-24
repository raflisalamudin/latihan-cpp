#include <iostream>
using namespace std;

const double phi = 3.14;
double hitungL(double r){
	double L = phi * (r * r);
	return L;
}

double hitungK(double r){
	double K = phi * (2 * r);
	return K;
}

void tampilL(double r){
	double L = hitungL(r);
	cout<<"Luas : "<<endl;
	cout<<"L \t= phi x (r x r)"<<endl;
	cout<<"L \t= "<<phi<<" x ( "<<r<<" x "<<r<<" )"<<endl;
	cout<<"L \t= "<<L<<endl;
}

void tampilK(double r){
	double K = hitungK(r);
	cout<<"Keliling : "<<endl;
	cout<<"K \t= phi x (2 * r)"<<endl;
	cout<<"K \t= "<<phi<<" x (2 x "<<r<<" )"<<endl;
	cout<<"K \t= "<<K<<endl;
}

int main(){
	// L = phi x r x r
	// K = phi x 2 x r / d
	double r;
	string lanjut;
	do{
		system("cls");
		cout<<"Masukkan r : "; cin>>r;
		tampilL(r);
		tampilK(r);
		cout<<"Ulangi Proses <y/n> : "; cin>>lanjut;
	} while(lanjut == "y");
	system("cls");
	cout<<"Program Selesai"<<endl;
	
}
