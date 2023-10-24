#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	//rand() % 10(bebas) -> tampilkan angka random kurang dari 10 0-9
	string ulang;
	do{
		system("cls");
		cout<<rand() % 1000<<endl;
		cout<<"ulang <y/n> : "; cin>>ulang;
	} while(ulang == "y");
	system("cls");
	cout<<"Program Selesai";
	
	
}
