#include <iostream>
using namespace std;

int main(){
	
	int jumlah_array;
	cout<<"Jumlah Index : ";
	cin>>jumlah_array;
		
	int angka[jumlah_array];
		
	for(int a = 0; a < jumlah_array; a++){
		cout<<"Masukkan Nilai Index ke-"<<a<<" : ";
		cin>>angka[a];
	}
	cout<<"======================================="<<endl;
	cout<<"Nilai Yang tersimpan"<<endl;
	cout<<"======================================="<<endl;
	for(int b = 0; b < jumlah_array; b++){
		cout<<"Index Ke-"<<b<<" : "<<angka[b]<<endl;
	}
	
}
