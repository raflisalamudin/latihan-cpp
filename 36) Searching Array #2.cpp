#include <iostream>
using namespace std;

int main(){
	
	string buah[] = {"Mangga", "Jeruk", "Anggur", "Apel"};
	int length = sizeof(buah)/sizeof(*buah);
	string dataCari;
	int hasilCari;
	
	cout<<"Data Tersedia : "<<endl;
	for(int a = 0; a < length; a++){
		cout<<"Index Ke-"<<a<<" : "<<buah[a]<<endl;
	}
	cout<<"Data yang dicari : ";
	cin>>dataCari;
	
	for(int b = 0; b < length; b++){
		if(dataCari == buah[b]){
			hasilCari++;
		}
	}
	if(hasilCari == 0){
		cout<<"Data tidak ditemukan"<<endl;
	} else {
		cout<<"Data "<<dataCari<<" ditemukan di : "<<endl;
		for (int c = 0; c < length; c++){
			if(dataCari == buah[c]){
				cout<<"Index ke-"<<c<<endl;
			}
		}
	}
	
	
}
