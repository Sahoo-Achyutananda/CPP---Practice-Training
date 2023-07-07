#include<iostream>
using namespace std;

class Complex{
    private:
        int img;
        int real;
    public:
        Complex(int x = 0, int y = 0){
            img = x;
            real = y;
        }
        void setImg(int x){
            img = x;
        }
        void setReal(int x){
            real = x;
        }
        int getImg(){
            return img;
        }
        int getReal(){
            return real;
        }

        void Display();
        Complex add(Complex c);
        //Complex operator+(Complex c2);

        // binary +
        friend Complex operator +(Complex c1, Complex c2);
        // Prefix --
        friend Complex operator--(Complex &c1);
        // Postfix -- 
        friend Complex operator--(Complex &c1, int);
        // unary - 
        friend Complex operator-(Complex &c1);
        // insertion operator (ostream)
        friend ostream & operator<<(ostream &out, Complex c);

};

void Complex::Display(){
    cout << this->img << " " << this->real  << endl; 
}
// Complex Complex::operator+(Complex c2){
//     Complex t;
//     t.img = img + c2.img;
//     t.real = real + c2.real;
//     return t;
// }
Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.img = c1.img + c2.img;
    temp.real = c1.real + c2.real;

    return temp;
}

// Prefix -- overloading
Complex operator--(Complex &c1)
{
    --c1.img;
    --c1.real;
}

// Postfix -- overloading
Complex operator--(Complex &c1, int){
    c1.img--;
    c1.real--;
}

// unary - overloading
Complex operator -(Complex &c1){
    c1.img = -c1.img;
    c1.real = -c1.real;
}

// ostream overloading
ostream & operator<<(ostream &out, Complex c){
    out<<c.real<<"i +"<<c.img<<endl;
}

Complex Complex::add(Complex c){
    Complex temp;
    temp.img = img + c.img;
    temp.real = real + c.real;

    return temp;
}

int main(){
    Complex c1(3,2);
    Complex c2(4,5);

    c1.Display();
    c2.Display();

    Complex c3 = c1.add(c2);
    c3.Display();

    Complex c4 = c1 + c2;

    c4.Display();
    cout << endl;
    --c1;
    c1.Display();
    c1--;
    c1.Display();
    -c1;
    c1.Display();

    cout << endl;
    cout << "c1 : " << c1 << endl;
    cout << "c2 : " << c2 << endl;
    cout << "c3 : " << c3 << endl;

}