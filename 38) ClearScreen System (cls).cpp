#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	string nama, npm, lanjut;
	do{
		system("cls");
		
		cout<<"Masukkan Nama \t: ";
		cin>>nama;
		cout<<"Masukkan NPM \t: ";
		cin>>npm;
		
		system("cls");
		
		
		cout<<"Nama saya "<<nama<<"\nNPM "<<npm<<endl;
		cout<<"Ulangi Program <y/n> : ";
		cin>>lanjut;
		
	} while(lanjut == "y");
	cout<<"Program Selesai"<<endl;
	
	
	
	
	
	
	
	
	
	
	
}
