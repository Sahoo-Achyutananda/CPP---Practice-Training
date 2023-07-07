#include<iostream>
#include<string>
using namespace std;

int main(){

    /* Iterators are of 2 typre : 
        1. Forward iterators : begin() & end()
        2. Backward Iterators : rbegin() & rend() 
        NOTE : Iterators are pointers to characters of a string. */

    string::iterator it;

    cout << "Forward Iteration : " << endl;
    string str = "Today" ;
    for(it = str.begin() ; it != str.end() ; it++){
        cout << *it ;
    }

    cout << endl;
    
    string::reverse_iterator rit;

    cout << "Reverse Iteration : " << endl;
    for(rit = str.rbegin() ; rit != str.rend() ; rit++){
        cout << *rit ;
    }



}