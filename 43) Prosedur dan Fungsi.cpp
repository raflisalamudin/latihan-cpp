#include <iostream>
using namespace std;

//prosedur -> tidak memiliki nilai kembalian
void siswa(){	
	string nama = "Alex";
	string jenis_kelamin = "Laki-laki";
	cout<<nama<<" adalah seorang "<<jenis_kelamin<<endl;
}

//fungsi -> memiliki nilai kembalian
string siswi(){
	string nama = "Alexa";
	string jenis_kelamin = "Perempuan";
	return(nama+" adalah seorang "+jenis_kelamin);
}

int main(){
	siswa(); //penulisan prosedur
	cout<<siswi()<<endl; //penulisan fungsi
}



