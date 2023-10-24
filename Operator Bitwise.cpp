#include<iostream>
#include<bitset>
using namespace std;

void set(int b){
	cout<<bitset<8>(b)<<endl;
}

int main(){
	int a = 10;
	int b = 5;
	
//	not - kebalikan
	cout<<"bitwise not (~)"<<endl;
	cout<<"des a \t: "<<a<<endl;
	cout<<"a \t: "; set(a);
	cout<<"~a \t: "; set(~a);
	cout<<endl;
	
//	and - keduanya sama maka benar
	cout<<"bitwise and (&)"<<endl;
	cout<<"des a \t: "<<a<<endl;
	cout<<"des b \t: "<<b<<endl;
	cout<<"a \t: "; set(a);
	cout<<"b \t: "; set(b);
	cout<<"a & b \t: "; set(a&b);
	cout<<endl;
	
//	or salah satu benar maka benar
	cout<<"bitwise or (|)"<<endl;
	cout<<"des a \t: "<<a<<endl;
	cout<<"des b \t: "<<b<<endl;
	cout<<"a \t: "; set(a);
	cout<<"b \t: "; set(b);
	cout<<"a | b \t: "; set(a|b);
	cout<<endl;
	
//	xor - jika sama maka salah
	cout<<"bitwise xor (^)"<<endl;
	cout<<"des a \t: "<<a<<endl;
	cout<<"des b \t: "<<b<<endl;
	cout<<"a \t: "; set(a);
	cout<<"b \t: "; set(b);
	cout<<"a ^ b \t: "; set(a^b);
	cout<<endl;
	
//	shift left - geser nilai bit ke kiri
	cout<<"bitwise shift left (var << x)"<<endl;
	cout<<"des a \t: "<<a<<endl;
	cout<<"a \t: "; set(a);
	cout<<"a << 1 \t: "; set(a << 1);
	cout<<endl;
	
//	shift right - geser nilai bit ke kanan
	cout<<"bitwise shift right (var >> x)"<<endl;
	cout<<"des a \t: "<<a<<endl;
	cout<<"a \t: "; set(a);
	cout<<"a >> 1 \t: "; set(a >> 1);
	cout<<endl;
	
	
	
}
