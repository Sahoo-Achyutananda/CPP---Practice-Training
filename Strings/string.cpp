#include<iostream>
using namespace std;

int main(){

    // Creating and Printing Strings
    char s[] = "Hello";
    std::cout << s << std::endl; // prints "Hello"

    char s1[] = "Hello\0";
    cout << s1 << endl;          // prints "Hello"

    char c3[] = "Hello\0Hello";
    cout << c3 << endl;          // prints "Hello"

    char *ch = "Hello"; // Immutable string
    cout << ch << endl;          // prints "Hello"

    // String Indexing

    cout << s[0] <<  endl; // H
    cout << s1[0] << endl; // H
    cout << c3[0] << endl; // H
    cout << ch[0] << endl; // H

    // String Manipulation

    s[0] = 'A' ;
    cout << s << endl; // Aello

    c3[5] = '&' ;
    cout << c3 << endl ; // Hello&Hello

    ch[0] = 'A';
    cout << ch << endl; // wont execute because 'ch' is a pointer to a string. The string is created in read - only area.
}