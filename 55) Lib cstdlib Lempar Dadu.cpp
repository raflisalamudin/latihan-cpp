#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int pil, player, enemy;
	string ulang;
	
	do{
		system("cls");
		cout<<"1. lempar dadu\n2. keluar\npilihan : "; cin>>pil;
		if(pil == 1){
			player = (rand() % 6) + 1;
			enemy = (rand() % 6) + 1;
			cout<<"player : "<<player<<endl;
			cout<<"lawan : "<<enemy<<endl;
			cout<<"ulang <y/n> : "; cin>>ulang;
		} else if(pil == 2){
			ulang = "n";
		} else {
			cout<<"Pilihan Salah"<<endl;
		}
	} while(ulang == "y");
	cout<<"Program Selesai"<<endl;
}
