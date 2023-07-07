#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter a String : " << endl;
    cin >> str;

    cout << "Length : " << str.length() << endl;
    cout << "Capacity : " << str.capacity() << endl;
    cout << "Max-Capacity : " << str.max_size() << endl;

    /*NOTE : 
    -> Length : Total characters of the string excluding '\0' .
    -> Capacity : Maximum characters a string object created can accomodate.
                - Capacity is always greater than the length.
                - Can be redefined if necessary using str.resize(int )
    -> Max-Size (compiler dependent) : Maximum length of the string supported by the compiler.*/


    // str.resize() : used for changing the capacity
    str.resize(30);
    cout << "New Capacity : " << str.size() << endl;

    // str.clear() : clears the string
    str.clear();
    cout << "Length after clearing : " << str.length() << endl;

    // str.empty() : checks if string is empty
    if(str.empty())
        cout << "String is empty";
    else
        cout << "String is Non-empty";


}