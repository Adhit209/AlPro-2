#include <iostream>
using namespace std;

int ab(int *a)
{
	int c;
	c = *a + 25; 
}
 
 int main()
 {
 	int a = 5;
 	cout<<"Nilai a : "<<a<<endl;
 	cout<<"Nilai c : ";
 	cout<<ab (&a);
 	
 	return 0;
 }
