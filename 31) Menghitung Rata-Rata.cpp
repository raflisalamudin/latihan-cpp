#include <iostream>
using namespace std;

int main(){
	
	float jumlah_nilai, nilai, total, rata;
	cout<<"Juamlah Data = ";
	cin>>jumlah_nilai;
	for(int a = 0; a < jumlah_nilai; a++){
		cout<<"Masukkan Data Ke-"<<a<<" = ";
		cin>>nilai;
		total += nilai;
	}
	cout<<"Total Nilai = "<<total<<endl;
	rata = total / jumlah_nilai;
	cout<<"Rata-Rata = "<<rata<<endl;
	
}
