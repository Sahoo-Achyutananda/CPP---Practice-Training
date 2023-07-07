#include<iostream>
#include<string>
using namespace std;

int main(){
    string::iterator it;
    string str;
    int n = 0;

    getline(cin, str);

    it = str.begin();
    while(it != str.end()){
        n++;
        it++;
    }
    
    cout << "Length : " << n << endl ;

}