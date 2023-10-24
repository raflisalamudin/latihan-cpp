#include<iostream>
using namespace std;

int main(){
	int f1, f2, jml;
	
	cout<<"Jumlah angka = "; cin>>jml;
	cout<<"f1 = "; cin>>f1;
	cout<<"f2 = "; cin>>f2;
	
	int temp = 0;
	
	cout<<f1<<", "<<f2<<", ";
	
	for(int a = 3; a <= jml; a++){
		temp = f1 + f2;
		cout<<temp;
		if(a != jml){
			cout<<", ";
		}
		f1 = f2;
		f2 = temp;	
	}
}
