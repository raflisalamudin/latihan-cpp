#include<iostream>
using namespace std;

struct guru{
	string nama;
	int umur;
};

struct mapel{
	string nama_mapel;
	int kkm;
	
	guru guru_mapel;
};

int main(){
	mapel mapel1;
	cout<<"Nama Mapel\t : ";
	cin>>mapel1.nama_mapel;
	cout<<"KKM\t\t : ";
	cin>>mapel1.kkm;
	cout<<"Nama Guru\t : ";
	cin>>mapel1.guru_mapel.nama;
	cout<<"Umur Guru\t : ";
	cin>>mapel1.guru_mapel.umur;
	
	cout<<"========================"<<endl;
	cout<<"Output"<<endl;
	cout<<"Nama Mapel\t : "<<mapel1.nama_mapel<<endl;
	cout<<"KKM\t\t : "<<mapel1.kkm<<endl;
	cout<<"Nama Guru\t : "<<mapel1.guru_mapel.nama<<endl;
	cout<<"Umur Guru\t : "<<mapel1.guru_mapel.umur<<endl;
}
