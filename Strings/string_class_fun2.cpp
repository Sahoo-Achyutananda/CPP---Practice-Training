#include<string>
#include<iostream>
using namespace std;

int main(){
    string str = "hello";
    string str2 = "hello";

    // .append : inserts characters at last.
    str.append(" world");
    cout << "After appending : " << str << endl;

    // .insert : inserts characters at a specific position.
    str.insert(3,"lllo");
    cout << "New String : " << str << endl;

    // .insert : inserts mentioned no. of characters at a specific position.
    str2.insert(3,"llloooo",2);
    cout << "New String : " << str2 << endl;

    // .replace(int (index) , int (offset) , char * (string to be inserted) ) : 
    str.replace(3,6,"kk");
    cout << "String after Replacing : " << str << endl;

    // .push_back : pushes a character at the end.
    str.push_back('S');
    cout << "After pushback : " << str << endl;

    // .pop_back : removes the last character
    str.pop_back();
    cout << "After Popback : " << str << endl;

    // .swap( string ) : swaps the content of two strings
    string a = "Anime";
    string b = " Bad Girl" ;

    cout << "Before Swapping : " << endl ;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    a.swap(b);

    cout << "After Swapping : " << endl ;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

}