#include<iostream>
using namespace std;

enum hari{
	senin, selasa, rabu, kamis, jumat, sabtu, minggu
};

int main(){
	hari sekarang, jadwal;
	sekarang = rabu;
	jadwal = sabtu;
	
	int selisih = jadwal - sekarang;
	if(sekarang < jadwal){
		cout<<"Jadwal adalah "<<selisih<<" hari kagi"<<endl;
	} else if(sekarang > jadwal){
		cout<<"Jadwal adalah "<<selisih<<" hari yang lalu"<<endl;
	} else {
		cout<<"Jadwal adalah hari ini"<<endl;
	}
	
}
