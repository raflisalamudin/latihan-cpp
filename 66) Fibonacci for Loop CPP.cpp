#include<iostream>
using namespace std;

int main(){
	int f1 = 1;
	int f2 = 2;
	
	int temp = 0;
	
	cout<<f1<<", "<<f2<<", ";
	
	for(int a = 3; a <= 8; a++){
		temp = f1 + f2;
		cout<<temp;
		if(a != 8){
			cout<<", ";
		}
		f1 = f2;
		f2 = temp;	
	}
}
