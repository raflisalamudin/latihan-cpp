#include <iostream>
using namespace std;

int main()
{
    float r, V, LP, pi=3.14;
    cout<<"Menghitung Volume dan Luas Permukaan Bola"<<endl;
    cout<<"--------------------------------------------"<<endl;
    
    cout<<"Masukkan Jari-jari Bola : ";
    cin>>r;
    cout<<endl;
    
    V = 4/3*pi*r*r*r;
    LP = 4*pi*r*r;
    
    cout<<"Volume Bola\t\t= "<<V<<" cm"<<endl;
    cout<<"Luas Permukaan Bola\t= "<<LP<<" cm"<<endl;
}
