#include <iostream>
using namespace std;

int main(){
	
	/*
	int nomor = 1;
	string nama = "Rafli";
	
	cout<<nomor<<endl;
	cout<<nama<<endl;
	
	cout<<nama<< " adalah murid nomor " <<nomor<<endl;
	
	string aktivitas = "berenang";
	string tempat =  "kolam renang";
	
	cout<< "saya sedang " <<aktivitas<< " di " <<tempat;
	*/
	

	string aktivitas;
	string tempat;
	string siapa;
	int umur;
	
	cout<< "Apa yg sedang anda lakukan \t: ";
	getline(cin, aktivitas);
	
	cout<< "Dimana anda " <<aktivitas<< " \t: ";
	getline(cin, tempat);
	
	cout<< "Dengan siapa anda melakukan \t: ";
	getline(cin, siapa);
	
	cout<< "Berapa usia anda : ";
	cin>>umur;
	cout<<endl;

	cout<< "Saya sedang " <<aktivitas<< " di " <<tempat<< " bersama "<<siapa<<endl;
	cout<<"Usia saya "<<umur<<" tahun";
	
}
