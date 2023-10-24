#include<iostream>
using namespace std;

struct mhs{
	string npm;
	string nama;
	int nilai;
};

char grades(int n){
	if(n > 85){
		return 'A';
	} else if(n > 75 && n <= 85){
		return 'B';
	} else if(n > 65 && n <= 75){
		return 'C';
	} else if(n > 45 && n <= 65){
		return 'D';
	} else {
		return 'E';
	}
}

int main(){
	int jml;
	cout<<"Jumlah Mahasiswa : "; cin>>jml;
	mhs mahasiswa[jml];
	cout<<"Data Mahasiswa"<<endl;
	
	for(int a = 0; a < jml; a++){
		cout<<"Data Ke-"<<a+1<<endl;
		cout<<"NPM \t: "; cin>>mahasiswa[a].npm;
		cout<<"Nama \t: "; cin>>mahasiswa[a].nama;
		cout<<"Nilai \t: "; cin>>mahasiswa[a].nilai;
		cout<<endl;
	}
	cout<<"=============================="<<endl;
	cout<<"Output"<<endl;
	for(int b = 0; b < jml; b++){
		cout<<"Data Ke-"<<b+1<<endl;
		cout<<"NPM \t: "<<mahasiswa[b].npm<<endl;
		cout<<"Nama \t: "<<mahasiswa[b].nama<<endl;
		cout<<"Nilai \t: "<<mahasiswa[b].nilai<<endl;
		cout<<"Grade \t: "<<grades(mahasiswa[b].nilai)<<endl;
		cout<<endl;
	}
}












