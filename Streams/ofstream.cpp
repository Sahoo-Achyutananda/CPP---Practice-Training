#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("my.txt"); // if my.txt doesnt exist it creates it.

    fout << "Hello" << endl;
    fout << "25" << endl;
    fout << "Byee" << endl;

    // The content of my.txt will be truncated if the mode is not specified.

    

    // appending content using ios::app;
    ofstream fout_("my.txt", ios::app);
    fout_ << "Hello2" << endl;
    fout_ << "26" << endl;
    fout_ << "Byee2" << endl;

    fout_.close();

}