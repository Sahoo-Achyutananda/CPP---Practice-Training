#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello. How are you ?";
    char s[100];
    char s2[100];

    // .copy(char *, int) : copies string content to a character array
        /* Takes two parameters : 
        1. The destination
        2. Offset length to be copied
            - In this case the delimiter is not copied. Hence it has to be mentioned separately. */

    str.copy(s , str.length());
    cout << s << endl;

    str.copy(s2 , 3);
    s2[3] = '\0' ;
    cout << s2 << endl;

    // .find(string/char ) : finds the first occurance of a string or a character
        /* It returns the index position of the character.
        -> If not found , garbage value is returned. */
    cout << str.find("0") << endl;

    // .rfind(string/char) : finds the first occurance of a character/string from the right

    cout << str.rfind("H") << endl ;

    // .find_first_of(char , int) : finds the first occurance of a character
        /* Takes 2 parameters : 
        1. character(s) to be searched
        2. Starting position of search 

        NOTE : Multiple characters can also be mentioned in the first parameter . The search stops 
        when one of them is found.*/

    cout << str.find_first_of("oH") << endl; // 0 (because it finds H at str[0])
    cout << str.find_first_of("o") << endl;  // 4 (because str[4] = 'o')
    cout << str.find_first_of("o", 7) << endl;  // 8 (because search starts from str[7] and str[8] = 'o' )

    // .find_last_of(char) : finds the last occurance of a character

    cout << str.find_last_of('o') << endl; // 16 (coz the last o accurs at str[16])

    // .substr(int , int) : prints a substring
    /* Takes 2 argumants : 
        1. starting index
        2. offset form the index */
    
    string a = "Banana and Muskmelon" ;
    cout << a.substr(3,5) << endl; // op : ana a
    cout << a.substr(2) << endl; // op : nana and Muskmelon

    //  .compare : compares two strings and returns 0 if equal.
        /* Works similar to strcmp()*/

    string b = "Xow";
    string c = "xob";

    cout << b.compare(c) << endl ; // -1 , coz X - x is < 0

}