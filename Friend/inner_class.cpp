#include<iostream>
using namespace std;

class Outer{
    private:
        int x;
        int y;
    public : 
        
        Outer(int x=0, int y=0, int a=0){
            this->x = x;
            this->y = y;
            i.n = a;
        }

        class Inner{
            private:
                int l;
                int m;
            public:
                int n;
                Inner(int x=0, int y=0){
                    cout << "Inner invoked " << endl;
                }
                void display(){
                    cout << "display of inner " << endl;
                }
        };

        Inner i;
        
        void display(){
            cout << "display of outer" << endl;
            cout << x << " " << y << " " << i.n << endl;
        }
};

int main(){

}