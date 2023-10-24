#include <iostream>
using namespace std;

struct nilai{
	double mtk;
	double bin;
	double big;
	double tkj;
	string ket;
};

int main(){
	nilai rafs;
	nilai rafli;
	
	rafs.mtk = 90;
	rafs.bin = 80;
	rafs.big = 75;
	rafs.tkj = 95;
	rafs.ket = "Tuntas";
	
	rafli.mtk = 87;
	rafli.bin = 79;
	rafli.big = 80;
	rafli.tkj = 85;
	rafli.ket = "Tuntas";
	
	cout<<"Nilai Rafs"<<endl;
	cout<<"nilai mtk rafs \t: "<<rafs.mtk<<endl;
	cout<<"nilai bin rafs \t: "<<rafs.bin<<endl;
	cout<<"nilai big rafs \t: "<<rafs.big<<endl;
	cout<<"nilai tkj rafs \t: "<<rafs.tkj<<endl;
	cout<<"Keterangan \t: "<<rafs.ket<<endl;
	cout<<"============================"<<endl;
	cout<<"Nilai Rafli"<<endl;
	cout<<"nilai mtk rafli \t: "<<rafli.mtk<<endl;
	cout<<"nilai bin rafli \t: "<<rafli.bin<<endl;
	cout<<"nilai big rafli \t: "<<rafli.big<<endl;
	cout<<"nilai tkj rafli \t: "<<rafli.tkj<<endl;
	cout<<"Keterangan \t\t: "<<rafli.ket<<endl;
}
