#include<iostream>
using namespace std;

class Top{
    public : 
        Top(){
            cout << "A default Top is created !" << endl;
        }
        Top(int x, int y){
            cout << "A top is created of length : " << x << " and breadth : " << y << endl;
        }
};

class Table: public Top{
    public:
        Table(){
            cout << "A default table is created !" << endl;
        }
        Table(int h){
            cout << "A table is created of height  : " << h << endl;
        }
        Table(int x, int y, int h):Top(x,y){
            cout << "A table is created of height : " << h << endl;
        }
};

int main(){
    
    Table t;
    Table t2(10);
    Table t3(4,5,10);
}