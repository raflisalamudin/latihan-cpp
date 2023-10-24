#include<iostream>
#include<string>
using namespace std;

int main(){
	//kalimat awal
	string kalimat = "saya sedang makan";
	string kal = "saya sedang tidur";
	cout<<"kalimat awal "<<endl;
	cout<<"v-kalimat : "<<kalimat<<endl;
	cout<<"v-kal : "<<kal<<endl;
	cout<<endl;
	
	//swap - pertukaran value dari 3 variabel
	kalimat.swap(kal);
	cout<<"swap :"<<endl;
	cout<<"v-kalimat : "<<kalimat<<endl;
	cout<<"v-kal : "<<kal<<endl;
	cout<<endl;
	
	//mencari kata didalam kalimat (find)
	cout<<"find : "<<endl;
	int kata_cari = kalimat.find("sedang");
	cout<<"kata sedang ada di : "<<kata_cari<<endl;
	cout<<endl;
	
	//replace karakter didalam kalimat
	kalimat.replace(5, 6, "lagi");
	cout<<"replace : "<<endl;
	cout<<"setelah replace : "<<kalimat<<endl;
	cout<<endl;
	
	//mencari panjang karakter (lenght())  strlen-diphp
	cout<<"jumlah karakter : "<<endl;
	int jml_kar = kalimat.length();
	cout<<"hasil jml karakter : "<<jml_kar<<endl;
	cout<<endl;
	
	//mencari jumlah kata
	int jml_kata = 1;
	for(int a = 0; a < jml_kar; a++){
		if(kalimat[a] == ' '){
			jml_kata++;
		}
	}
	cout<<"kalimat sekarang : "<<kalimat<<endl;
	cout<<"jumlah kata : "<<jml_kata<<endl;
	
	//replace input keyboard
	string kata_ubah;
	cout<<"kata yang akan diubah : ";
	getline(cin, kata_ubah);
	int jml_kar_ubah = kata_ubah.length();
	int kata_ubah_cari = kalimat.find(kata_ubah);
	if(kata_ubah_cari > -1){
		string pengubah;
		cout<<"ubah dengan : ";
		getline(cin, pengubah);
		kalimat.replace(kata_ubah_cari, jml_kar_ubah, pengubah);
	} else {
		cout<<"kata tidak ada"<<endl;
	}
	cout<<"kalimat akhir : "<<kalimat<<endl;
}
