#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream file("text1.txt");
	string line;
	if(file.is_open()){
		while(getline(file, line)){
			cout<<line<<endl;
		}
		file.close();
	} else {
		cout<<"file tidak ada atau gagal dibuka!!!";
	}
	
}
