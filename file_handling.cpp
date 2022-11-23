// Write a program that shows that two files named ‘Source 1’ and ‘Source 2’ contains sorted list of integers. Read the content of
// both the files and stores the merged list in sorted form in a new file named ‘Target’.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,10};
    ifstream fin1, fin2;
    ofstream fout;
    int n1, n2;


    fout.open("source1.txt");
    for(int i=0 ; i<5 ; i++){
        fout<<arr1[i]<<endl;
    }

    fout.close();


    fout.open("source2.txt");
    
    for(int i=0 ; i<5 ; i++){
        fout<<arr2[i]<<endl;
    }
    fout.close();



    fin1.open("source1.txt");
    fin2.open("source2.txt");
    fout.open("target.txt");

    fin1 >> n1;
    fin2 >> n2;

    while (!fin1.eof() && !fin2.eof())
    {
        if (n1 < n2)
        {
            fout << n1 << endl;
            fin1 >> n1;
        }
        else
        {
            fout << n2 << endl;
            fin2 >> n2;
        }
    }

    fin1.close();
    fin2.close();
    fout.close();

}

