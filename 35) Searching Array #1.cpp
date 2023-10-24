#include <iostream>
using namespace std;

int main(){
	
	int angka[] = {10, 3, 5, 6, 1, 9, 8};
	int length = sizeof(angka)/sizeof(*angka);
	int noCari, hasilCari;
	
	cout<<"Data Tersedia : "<<endl;
	for(int a = 0; a < length; a++){
		cout<<"Index Ke-"<<a<<" : "<<angka[a]<<endl;
	}
	cout<<"Data yang dicari : ";
	cin>>noCari;
	
	for(int b = 0; b < length; b++){
		if(noCari == angka[b]){
			hasilCari++;
		}
	}
	if(hasilCari == 0){
		cout<<"Data tidak ditemukan"<<endl;
	} else {
		cout<<"Data "<<noCari<<" ditemukan di : "<<endl;
		for (int c = 0; c < length; c++){
			if(noCari == angka[c]){
				cout<<"Index ke-"<<c<<endl;
			}
		}
	}
	
	
}
