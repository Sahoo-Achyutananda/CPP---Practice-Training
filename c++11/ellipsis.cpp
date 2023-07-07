#include<iostream>
#include<cstdarg>
using namespace std;

int max(int n, ...){
    va_list list;
    va_start(list, n);
    int max = va_arg(list,int);
    int num;

    for(int i = 1;i<n;i++){
        num = va_arg(list,int);
        if(num > max){
            max = num;
        }
    }
    return max;

}

int main(){
    cout << max(10,100,20,45,39,80,1,230,4,34,367) << endl;
}