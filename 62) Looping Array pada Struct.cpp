#include<iostream>
using namespace std;

struct mhs{
	string npm;
	string nama;
};

int main(){
	int jml_index;
	cout<<"jumlah data : "; cin>>jml_index;
	
	mhs isi_mahasiswa[jml_index];
	
	cout<<"Data Masuk"<<endl;
	for(int a = 0; a < jml_index; a++){
		cout<<"Data ke-"<<a+1<<endl;
		cout<<"NPM Mahasiswa\t : "; cin>>isi_mahasiswa[a].npm;
		cout<<"Nama Mahasiswa\t : "; cin>>isi_mahasiswa[a].nama;
		cout<<endl;
	}
	cout<<"==============================="<<endl;
	cout<<"Output"<<endl;
	for(int a = 0; a < jml_index; a++){
		cout<<"Data ke-"<<a+1<<endl;
		cout<<"NPM Mahasiswa\t : "<<isi_mahasiswa[a].npm<<endl;
		cout<<"Nama Mahasiswa\t : "<<isi_mahasiswa[a].nama<<endl;
		cout<<endl;
	}
}
