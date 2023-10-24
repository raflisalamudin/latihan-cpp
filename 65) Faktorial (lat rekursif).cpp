#include<iostream>
using namespace std;

int faktorial(int x){
	if(x <= 1){
		cout<<x<<endl;
		return x;
	} else {
		cout<<x<<" x ";
		return x * faktorial (x-1);
	}
	
}

int main(){
	int angka;
	
	cout<<"Angka : "; cin>>angka;
	cout<<angka<<" faktorial = "<<faktorial(angka);
	cout<<endl;
	
}
