#include<iostream>
using namespace std;

//1. const variables
// int main(){
//     const int x = 10;
//     cout << x << endl;
//     cout << ++x << endl; // will not execute

// }

//2. const pointers
// int main(){
//     int x = 10;
//     int y = 20;
//     int const *ptr = &x; // Can also be written as : 'const int * ptr = &x;' 
//     cout << *ptr << endl;
//     //cout << ++*ptr << endl; // will not execute
//     ptr = &y;
//     cout << *ptr << endl;
// }

//3. locked pointers

// int main(){
//     int x = 10, y = 20;
//     int * const ptr = &x;
//     //ptr = &y; // will throw error
//     cout << ++*ptr << endl;

// }

//4. locked data + locked pointers

// int main(){
//     int x = 10, y = 12;
//     const int * const ptr = &x;
//     cout << *ptr << endl;
//     ptr = &y; // INVALID
//     cout << ++(*ptr) << endl; // INVALID

// }