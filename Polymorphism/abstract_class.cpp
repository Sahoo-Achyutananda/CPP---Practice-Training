#include<iostream>
using namespace std;

// if every method in a class is purely virtual its acts as an "interface".
        // An interface is like a standard that the derived class should follow.
// if a class has atleast one purely virtual method it is considered as an "abstract class" .
// Objects of abstract classes cannot be created.
// Eg : Object of shape cannot be created. But a reference/pointer can be.
class Shape{
    public:
        virtual int area() = 0;
        virtual int perimeter() = 0; 
};

class Rectangle : public Shape{
    private:
        int l;
        int b;
    public:
        Rectangle(int x=0,int y=0){
            l = x;
            b = y;
        }
        int area(){
            cout << "area of rectangle " << l*b << endl;
        }
        int perimeter(){
            cout << "perimeter of rectangle " << 2*(l+b)<< endl;
        }
};

class Circle : public Shape{
    private:
        int r;
    public:
        Circle(int x = 0){
            r = x;
        }
        int area(){
            cout << "area of circle " << 3.14*r*r << endl;
        }
        int perimeter(){
            cout << "perimeter of circle " << 2*3.14*r << endl;
        }
};

int main(){
    Rectangle r(3,2);
    Circle c(5);

    Shape *s = &r;
    s->area();
    s->perimeter();

    s = &c;
    s->area();
    s->perimeter();
    
}