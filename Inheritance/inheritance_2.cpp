#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length = 0, int breadth = 0){
            this->length = length;
            this->breadth = breadth;
        }
        void setLength(int l){
            length = l;
        }
        void setBreadth(int b){
            breadth = b;
        }
        int getLength(){
            return this->length;
        }
        int getBreadth(){
            return this->breadth;
        }
};
class Cuboid : public Rectangle{
    private:
        int height;
        Rectangle r;
    public:
        Cuboid(int l = 0,int b = 0, int h = 0 ){
            r.setLength(l);
            r.setBreadth(b);
            this->height = h;
        }
        void setHeight(int h){
            this->height = h;
        }
        int volume(){
            return r.getLength()*r.getBreadth()*this->height;
        }
};
int main(){
    Rectangle r = Rectangle(3,4);
    Cuboid c = Cuboid(3,4,5);
    
    cout << c.volume() << flush ;
}