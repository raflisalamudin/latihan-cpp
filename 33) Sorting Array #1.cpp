#include <iostream>
using namespace std;

int main(){
	
	int nilai[] = {7, 3, 5, 10, 4, 1, 6, 2, 8, 9};
	int lenght = sizeof(nilai)/sizeof(*nilai);
	int temporary;
	
	for(int a = 1; a < lenght; a++){
		for(int b = 0; b < lenght-a; b++){
			if(nilai[b] > nilai[b+1]){
				temporary = nilai[b];
				nilai[b] = nilai[b+1];
				nilai[b+1] = temporary;
			}
		}
		for(int c = 0; c < lenght; c++){
			cout<<nilai[c]<<" | ";
		}
		cout<<endl;
	}
	cout<<"Hasil Sorting : "<<endl;
	for(int x = 0; x < lenght; x++){
		cout<<" "<<nilai[x]<<endl;
	}	
	
	
	
	
	
}
