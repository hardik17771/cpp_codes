

#include <iostream>
 
using namespace std;

void cyclicSwap(int* a, int* b, int* c)
{

    int temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
 
int main()
{
    int a,b,c;
	cout<<"Enter a: ";
	cin>>a;
	
	cout<<"Enter b: ";
	cin>>b;
	
	cout<<"Enter c: ";
	cin>>c;
	
 	
    cout<<"\nValue before swapping:\n";
    cout<<"a = "<<a<<"\nb = " << b << "\nc="<<c;
 
    cyclicSwap(&a, &b, &c);
 
    cout<< "Value after swapping:\n";
    cout<<"a = " <<a<<"\nb = " <<b<<"\nc="<<c;
 
    return 0;
}

