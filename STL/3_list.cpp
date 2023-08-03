#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> v = {2,4,6,8,10};
    v.push_back(20);
    v.push_back(30);

    // using for each loop
    cout << "Printing using normal for loop :" << endl;
    for(int x : v)
        cout << x << " ";
    cout << endl;

    // using iterator
    cout << "Printing using Iterator :" << endl;
    list<int>::iterator itr;
    for(itr = v.begin();itr!=v.end();itr++)
        cout << *itr << endl;

    v.pop_back();

}