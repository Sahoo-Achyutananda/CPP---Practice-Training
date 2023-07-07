#include<iostream>
#include<cstring>
using namespace std;

int main1(); // strtol - convert string to long integer based on the base
int main2(); // strtof - convert string to float
int main3(); // strtok - separating characters based on tokens

int main(){
    main3();
}

int main1(){
    // long int strtol(char * (source) , char** (destination to store the remaining string), int (base) )
    char *str1;
    char str[] = "0011 is the binary number. 0001 " ;
    cout << strtol(str,&str1,10) << endl; // decimal
    cout << strtol(str,&str1,2) << endl; // binary
    cout << strtol(str,&str1,8) << endl; // octal
    cout << strtol(str,&str1,16) << endl; // hexadecimal

    cout << "Remaining part of the string : " << str1 << endl;

}

int main2(){
    // float strtof(char * , char **)
    char ch[] = "179.09" ;
    cout << strtof(ch,NULL) << endl;
}

int main3(){
    // char * strtok(char * (source) , char *(tokens))
        /*Separates the string on the basis of tokens.
        -> a loop has to be used to display all the sub strings.
        -> else, only the first sub string will be displayed.
        -> If NULL is specified on the source - it asssumes the previous value of source. 
        (assuming, we've multiple strtok's )*/

    char str[100] = "xyz = 10 ; y = 20 ; z = 30";
    char *token = strtok(str, ";") ;

    cout << token << endl; // xyz = 10

    while(token != '\0'){
        cout << token << endl;
        token = strtok(NULL , ";"); /*xyz = 10  
                                    y = 20  
                                    z = 30*/ 
    }

}