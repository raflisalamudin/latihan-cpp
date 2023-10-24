#include <iostream>
using namespace std;

int main(){
	
	const float phi = 3.14; // const untuk mendelarasikan nilai tetap
	float L, r;
	
	// value r
	cout<<"Masukkan jari-jari lingkaran = ";
	cin>>r;
	
	// proses perhitungan luas
	L = phi * r * r;
	
	cout<<"Diketahui : "<<endl;
	cout<<"phi \t= "<<phi<<endl;
	cout<<"r \t= "<<r<<endl;
	cout<<"========================"<<endl;
	
	//penampilan hasil
	cout<<"Luas lingkaran dengan jari-jari "<<r<<" cm"<<" adalah ";
	cout<<L<<" cm2";
	
	
	
	
	
	
	
	
	
	
}
