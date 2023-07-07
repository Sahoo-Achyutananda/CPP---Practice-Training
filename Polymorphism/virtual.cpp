#include<iostream>
using namespace std;

class Base{
    private:
        int x;
    public : 
        void fun(){
            cout << "fun of base" << endl;
        }

        virtual void fun2(){
            cout << "fun2 of base" << endl;
        }
};

class Derived : public Base{
    public:
        void fun(){
            cout << "fun of derived " << endl;
        }
        void fun2(){
            cout << "fun2 of derived " << endl;
        }
};

int main(){
    Derived d;
    Base *p = &d; 

    p->fun(); // will print "fun of base"

    p->fun2(); // will print "fun of derived"
}