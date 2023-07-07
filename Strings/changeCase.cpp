// 2. Uppercase to LowerCase
#include<iostream>
#include<string>
using namespace std;

int main(){
    string::iterator it;
    string str;
    cin >> str;

    for(it = str.begin() ; it!=str.end() ; it++){
        if(*it >= 65 && *it <= 90) {
            *it = *it + 32;
        }
    }

    cout << "Output : " << str << endl;
}