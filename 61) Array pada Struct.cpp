#include<iostream>
using namespace std;

struct mhs{
	string npm;
	string nama;
};

int main(){
	mhs mahasiswa[5];
	
//	mahasiswa[0].npm = "2019804001";
//	mahasiswa[0].nama = "Raplyyy";
//	
//	mahasiswa[1].npm = "2019804002";
//	mahasiswa[1].nama = "Lemonaru";
//	
//	cout<<"Data Mahasiswa"<<endl;
//	cout<<"NPM  : "<<mahasiswa[0].npm<<endl;
//	cout<<"Nama : "<<mahasiswa[0].nama<<endl;
//	cout<<endl;
//	cout<<"NPM  : "<<mahasiswa[1].npm<<endl;
//	cout<<"Nama : "<<mahasiswa[1].nama<<endl;

	cout<<"Data Mahasiswa"<<endl;
	cout<<"Masukkan NPM  : "; cin>>mahasiswa[0].npm;
	cout<<"Masukkan Nama : "; cin>>mahasiswa[0].nama;
	cout<<"Masukkan NPM  : "; cin>>mahasiswa[1].npm;
	cout<<"Masukkan Nama : "; cin>>mahasiswa[1].nama;
	cout<<"Masukkan NPM  : "; cin>>mahasiswa[2].npm;
	cout<<"Masukkan Nama : "; cin>>mahasiswa[2].nama;
	cout<<"Masukkan NPM  : "; cin>>mahasiswa[3].npm;
	cout<<"Masukkan Nama : "; cin>>mahasiswa[3].nama;
	cout<<"Masukkan NPM  : "; cin>>mahasiswa[4].npm;
	cout<<"Masukkan Nama : "; cin>>mahasiswa[4].nama;
	
	cout<<"======================="<<endl;
	cout<<"Output"<<endl;
	cout<<"NPM  : "<<mahasiswa[0].npm<<endl;
	cout<<"Nama : "<<mahasiswa[0].nama<<endl;
	cout<<endl;
	cout<<"NPM  : "<<mahasiswa[1].npm<<endl;
	cout<<"Nama : "<<mahasiswa[1].nama<<endl;
	cout<<endl;
	cout<<"NPM  : "<<mahasiswa[2].npm<<endl;
	cout<<"Nama : "<<mahasiswa[2].nama<<endl;
	cout<<endl;
	cout<<"NPM  : "<<mahasiswa[3].npm<<endl;
	cout<<"Nama : "<<mahasiswa[3].nama<<endl;
	cout<<endl;
	cout<<"NPM  : "<<mahasiswa[4].npm<<endl;
	cout<<"Nama : "<<mahasiswa[4].nama<<endl;
	cout<<endl;
}
