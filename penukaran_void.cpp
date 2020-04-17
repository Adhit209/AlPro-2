#include <iostream>
using namespace std; 

void tukarkan(int *x, int *y);

int main()
{
	int varA = 20;
	int varB = 73;
	
	cout<<"Semula: varA = "<<varA
	    <<", varB = "<<varB<<endl;
	    
	tukarkan(&varA, &varB);
	
	cout<<"Akhir : varA = "<<varA
	    <<", varB = "<<varB<<endl;
		
	return 0;	    
}
void tukarkan (int *x, int*y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
