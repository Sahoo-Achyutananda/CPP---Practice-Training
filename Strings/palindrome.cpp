#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    cin >> str;

    int pal = 1;

    for(int i = 0 , j = str.length() - 1; i <= j ; i++ ,j-- ){
        if(str[i] != str[j]){
            pal = 0;
            cout << "Not a Palindrome. " << endl;
            break;
        }
        else 
            continue;
    }

    if(pal)
        cout << "Is a Palindrome " << endl;
}