#include <iostream>
using namespace std;

int main(){
	
	int jumlah_array;
	int angka[] = {80, 50, 90, 55, 70, 85};
	jumlah_array = sizeof(angka)/sizeof(*angka);
	
	for(int a = 0; a < jumlah_array; a++){
		cout<<angka[a]<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
}
