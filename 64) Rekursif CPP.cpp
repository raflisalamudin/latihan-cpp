#include<iostream>
using namespace std;

void rekursif(int n){ //memanggil dirinya sendiri dalam dirinya
	if(n > 0){
		cout<<"Ini adalah rekursif"<<endl;
		n--;
	}
	rekursif(n);
}

int main(){
	rekursif(5);
}
