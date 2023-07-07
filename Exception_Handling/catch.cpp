#include<iostream>
using namespace std;

class MyException : public exception{
    public:
        char* what(){
            return "Hello" ;
        }
};

int main(){
    int x;

    try{
        x = 1;
        if(x == 1)
            throw 1;
        x = 2;
        if(x == 2)
            throw 2.0f;
        x = 3;
        if(x == 3)
            throw string("Hello Idiot");
    }
    catch(int x){
        cout << "Integer" << endl;
    }
    catch(float f){
        cout << "Float" << endl;
    }
    catch(string x){
        cout << x << endl;
    }
    catch(...){
        cout << "Catch All " << endl;
    }
    
}