#include <iostream>
using namespace std;
inline int cube(int s)
{
    return s*s*s;
}
int main()
{
    float n;
    cout << "Enter the number: ";
    cin>> n;
    cout << "The cube of "<< n <<" is: " << cube(n) << "\n";
    return 0;
} 