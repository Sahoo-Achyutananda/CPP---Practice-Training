#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int> v = {2,4,6,8,10};
    v.push_front(20); // -list : 20,2,4,6,8,10
    v.push_front(30); // -list : 30,20,2,4,6,8,10

    // using for each loop
    cout << "Printing using normal for loop :" << endl;
    for(int x : v)
        cout << x << " ";
    cout << endl;

    // using iterator
    cout << "Printing using Iterator :" << endl;
    forward_list<int>::iterator itr;
    for(itr = v.begin();itr!=v.end();itr++)
        cout << *itr ;
    cout << endl;

    v.pop_front(); // -- removes the front most element.

    forward_list<int>::iterator it;
    it = v.before_begin(); // points to the address before the first element of the forward_list
    it = v.emplace_after(it,20); // - now 'it' points to the location of 20; 

    for(auto& x:v){
        cout << x << " " ;
    }


}