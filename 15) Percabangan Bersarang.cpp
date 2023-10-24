#include <iostream>
using namespace std;

int main(){
	
	int pil, umur;
	string jkel, status, kegiatan;
	
	cout<<"Pilih salah satu (1/2)"<<endl;
	cout<<"1. Laki-laki\n2. Perempuan"<<endl;
	cout<<"Pilihan = ";
	cin>>pil;
	cout<<"Umur anda = ";
	cin>>umur;
	
	if(pil == 1){
		jkel = "Laki-laki";
		if(umur >= 27){
			status = "Sudah Waktunya";
			kegiatan = "Cari Jodoh";
		} else {
			status = "Belum Waktunya";
			kegiatan = "Tingkatkan Kualitas Diri";
		}
	} else if(pil == 2){
		jkel = "Perempuan";
		if(umur >= 24){
			status = "Sudah Waktunya";
			kegiatan = "Cari Jodoh";
		} else {
			status = "Belum Waktunya";
			kegiatan = "Tingkatkan Kualitas Diri";
		}
	} else {
		jkel = "Tidak diketahui";
		status = "Tidak diketahui";
		kegiatan = "Tidak diketahui";
	}
	
	cout<<"------------------------------"<<endl;
	cout<<"Anda adalah "<<jkel<<" berumur "<<umur<<" tahun"<<endl;
	cout<<status<<" Menikah "<<endl;
	cout<<"Silahkan "<<kegiatan;
	
	
	
	
	
	
	
	
	
	
}
