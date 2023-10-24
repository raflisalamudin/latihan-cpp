#include <iostream>
using namespace std;

int main(){
	
	bool output;
	output = 2 == 4;
	
	// not(!) = kebalikan
	output = not(2 == 4);
	output = !(2 == 2);
	
	//and(&&) = bernilai true jika keduanya benar
	output = (2 < 4) and (2 > 1);
	output = (2 < 4) && (2 < 1);
	
	//or(||) = bernilai false jika keduanya satunya salah
	output = (2 < 4) or (2 > 1);
	output = (2 < 4) || (2 > 1);
	
	cout<<output;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
