#include <iostream>
using namespace std;

bool lulus(int nilai){
	if(nilai >= 75){
		return true;
	} else {
		return false;
	}
}

void data_siswa(string nama, int nilai){
	lulus(nilai);
	cout<<"nama   : "<<nama<<endl;
	cout<<"nilai  : "<<nilai<<endl;
	cout<<"status : ";
	if(lulus(nilai)){
		cout<<"LULUS"<<endl;
	} else{
		cout<<"TIDAK LULUS"<<endl;
	}
}

int main(){
	string nama;
	int nilai;
	cout<<"masukkan nama  : ";
	getline(cin, nama);
	cout<<"masukkan nilai : ";
	cin>>nilai;
	data_siswa(nama, nilai);
}
