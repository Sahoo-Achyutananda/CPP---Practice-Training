#include<iostream>
using namespace std;

class Rectangle{
    int l;
    int b;
    public:
        Rectangle(int l = 0, int b = 0){
            this->l = l;
            this->b = b;
        }
        void setLength(int l);
        void setBreadth(int b);
        int area();
        int perimeter();
};

class Cuboid{
    int h;
    Rectangle r;
    public:
        Cuboid(int l, int b,int h){
            this->h = h;
            this->r.setLength(l);
            this->r.setBreadth(b);
        }
        int volume();
};

void Rectangle::setLength(int l){
    if(l < 0)
        this->l = 0;
    this->l = l;
}

void Rectangle::setBreadth(int b){
    if(b < 0)
        this->b = 0;
    this->b = b;
}

int Rectangle::area(){
    return l*b;
}

int Rectangle::perimeter(){
    return 2*(l+b);
}

int Cuboid::volume(){
    return r.area()*h;
}
int main(){
    Cuboid c(2,3,4);

    cout << c.volume() << endl;
}