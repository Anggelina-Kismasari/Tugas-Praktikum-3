//Nama : Anggelina Kismasari
//Nim : 20051397034
//Prodi : D4 Manajemen informatika

/*Program Tabel Perkalian*/

#include <iostream>

using namespace std ;

int main ()
{
	int i, j ;
	cout<< "Tabel Perkalian 1 2 3 4 5 6 7 8 9 10 \n\n";	
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			
			cout <<" "<<i*j<<"\t";
		}
		cout <<endl;	
	}
}
