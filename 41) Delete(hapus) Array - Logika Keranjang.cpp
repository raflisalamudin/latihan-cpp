#include <iostream>
using namespace std;

int main(){
	
	int max = 5;
	int top = -1; //supaya memulai dari index ke-0
	string keranjang[max];
	string temporary;
	int pilihan, no_index, hapus;
	
	do{
		cout<<"Pilihan \n1. Tambah\n2. Ubah\n3. Hapus\n4. Selesai"<<endl;
		cout<<"Pilihan : ";
		cin>>pilihan;
		
		system("cls");
		
		switch(pilihan){
			case 1:
				if(top == max - 1){
					cout<<"Keranjang Penuh"<<endl;
				} else {
					top++;
					cout<<"Masukkan isi : ";
					cin>>keranjang[top];
					cout<<"Data "<<keranjang[top]<<" berhasil ditambahkan"<<endl;
				}
				break;
			case 2:
				cout<<"Nomor data yang diubah : ";
				cin>>no_index;
				cout<<"Index awal : "<<keranjang[no_index-1]<<endl;
				cout<<"Index baru : ";
				cin>>temporary;
				keranjang[no_index-1] = temporary;
				break;
			case 3:
				cout<<"Nomor data yang dihapus : ";
				cin>>hapus;
				cout<<"Index dihapus : "<<keranjang[no_index-1]<<endl;
				cin>>temporary;
				keranjang[no_index-1] = temporary;
				break;
			case 4:
				pilihan = 4;
				break;
			default :
				cout<<"Pilihan Salah"<<endl;
			break;
		}
		
		cout<<"======================================="<<endl;
		cout<<"Isi keranjang saat ini : "<<endl;
		for(int a = 0; a <= top; a++){
			cout<<a+1<<". "<<keranjang[a]<<endl;
		}
		cout<<"======================================="<<endl;
		
	} while(pilihan != 4);
	cout<<"Program Selesai"<<endl;
	
	
}
