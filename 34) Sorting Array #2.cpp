#include <iostream>
using namespace std;

int main(){
	
	int lenght;
	cout<<"Masukkan Jumlah Index : ";
	cin>>lenght;
	int nilai[lenght];
	int temporary;
	
	for(int b = 0; b < lenght; b++){
		cout<<"Masukkan Index Ke-"<<b<<" : ";
		cin>>nilai[b];
	}
	
	for(int a = 1; a < lenght; a++){		//urutkan
		for(int b = 0; b < lenght-a; b++){
			if(nilai[b] > nilai[b+1]){
				temporary = nilai[b];
				nilai[b] = nilai[b+1];
				nilai[b+1] = temporary;
			}
		}
	}
	cout<<"Hasil Sorting : "<<endl;		//tampilkan
	for(int x = 0; x < lenght; x++){
		cout<<" "<<nilai[x]<<endl;
	}	
	
	
	
	
	
}
