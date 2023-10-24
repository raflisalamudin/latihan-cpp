#include <iostream>
using namespace std;

int main(){
	
	int jumlah_index;
	cout<<"Masukkan Jumlah Data = ";
	cin>>jumlah_index;
	
	float nilai[jumlah_index], total, rerata;
	for(int a = 0; a < jumlah_index; a++){
		cout<<"Data Ke-"<<a<<" = ";
		cin>>nilai[a];
		// total += nilai[a];
	}
	for(int b = 0; b < jumlah_index; b++){
		total += nilai[b];
	}
	cout<<"Total Nilai = "<<total<<endl;
	rerata = total/jumlah_index;
	cout<<"Rata-Rata = "<<rerata<<endl;
	
}
