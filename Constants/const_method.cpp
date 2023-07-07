#include<iostream>
using namespace std;

class Demo{
    private:
        int x;
    public:
        // Constant methods do not allow mutation of data members
        void display() const{
            x++; // INVALID
            cout << x << endl;
        }
};
