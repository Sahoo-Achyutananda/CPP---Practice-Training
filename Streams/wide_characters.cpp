#include<iostream>
using namespace std;

int main(){
    wchar_t ch = 'a';
    char ch2 = 'b' ;

    wcout << ch << endl;
    //cout << int(ch) << endl;
    cout << sizeof(ch) << endl;
    //cout << int(ch2) << endl;
    cout << sizeof(ch2) << endl;

}