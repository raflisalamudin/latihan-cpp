#include <iostream>
using namespace std;

struct guru{
	string nama;
	int umur;
};

struct mapel{
	string nama_mapel;
	double kkm;
	string status;
	
	//panggil struct guru
	guru guru1, guru2;
};

int main(){
	guru guru1, guru2;
	mapel mapel1, mapel2;
	
	guru1.nama = "alex";
	guru1.umur = 30;
	
	guru2.nama = "joni";
	guru2.umur = 35;
	
	mapel1.guru1 = guru1;
	mapel1.guru2 = guru2;
	
	mapel1.nama_mapel = "Matematika";
	mapel1.kkm = 75;
	mapel1.status = "Wajib";
	
	mapel2.nama_mapel = "Bahasa Arab";
	mapel2.kkm = 70;
	mapel2.status = "Non Wajib";
	
	mapel2.guru2 = guru2;
	
	cout<<"Nama Mapel\t = "<<mapel1.nama_mapel<<endl;
	cout<<"KKM Mapel\t = "<<mapel1.kkm<<endl;
	cout<<"Status Mapel\t = "<<mapel1.status<<endl;
	cout<<"Nama Guru 1\t = "<<mapel1.guru1.nama<<endl;
	cout<<"Usia Guru 1\t = "<<mapel1.guru1.umur<<endl;
	cout<<"Nama Guru 2\t = "<<mapel1.guru2.nama<<endl;
	cout<<"Usia Guru 2\t = "<<mapel1.guru2.umur<<endl;
	
	cout<<"=========================================="<<endl;
	cout<<"Nama Mapel\t = "<<mapel2.nama_mapel<<endl;
	cout<<"KKM Mapel\t = "<<mapel2.kkm<<endl;
	cout<<"Status Mapel\t = "<<mapel2.status<<endl;
	cout<<"Nama Guru\t = "<<mapel2.guru2.nama<<endl;
	cout<<"Usia Guru\t = "<<mapel2.guru2.umur<<endl;
}
