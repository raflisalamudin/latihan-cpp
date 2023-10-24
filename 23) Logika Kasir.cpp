#include <iostream>
using namespace std;

int main(){
	
	int roti, susu, sampo, total_harga;
	int jumlah_roti, jumlah_susu, jumlah_sampo;
	
	roti = 2000;
	susu = 4000;
	sampo = 1000;
	
	cout<<"Item Tersedia\n======================="<<endl;
	cout<<"Roti \t = "<<roti<<" /pcs"<<endl;
	cout<<"Susu \t = "<<susu<<" /pcs"<<endl;
	cout<<"Sampo \t = "<<sampo<<" /pcs"<<endl;
	cout<<"======================="<<endl;
	
	cout<<"Masukkan jumlah roti\t : ";
	cin>>jumlah_roti;
	cout<<"Masukkan jumlah susu\t : ";
	cin>>jumlah_susu;
	cout<<"Masukkan jumlah sampo\t : ";
	cin>>jumlah_sampo;
	cout<<"======================="<<endl;
	cout<<"Harga Total Roti  : "<<roti*jumlah_roti<<endl;
	cout<<"Harga Total Susu  : "<<susu*jumlah_susu<<endl;
	cout<<"Harga Total Sampo : "<<sampo*jumlah_sampo<<endl;
	cout<<"======================="<<endl;
	
	total_harga = (roti*jumlah_roti) + (susu*jumlah_susu) + (sampo*jumlah_sampo);
	cout<<"Total Harga = "<<total_harga;
	
	
	
}
