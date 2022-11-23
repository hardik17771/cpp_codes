#include <bits/stdc++.h>
using namespace std;
struct Student {
    int G1;
    char G2;
    float G3;
};
 

int main()
{
    
     Student Geek;
    cin>>Geek.G1;
    cin>>Geek.G2;
    cin>>Geek.G3;
    
    cout << "The value is : "
         << Geek.G1 << endl;
    cout << "The value is : "
         << Geek.G2 << endl;
    cout << "The value is : "
         << Geek.G3 << endl;
 
    return 0;
}


#include <iostream>
using namespace std;
 

union GFG {
    int Geek1;
    char Geek2;
    float Geek3;
};
 
int main()
{
    
    GFG G1;
 
    G1.Geek1 = 34;
 
    
    cout << "The first value at "
         << "the allocated memory : " << G1.Geek1 << endl;
 
    G1.Geek2 = 34;
 
    cout << "The next value stored "
         << "after removing the "
         << "previous value : " << G1.Geek2 << endl;
 
    G1.Geek3 = 34.34;
 
    cout << "The Final value value "
         << "at the same allocated "
         << "memory space : " << G1.Geek3 << endl;
    return 0;
}