#include<iostream>
using namespace std;

class me{
    private:
        int x;
        int y;
    public:
        void show(){
            cout << "my show !" <<endl;
        }
        
        friend class your;
};

class your{
    private:
        int a;
        int b;
        me m;
    public:
        void display(){
            cout << "i can modify your privates " << endl;
            m.x = 1;
            m.y = 2;

            cout << "m.x : " << m.x << endl;
            cout << "m.y : " << m.y << endl;
        }
};

int main(){
    your y;

    y.display();
}