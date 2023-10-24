#include <iostream>
using namespace std;

void siswa(string nama, string kelas){		//string
	cout<<nama<<" adalah siswa "<<kelas;	//return(nama+" adalah siswa kelas "+kelas);
}

int main(){
	string nama, kelas;
	cout<<"Nama : "; getline(cin, nama);
	cout<<"Kelas : "; getline(cin, kelas);
	
	siswa(nama, kelas); //cout<<siswa(nama, kelas);
}
