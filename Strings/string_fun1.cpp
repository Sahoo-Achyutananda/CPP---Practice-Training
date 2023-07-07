#include<iostream>
#include<string.h>
using namespace std;

int main(){ 
    // int strlen(char []):
        /*Returns the length of the string*/
    char s[10];
    cout << "Enter a String : " ;
    cin >> s ;
    cout << strlen(s) << endl; 

    char *s1 = "Hello World";
    cout << strlen(s1) << endl; // 11 (includes all spaces. )

    // char * strcat(char * (destination) , char * (source))
        /*Concats two strings*/
    
    char a[10] = "Hello" ;
    char b[10] = " Morning" ;

    cout << strcat(a,b) << endl; // Hello Morning

    // char * strncat(char * (destination) , char * (source) , int (length))
        /*Concats only certain characters from the begining beased on the length mentioned. */
    
    char a1[10] = "Hello" ;
    char b1[10] = "Morning" ;

    cout << strncat(a1,b1,5) << endl; // Hello Morn

    // char * strcpy(char * , char *)
        /* Copies string from source to destination . */
    char a3[10] = "Hello" ;
    char b3[10] = " Morning" ;

    strcpy(a3,b3);
    cout << "a : " << a3 << endl;
    cout << "b : " << b3 << endl;
    
    // char * strncpy(char * , char * , int)
        /* Copies string from source to destination . */

    char a4[10] = "Hello" ;
    char b4[10] = "Morning" ;
    
    strncpy(a4,b4,3);
    cout << "a : " << a4 << endl; // Morlo

}