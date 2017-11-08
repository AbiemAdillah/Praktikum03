#include<iostream>

using namespace std;

int main(){
	int tb,bb,hasil1,hasil2;
	cout<<"Menghitung Badan Ideal"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"Masukkan Tiggi Badan = ";cin>>tb;
	cout<<"Masukkan Berat Badan = ";cin>>bb;
	
	if(bb<(tb/2.5)){
		cout<<"Anda Termasuk UNDERWEIGHT";
	}
	else if((tb/2.5)<=bb<=(tb/2.3)){
		cout<<"Anda Termasuk NORMAL";
}
