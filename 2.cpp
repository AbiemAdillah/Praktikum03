#include <iostream>
#include <conio.h>

using namespace std;
int main (){
	int x,y,z;
	char r;
	cout<<"Menghitung Luas Persegi Panjang dan Segitiga"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"P = Persegi Panjang"<<endl;
	cout<<"S = Segituga       "<<endl;
	cout<<"Ketikkan Huruf [P/S] = "; cin>>r;
	cout<<endl;
	
	if(r=='P'||r=='p'){
	cout<<"Menghitung Luas Persegi Panjang"<<endl;
	cout<<"\n";
	cout<<"-------------------------------"<<endl;
	cout<<"Masukkan Nilai Panjang\t    = ";cin>>x;
	cout<<"Masukkan Nilai Lebar\t    = ";cin>>y;
	z=x*y;
	cout<<"Luas Persegi Panjang\t    = "<<z<<"  cm";	
	}
	
	
	


}
	
