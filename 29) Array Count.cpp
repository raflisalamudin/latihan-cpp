#include <iostream>
using namespace std;

int main(){
	
	int jumlah_item;
	cout<<"Jumlah Item = ";
	cin>>jumlah_item;
	int harga[jumlah_item];
	int total;
	for(int b = 0; b < jumlah_item; b++){
		cout<<"Harga Item Ke-"<<b<<" = ";
		cin>>harga[b];
	}
	cout<<"======================================="<<endl;
	cout<<"Jumlah Item = "<<jumlah_item<<endl;	
	for(int a = 0; a < jumlah_item; a++){
		cout<<"Harga Item Ke-"<<a<<" = Rp. "<<harga[a]<<endl;
		total += harga[a];
	}
	cout<<"======================================="<<endl;
	cout<<"Total Harga = Rp. "<<total<<endl;
	
	
	
	
	
	
	
	
	
}
