#include<iostream>
#include<sstream>
using namespace std;

int main(){
	// INT (bisa juga tipe data angka yg lain) KE STRING
	int angka;
	string kata;
	
	cout<<"masukkan angka : "; cin>>angka;
	
	stringstream temp;
	
	temp<<angka;
	temp>>kata;
	
	cout<<"ini int : "<<angka + angka<<endl;
	cout<<"ini string : "<<kata + kata<<endl;
	
	/* STRING KE INT
	int angka;
	string kata = "8";
		
	stringstream temp;
	
	temp<<kata;
	temp>>angka;
		
	cout<<"ini int : "<<angka + angka<<endl;
	cout<<"ini string : "<<kata + kata<<endl;
	*/
}
