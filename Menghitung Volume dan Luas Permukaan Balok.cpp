#include <iostream>
#include <string>
using namespace std;
int main(){
    int p, l, t, V, LP;
    string dimensi;

    cout<<"Menghitung Volume dan Luas Permukaan Balok"<<endl;
    cout<<"--------------------------------------------"<<endl;
   
    cout<<"Masukan Panjang : "; 
    cin>>p;
    cout<<"Masukan Lebar   : ";
    cin>>l;
    cout<<"Masukan Tinggi  : ";
    cin>>t;
    cout<<endl;
    
    V = p*l*t;
    LP = (2*p*l) + (2*p*t) + (2*l*t); 
    
    cout<<"Volume Balok\t\t= "<<V<<" cm3"<<endl;
    cout<<"Luas Permukaan Balok\t= "<<LP<<" cm2";

}
