#include<iostream>
#include<string>
using namespace std;

int main(){
	string nama_depan;
	string nama_belakang;
	
	cout<<"Nama depan : "; cin>>nama_depan;
	cout<<"Nama belakang : "; cin>>nama_belakang;
	
	cout<<"Output :"<<endl;
	
	//1 string nama_lengkap;
	
	cout<<"nama depan : "<<nama_depan<<endl;
	cout<<"nama belakang : "<<nama_belakang<<endl;
	
	/*1 nama_lengkap = nama_depan + " " + nama_belakang;
	cout<<"nama lengkap : "<<nama_lengkap; */
	
	nama_depan += " "+nama_belakang;
	
	cout<<"nama lengkap : "<<nama_depan<<endl;
	
	/*
	cout<<"Nama : "<<nama<<endl;
	cout<<"nama karakter[0] : "<<nama[0]<<endl;
	cout<<"nama karakter[3] : "<<nama[3]<<endl;
	
	nama[0] = 'S';
	cout<<"nama : "<<nama<<endl;
	*/
}
