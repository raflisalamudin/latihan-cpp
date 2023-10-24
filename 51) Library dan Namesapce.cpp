#include <iostream>
#include <cmath>
#include <cstdlib>

// references website cplusplus.com
/*
int main(){
	double a = pow(9, 2); // pangkat
	double b = sqrt(81); // akar kuadrat
	std::cout<<b<<std::endl;
}
*/

int main(){
	for(int a = 0; a < 101; a ++){
		std::cout<<rand() % 100<<std::endl;
	}
	
}

/*
namespace bil{
	void cetak(int a){
		std::cout<<a<<std::endl;
	}
}

namespace huruf{
	void cetak(std::string a){
		std::cout<<a<<std::endl;
	}
}
using namespace bil;
using namespace huruf;
int main(){
	cetak(4);
	cetak("Halo");
}
*/
