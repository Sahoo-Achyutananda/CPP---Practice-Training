#include<iostream>
using namespace std;

class Base{
    private:
        int x;
        int y;
    public:
        static int z ;
        Base(int x, int y){
            this->x = x;
            this->y = y;
            z++; // "this" pointer is not allowed with static variables
        }
        void display(){
            cout << x << " " << y << endl;
        }

        // static members can be access by static methods
        static int display_z(){
            return z;
        }
};

int Base::z = 0;

int main(){
    Base b(10,20);
    b.display();
    cout << b.display_z()<<endl;
    Base b1(20,30);
    b1.display();
    cout << b1.display_z()<<endl;
    Base b2(40,50);
    b2.display();
    cout << b2.display_z()<<endl;
    
}
