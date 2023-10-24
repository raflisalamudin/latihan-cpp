#include<iostream>
#include<fstream> //untuk memproses file
using namespace std;

int main(){
	ofstream file;
	string a;
	
	cout<<"masukkan kalimat : ";
	getline(cin, a);
	
	file.open("text.txt");
	file<<"isi input :\n"<<a<<" ";
	
	system("START /MIN NOTEPAD text.txt"); //P untuk fungsi langsung print	
}
