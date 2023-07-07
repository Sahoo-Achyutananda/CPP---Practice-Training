#include<iostream>
#include<cstring>
using namespace std;

int main1(); // strstr - finding substring
int main2(); // strchr - finding whether a character is presnt or not
int main3(); // strrchr - finding a character from the right
int main4(); // strcmp - compares two strings & strcmpi - compares two strings but not case sensitive

int main(){
    main4();
    
}

int main1(){
    // char * strstr(char * (main_string), char * (sub_string))
        /*Finds a valid substring from the main string
        -> returns the substring followed by the remaining characters
        -> if not found returns \0 . Sometimes the program may crash*/
    char a[20] = "Programming";
    char b[10] = "mm";

    if(strstr(a,b) == '\0')
        cout << "Substring not found ." << endl;
    else
        cout << strstr(a,b) << endl; // mming

}

int main2(){
    // strchr(char * (main_string), char (character))
        /*Finds whether a character is present in a string.
        -> returns the first occurance of the character followed by the remaining characters.
        -> Returns \0 when not found. */
    
    char a[100] = "Hello Hindunberg";
    char c = 'x' ;

    if(strchr(a,c) == '\0')
        cout << "Character not found. " << endl;
    else    
        cout << strchr(a,c) << endl;
}

int main3(){
    // strrchr(char * (main_string), char (character))
        /*Finds whether a character is present in a string but scans from the right.
        -> returns the first occurance of the character followed by the remaining characters.
        -> Returns \0 when not found. */
    
    char a[100] = "Hello Hindunberg";
    char c = 'H' ;

    if(strrchr(a,c) == '\0')
        cout << "Character not found. " << endl;
    else    
        cout << strrchr(a,c) << endl;
}

int main4(){
    // int strcmp( char[] , char[] )
        /* Returns the difference of the first chracter that violates equality.
        -> returns 0 : if both strings are equal
        -> returns 1 : if lowerASCII values is compared with higherASCII.
        -> returns -1 : if higherASCII values is compared with lowerASCII.*/

    char s1[20] = "minor";
    char s2[20] = "elder";

    cout << strcmp(s1,s2) << endl ;

}
