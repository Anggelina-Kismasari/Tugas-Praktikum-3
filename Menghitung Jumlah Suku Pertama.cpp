//Nama : Anggelina Kismasari
//Nim : 20051397034
//Prodi : D4 Manajemen informatika B 

/*Program Menghitung Jumlah Suku Pertama*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(void) 
{
	int hasil = 0;
	int a, jns , kali;
	
	cout<<"----------------------------------------------"<<endl;
	cout<<"Program Menghitung Jumlah Suku Pertama Barisan"<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"Jumlah Nilai Suku : "; cin>>jns;
	
	for (a=1; a<=jns; a++){
		hasil = hasil + a * a * a;
		kali = a * a * a;
		cout<<kali<<endl;
}
cout<<"Jumlah : ";
cout<< hasil;
cin>>jns;

    getch ();
	return 0;
}
