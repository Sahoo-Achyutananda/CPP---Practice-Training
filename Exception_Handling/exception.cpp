#include<iostream>
using namespace std;

class MyException : public exception{
    private :
        int x;
        float y;
    public:
        MyException() : y(25), x(30){
            cout << y << " " << x << endl;
        }
        char* what(){
            return "This is a horrible mistake. you deserve to die !! \n" ;
        }
};

int division(int x, int y) throw(MyException){
    if(y == 0)
        throw MyException();
    return x/y;
}

int main(){
    try{
        int c = division(40,0);
        cout << c << endl;
    }
    catch(MyException e){
        cout << "Divide by zero !!! " << endl; 
        cout << e.what() << endl;
    }
}

// #include <iostream>
// using namespace std;

// class MyCustomException : public exception {
//     private:
//     char * message;

//     public:
//     MyCustomException(char * msg) : message(msg) {}
//     char * what () {
//         return "Hello";
//     }
// };

// int main() {
//     try {
//         throw MyCustomException("Custom C++ Exception");
//     } catch (MyCustomException mce) {
//         cout << "Caught MyCustomException" << endl;
//         cout << mce.what();
//     }
// }