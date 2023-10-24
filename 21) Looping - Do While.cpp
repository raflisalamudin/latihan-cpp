#include <iostream>
using namespace std;

int main(){
	
	int L, p, l;
	string ulang;
	
	do{
		cout<<"=============================="<<endl;
		cout<<"Masukkan panjang \t: ";
		cin>>p;
		cout<<"Masukkan lebar \t\t: ";
		cin>>l;
		L = p * l;
		cout<<"Luas persegi panjang adalah "<<L<<endl;
		cout<<"Ulangi Proses (y/n) = ";
		cin>>ulang;
	} while(ulang == "y");
	cout<<"\nProgram selesai";
	
	
	
}
