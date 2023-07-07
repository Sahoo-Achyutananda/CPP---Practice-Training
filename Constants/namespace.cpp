#include<iostream>
using namespace std;

namespace First{
    void func(){
        cout << "First" << endl;
    }
    int x;
}

namespace second{
    void func(){
        cout << "Second" << endl;
    }
    int x;
}

int main(){
    First::x = 0;
    cout << First::x << endl;

    First::func();
    second::func();
}