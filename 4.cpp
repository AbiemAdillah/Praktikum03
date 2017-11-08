#include <iostream>
using namespace std;
int main (){

	int x;
	cout<<"POSITIF, NEGATIF, NOL"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Masukkan Angka  =   ";
	cin>>x;
	cout<<"---------------------"<<endl;
		if(x>0){
			cout<<"Angka yang anda Masukkan POSITIF";
		}
		else if(x<0){
			cout<<"Angka yang anda Masukkan NEGATIF";	
		}
		
		else{
			cout<<"Angka yang anda Masukkan NOL";
		}

}
