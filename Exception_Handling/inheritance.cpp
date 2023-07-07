#include<iostream>
using namespace std;

class MyException : public exception{
    private:
        string x;
    public:
        MyException() : x("Parent Exception"){
            cout << x << endl;
        };
};

class MyException2 : public MyException{
    private:
        string x;
    public:
        MyException2() : x("Child Exception"){
            cout << x << endl;
        };
};

int main(){
    int x;
    try{
        cin >> x;

        if(x == 1)
            throw MyException();
        else
            throw MyException2();
    }
    catch(MyException2 &x){
        cout << "Child Exception Caught " << endl;
    }
    catch(MyException &x){
        cout << "Parent Exception Caught " << endl;
    }
}