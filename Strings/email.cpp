#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[20];
    cin.getline(str, 20);

    char * username = strtok(str,"@");
    cout << "Username : " << username << endl;
}