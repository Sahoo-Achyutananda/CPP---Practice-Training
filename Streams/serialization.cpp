#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
        int Roll;
        string Name;
        int Age;

        friend ofstream & operator<<(ofstream &f, Student s);
        friend ifstream & operator>>(ifstream &f, Student &s);
        friend ostream & operator<<(ostream &o, Student s);
};

ofstream & operator<<(ofstream &f, Student s){
    f<<s.Roll<<endl;
    f<<s.Name<<endl;
    f<<s.Age<<endl;

    return f;
}

ifstream & operator>>(ifstream &ifo, Student &s){
    ifo>>s.Roll;
    ifo>>s.Name;
    ifo>>s.Age ;
    return ifo;
}

ostream & operator <<(ostream &o, Student s){
    o<<"Roll : " << s.Roll<<endl;
    o<<"Name : " << s.Name<<endl;
    o<<"Age : " <<s.Age<<endl;
    return o;
}

int main(){
    ofstream fout("student.txt");
    Student s1;
    s1.Roll = 10; s1.Name = "Subi" ; s1.Age = 99;
    fout << s1;
    fout.close();

    ifstream fin("student.txt");
    Student s;
    fin >> s;
    cout << s;
    //fin.close();
}