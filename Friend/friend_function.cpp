#include<iostream>
using namespace std;

class base{
    private:
        int x;
        int y;
    public:
        void fun(){
            cout << "fun of base " <<endl;
        }
        // NOTE: friend functions are just normal functions that can access the private entities of a class.
        friend void func2();
};

// in order to access private members, the friend function must have an object.
// NOTE: the friend functions are not members of a class.

void func2(){
    base b;
    b.x = 0; // fun2() can access x of class base
    b.y = 1; // fun2() can access y of class base

    cout << "func2 is a friend of fun. \n it can acess private members of fun :) " << endl;
    cout << b.x << endl;
    cout << b.y << endl;
}

int main(){
    func2();
}