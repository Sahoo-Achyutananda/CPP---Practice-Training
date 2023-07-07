#include<iostream>
using namespace std;

// The class "car" contains virtual methods(not pure). It is not abstract- hence its objects can be created.

class Car{
    public:
        virtual void start(){
            cout << "car has started" << endl;
        }
        
        virtual void stop(){
            cout << "car has stopped" << endl;
        }
};

class Innova : public Car{
    public:
        void start(){
            cout << "innova has started" << endl;
        }
        void stop(){
            cout << "innova has stopped" << endl;
        }
};

class Fortuner : public Car{
    public :
        void start(){
            cout << "Fortuner has started" << endl;
        }
        void stop(){
            cout << "Fortuner has stopped" << endl;
        }
};

int main(){
    Car *c;
    Innova i;
    Fortuner f;

    // c points to i
    c = &i;
    c->start();
    c->stop();

    // c points to f
    c = &f;
    c->start();
    c->stop();
}