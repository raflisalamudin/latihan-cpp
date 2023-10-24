#include<iostream>
using namespace std;

void nilai(int *y){
	cout<<"alamat parameter : "<<y<<endl;
	cout<<"nilai parameter : "<<*y<<endl;
}

void kuadrat(int *z){
	int hasil;
	*z = *z * *z;
}

int main(){
	int x;
	cout<<"masukkan angka : "; cin>>x;
	nilai(&x);
	cout<<"angka : "<<x<<endl;
	
	kuadrat(&x);
	
	cout<<"kuadrat : "<<x<<endl;
	
}
