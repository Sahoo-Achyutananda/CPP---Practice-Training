#include<iostream>
using namespace std;

int g_test = 0;

int& getNumberReference()
{
     return g_test;
}

int getNumberValue()
{
     return g_test;
}

int main()
{
    int& n = getNumberReference();
    //cout << n << endl;
    int m = getNumberValue();
    //cout << m << endl;
    n = 10;
    cout << g_test << endl; // prints 10
    g_test = 0;
    m = 10;
    cout << g_test << endl; // prints 0
    return 0;
}