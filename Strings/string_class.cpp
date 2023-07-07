#include<string>
#include<iostream>
using namespace std;

int main(){
    string str; // declaring an object of String
    cout << "Enter a String : " << endl;
    cin >> str;
    /* A character array is created internally.
    -> Size of the array is greater than the length of the string fed to the object. 
    -> String objects have a built in mechanism for managing string length.*/

    // different ways to get inputs
    getline(cin,str);

    // accessing string indices : 

    cout << str.at(3) << endl ;
    cout << str[3]  << endl;

    // NOTE : string objects dont face the \n issue when used with cin. But it still 
    // captures the string word by word.

    string s;
    string s2;

    cout << "Enter a string  : ";
    cin >> s;
    cout << "Entered String : " << s << endl;

    cout << "Enter another string  : ";
    cin >> s2;
    cout << "Entered String : " << s2 << endl;

    // 1. Entering - Hello (enter) world (enter)
    /*Enter a string  : hello
    Entered String : hello
    Enter another string  : world
    Entered String : world*/

    // 2. Entering - Hello world (enter)
    /*Enter a string  : hello world
    Entered String : hello
    Enter another string  : Entered String : world */

    



}