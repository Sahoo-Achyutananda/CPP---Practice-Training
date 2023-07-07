#include<iostream>
#include<cstring>
using namespace std;

void main1();
void main1x5();
void main2();
void main2x5();
void main3();

int main(){
    main1x5();
}

void main1(){

    // works well with single words :-
            /* cin considers the string word-by-word. cin captures the first word and leaves the remaining to the rest of the body.
            -> If multiple cin's are present, the later will capture the next words.
            -> Treats "\n" (enter) as a new string*/

    char s[10];
    cout << "Enter your name : " ;
    cin >> s ;
    cout << "Welcome " << s << endl;

    char s1[10];
    cout << "Enter your name again : " ;
    cin >> s1 ;
    cout << "Welcome " << " Again !" << s1  << endl;

}

void main1x5(){
    // Pointers to strings won't work well while taking inputs from the user.

    char *str;
    cin >> str ; // the program will stop abruptly.

}

void main2(){

    // cin.get( char[] , int ) : 
        /* Takes two parameters 
                1. Variable Name
                2. Capture Size
        -> Captures characters based on the capture size mentioned . Leaves the Remaining to the rest of the program body.
        -> Works well when a string contains multiple words.
        -> Treats "\n" (enter) as a new string */

    char s[100];
    cout << "Enter your name : " ;
    cin.get(s,100);
    cout << "Welcome " << s << endl;

    char s1[100];
    cout << "Enter your name again : " ;
    cin.get(s1,100); // \n will be treated as a new string if cin.getline() or cin.ignore() is not used.
    cout << "Welcome " << " Again !" << s1  << endl;

}

void main2x5(){

    // cin.ignore() : 
        /*Useful when many cin or cin.get()'s are used in a program.
        -> This ignores the unread portion of a cin , helping the later cin's to take fresh inputs. 
        -> Must be specified between two cin's */

    char s[100];
    cout << "Enter your name : " ;
    cin.get(s,100);
    cout << "Welcome " << s << endl;

    cin.ignore();

    char s1[100];
    cout << "Enter your name again : " ;
    cin.get(s1,100); // \n will be treated as a new string if cin.getline() or cin.ignore() is not used.
    cout << "Welcome " << " Again !" << s1  << endl;

}

void main3(){

    // cin.getline( char[] , int ) : 
        /* Takes two parameters 
                1. Variable Name
                2. Capture Size
        -> Captures characters based on the capture size mentioned . Leaves the Remaining to the rest of the program body.
        -> Works similar to cin.get()
        -> Works well when a string contains multiple words.
        -> Won't treat "\n" (enter) as a new string */

    char s[100];
    cout << "Enter your name : " ;
    cin.getline(s,100);
    cout << "Welcome " << s << endl;

    char s1[100];
    cout << "Enter your name again : " ;
    cin.getline(s1,100);
    cout << "Welcome " << " Again " << s1  << endl;

}