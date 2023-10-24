#include <iostream>
using namespace std;

int main(){
	
	int harga, jumlah_barang, total, pilihan;
	string item;
	
	cout<<"Item Tersedia : "<<endl;
	cout<<"1. Roti \t: Rp. 5000"<<endl;
	cout<<"2. Susu \t: Rp. 3000"<<endl;
	cout<<"3. Sampo \t: Rp. 1000"<<endl;
	cout<<"4. Selesai"<<endl;
	
	do{
		cout<<"Isikan Kode : ";
		cin>>pilihan;
		switch(pilihan){
			case 1 :
				item = "Roti";
				harga = 5000;
				cout<<"Jumlah Item : ";
				cin>>jumlah_barang;
				total += harga * jumlah_barang;
				cout<<jumlah_barang<<" "<<item<<" = Rp. "<<harga*jumlah_barang<<endl;
				break;
			case 2 :
				item = "Susu";
				harga = 4000;
				cout<<"Jumlah Item : ";
				cin>>jumlah_barang;
				total += harga * jumlah_barang;
				cout<<jumlah_barang<<" "<<item<<" = Rp. "<<harga*jumlah_barang<<endl;
				break;
			case 3 :
				item = "Sampo";
				harga = 1000;
				cout<<"Jumlah Item : ";
				cin>>jumlah_barang;
				total += harga * jumlah_barang;
				cout<<jumlah_barang<<" "<<item<<" = Rp. "<<harga*jumlah_barang<<endl;
				break;
			case 4 :
				cout<<"Total Belanja : Rp. "<<total<<endl;
				pilihan = 4;
				break;
			default :
				cout<<"Pilihan Salah"<<endl;
				break;
		}	
	} while(pilihan != 4);	
	cout<<"Terimakasih";
	
}
