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
	else if (r=='S'||r=='s'){
	cout<<"Menghitung Luas Segitiga"<<endl;
	cout<<"\n";
	cout<<"-------------------------------"<<endl;
	cout<<"Masukkan Nilai Alas Segitiga\t   = ";cin>>x;
	cout<<"Masukkan Nilai Tinggi Segitiga\t   = ";cin>>y;
	z=0.5*x*y;
	cout<<"Luas segitiga\t                   = "<<z<<"  cm";	
	}
	else{
		cout<<"Pilihan Tidak ada";
	}
	return 0;
	
	


}
	
