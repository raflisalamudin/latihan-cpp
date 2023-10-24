#include <iostream>
using namespace std;

int main(){
	
	int x, y;
	bool kondisi;
	string hasil;
	
	x = 10;
	y = 10;
	
	//operasi ==
	kondisi = x == y;
	hasil = kondisi == 1 ? "sama dengan":"tidak sama dengan";
	cout<<"Variabel x "<<hasil<<" variabel y \n"<<endl;
	
	//operasi !=
	kondisi = x != y;
	hasil = kondisi == 1 ? "tidak sama dengan":"sama dengan";
	cout<<"Variabel x "<<hasil<<" variabel y \n"<<endl;
	
	//operasi >
	kondisi = x > y;
	hasil = kondisi == 1 ? "lebih dari":"tidak lebih dari";
	cout<<"Variabel x "<<hasil<<" variabel y \n"<<endl;
	
	//operasi <
	kondisi = x < y;
	hasil = kondisi == 1 ? "kurang dari":"tidak kurang dari";
	cout<<"Variabel x "<<hasil<<" variabel y \n"<<endl;
	
	//operasi >=
	kondisi = x >= y;
	hasil = kondisi == 1 ? "lebih dari atau sama dengan":"tidak lebih dari atau sama dengan";
	cout<<"Variabel x "<<hasil<<" variabel y \n"<<endl;
	
	//operasi <=
	kondisi = x <= y;
	hasil = kondisi == 1 ? "kurang dari atau sama dengan":"tidak kurang dari atau sama dengan";
	cout<<"Variabel x "<<hasil<<" variabel y \n"<<endl;
	
	
		
}
