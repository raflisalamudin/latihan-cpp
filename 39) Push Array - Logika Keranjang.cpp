#include <iostream>
using namespace std;

int main(){
	
	int max = 5;
	int top = -1; //supaya memulai dari index ke-0
	string keranjang[max];
	string lanjut;
	
	do{
		system("cls");
		
		if(top == max - 1){
			cout<<"Keranjang Penuh"<<endl;
		} else {
			top++;
			cout<<"Masukkan isi : ";
			cin>>keranjang[top];
			cout<<"Data "<<keranjang[top]<<" berhasil ditambahkan"<<endl;
		}
		cout<<"======================================="<<endl;
		cout<<"Isi keranjang saat ini : "<<endl;
		for(int a = 0; a <= top; a++){
			cout<<a+1<<". "<<keranjang[a]<<endl;
		}
		cout<<"Lanjutkan program <y/n> : ";
		cin>>lanjut;
	} while(lanjut == "y");
	cout<<"Program Selesai"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
