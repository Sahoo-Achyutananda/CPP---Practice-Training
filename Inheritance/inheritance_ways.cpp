#include<iostream>
using namespace std;

class Parent{
    private:
        int a;
        int b;
    protected : 
        int c;
    public:
        int d;
        Parent(int a=0, int b=0, int c=0){
            this->a = a;
            this->b = b;
            this->c = c;
        }
        void display(){
            cout << a << " " << b << " " << c << endl;
        }
};

class Child2 : private Parent{
    private:
        int m;
    protected:
        int n;
    public:
        Child2(int m, int n){
            this->m = m;
            this->n = n;
            this->a = 0;
            this->b = 0;
            this->c = 0;
            this->d = 0;
        }

};

class Child : protected Parent{
    private:
        int x;
    protected:
        int y;
    public:
        int z; 
        Child(int x=0, int y=0){
            this->x = x;
            this->y = y;
            this->a = 0; // not accessible - PRIVATE (Parent)
            this->b = 1; // not accessible - PRIVATE (Parent)
            this->c = 2; // accessible - PROTECTED (Parent)
            this->d = 3; // accessible - PUBLIC (Parent)
        }
        void display2(){
            cout << x << " " << y << endl;
        }
};
int main(){
    Child c;
    c.x = 1; // not accessible - PROTECTED(Child)
    c.y = 2; // not accessible - PROTECTED(Child)
    c.z = 3; // accessible - PUBLIC(Child)
}