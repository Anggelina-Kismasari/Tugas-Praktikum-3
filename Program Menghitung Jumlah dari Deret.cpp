//Nama : Anggelina Kismasari
//Nim : 20051397034
//Prodi : D4 Manajemen informatika

/* Program Menghitung Jumlah dari Deret */

#include <iostream>
#include <conio.h>

using namespace std;

int main(void) 
{
	int a=0, b, c, i, n; 
	int jumlah = 0;
	
	cout<<"-------------------------------"<<endl;
	cout<<"Program Menghitung Jumlah Deret"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"Bilangan Awal     : "; cin>>a;
	cout<<"Selisih Bilangan  : "; cin>>b;
	cout<<"Jumlah Deret ke-n : "; cin>>n;
	cout<<"-------------------------------"<<endl;
	cout<<"Deret ke-"<<n<<":";
	cout<<a<<",";
	
	jumlah = jumlah + a;
	for(i=0; i<n-1; i++){
		c = a + b;
		a = c;
		cout <<c<<",";
		jumlah = jumlah + c;
	}
	
	cout <<"Jumlah Deret Ke-"<<n<<" : "<<endl;
	cout <<jumlah<<endl;
	
	getch();
	return 0;
}
