#include<iostream>
#include<fstream>
using namespace std;

// Taking input from teh user and adding it to the file.
int main(){
    ofstream fout;
    fout.open("sample.txt");

    string str;

    if(fout.is_open()){
        while(1){
            getline(cin,str);
            if(str == "-1")
                break;
            fout << str << endl;
        }
        fout.close();
    }
    else    
        cout << "File Doesn't exist" << endl;
}