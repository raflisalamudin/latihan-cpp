#include <iostream>
using namespace std;

int main(){
	
	int jumlah_index, min, max, nilai;
	
	cout<<"Banyak Data = ";
	cin>>jumlah_index;
	
	for(int a = 1; a <= jumlah_index; a++){
		cout<<"Masukkan Data Ke-"<<a<<" = ";
		cin>>nilai;
		if(a == 1){
			min = nilai;
			max = nilai;
		} else {
			if(nilai > max){
				max = nilai;
			}
		}
		if(nilai < min){
			min = nilai;
		}
	}
	cout<<"Nilai Maksimal = "<<max<<endl;
	cout<<"Nilai Minimal = "<<min<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
