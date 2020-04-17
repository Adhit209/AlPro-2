#include <iostream>
#include <string>

using namespace std;

int main()
{
	string teks = "Buku";
	
	string *ptrB;
	string **ptrA;
	
	ptrB = &teks;
	ptrA = &ptrB;
	
	cout << "*ptrB = " << *ptrB <<endl;
	cout << "**ptrA = " << **ptrA <<endl;
	
	**ptrA = "Pulpen";
	cout << "Isi teks diubah dari ptrA" <<endl;
	cout<<"Isi teks sekarang = " <<teks
		<<endl;
	
	return 0;
}
