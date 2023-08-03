#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // a map can be imagined as an array of pairs.
    map<int,string> student;

    student.insert(pair<int,string>(1,"john"));
    student.insert(pair<int,string>(2,"arun"));
    student.insert(pair<int,string>(3,"ajith"));

    map<int,string>::iterator itr;
    for(itr = student.begin();itr != student.end();itr++){
        cout << itr->first << " " << itr->second << endl;
    }
    // here first: points to the first component of a pair, second : points to the second component of the pair.


}