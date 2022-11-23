#include<iostream>
#include<bits\stdc++.h>
using namespace std;
 int main(){
    vector<int> v;
    
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.pop_back();
    v.clear();         
    cout<<"size="<<v.size();
 }
