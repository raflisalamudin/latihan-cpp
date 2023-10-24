#include<iostream>
using namespace std;

int fibbonacci(int n){
	if(n == 0 || n == 1){
		return n;
	} else {
		return(fibbonacci(n-1) + fibbonacci(n-2));
	}
}

int main(){
	int n, i,j = 0;
	cout<<"Batas deret : "; cin>>n;
	cout<<"Deret Fibonacci :\n";
	for(i = 1; i <= n; i++){
		cout<<"f_"<<i<<" : "<<fibbonacci(j)<<endl;
		j++;
	}
	return 0;
}
