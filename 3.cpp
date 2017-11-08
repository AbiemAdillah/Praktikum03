#include <iostream>
using namespace std;

int main(){
	double jk,lb,jl,jt;
	long gt,gb;
	
	cout<<"Program Hitung Gaji"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Lama Jam Kerja Perminggu = ";cin>>jk;
	cout<<"---------------------------"<<endl;
	
		if (jk>40){
		cout<<"Gaji Pokok \t = Rp 2000.000"<<endl;
		cout<<"Jam Kerja Standart \t = 40 Jam"<<endl;
		lb=jk-40
		cout<<"Lembur\t\t\t = "<<lb<<" Jam"<<endl;
			jl=lb*1.5;
			jt=40+jl;
		cout<<"Total Jam Kerja\t = "<<jt<<"Jam"<<endl;
		gt=2000000+(jl*100000);
		cout<<"Potongan \t = 15%"<<endl;
			gb=gt-(0.15*gt);
			cout<<"Gaji Bersih\t\t = "<<"Rp "<<gb;
	}
	else if (jk<=40){
		cout<<"Gaji Pokok\t = Rp 2.000.000"<<endl;
		cout<<"Jam Kerja Standart \t = 40 Jam"<<endl;
			lb=0;
		cout<<"Lembur\t\t = "<<lb<<" Jam"<<endl;
			jl=lb*1.5;
			jt=40+jl;
		cout<<"Total Jam Kerja\t = "<<jt<<" Jam"<<endl;
			gt=2000000+(jl*100000);
		cout<<"Total Gaji\t = "<<"Rp "<<gt<<endl;
			gb=gt-(0.15*gt);
		cout<<"Gaji Bersih\t = "<<"Rp "<<gb;	
	}
return 0;
}
	
