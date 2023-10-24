#include <iostream>
using namespace std;

int main(){
	
	const int baris = 2;
	const int kolom = 3;
	int nomor[baris][kolom] = {1, 4, 6, 2, 3, 5}; // jumlah index -> 2 x 3 = 6

	for(int a = 0; a < baris; a ++){
		for (int b = 0; b < kolom; b++){
			cout<<nomor[a][b]<<" ";
		}
		cout<<endl;
	}
	
	/*
		[0][0] = 1
		[0][1] = 4
		[0][2] = 6
		
		[1][0] = 2
		[1][1] = 3
		[1][2] = 5
	*/
	
	
	
	
	
}
