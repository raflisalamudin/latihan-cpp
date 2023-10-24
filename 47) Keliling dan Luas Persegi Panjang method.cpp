#include <iostream>
using namespace std;

double hitungL(double p, double l){
	double L = p * l;
	return L;
}

double hitungK(double p, double l){
	double K = 2 * (p + l);
	return K;
}

void tampilL(double p, double l){
	double L = hitungL(p, l);
	cout<<"Luas : "<<endl;
	cout<<"L \t= p x l"<<endl;
	cout<<"L \t= "<<p<<" x "<<l<<endl;
	cout<<"L \t= "<<L<<endl;
}

void tampilK(double p, double l){
	double K = hitungK(p, l);
	cout<<"Keliling : "<<endl;
	cout<<"K \t= 2 x (p + l)"<<endl;
	cout<<"K \t= 2 x ("<<p<<" + "<<l<<")"<<endl;
	cout<<"K \t= "<<K<<endl;
}

int main(){
	// K = 2 x (p + l)
	// L = p x l
	double K, L, p, l;
	string lanjut;
	do{
		system("cls");
		cout<<"L dan K Persegi Panjang"<<endl;
		cout<<"Masukkan p : "; cin>>p;
		cout<<"Masukkan l : "; cin>>l;
		
		tampilL(p, l);
		tampilK(p, l);
		
		cout<<"ulangi proses? <y/n> :";cin>>lanjut;
	} while(lanjut == "y");
	system("cls");
	cout<<"Program Selesai"<<endl;
	
}
