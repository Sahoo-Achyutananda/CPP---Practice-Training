#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout << "1. Default of Base" << endl;
        }
        Base(int x){
            cout << "2. Param of Base " << x << endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout << "1. Default of Derived " << endl;
        }
        Derived(int x){
            cout << "2. Param of Derived " << x <<  endl;
        }
        Derived(int x, int y):Base(y){
            cout << "3. Param of Derived called param of base " << x << y << endl;
        }
};

int main(){
    Derived d();
    Derived d2(5);
    Derived d3(10,20);
}