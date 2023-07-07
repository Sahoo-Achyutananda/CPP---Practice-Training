#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fin("my.txt");

    if(fin.is_open() == false){
        cout << "File doesnt exist" << endl;
    }
    else{
        string str;
        int x;
        string str2;

        // will only read the first segment 
        fin >> str;
        fin >> x;
        fin >> str2;
        cout << str << " " << x << " " << str2 << endl;

        fin.beg; // Moves the cursor to the beginning of the file.

        // will read till EOF
        while(1){
            fin >> str;
            fin >> x;
            fin >> str2;
            cout << str << " " << x << " " << str2 << endl;
            if(fin.eof()) break;
        }

        fin.close();
    }
}