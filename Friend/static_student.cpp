#include<iostream>
using namespace std;

class Student{
    // static members can be private or public. If it is private it cannot be accessed directly, hence a accessor
    // is required. 
    private:
        int roll;
        string Name;
        static int currentRoll;// a private static member
    public:
        static int random; // a public static member

        Student(string x){
            Name = x;
            roll = currentRoll;
            currentRoll++;
            cout << "Student added successfully " << endl;
        }
        void display(){
            cout<< Name << " " << roll << endl; 
        }
        //an accessor to acess the static member.
        static int getCount(){
            return currentRoll;
        }

};

int Student::currentRoll = 0;
int Student::random = INT16_MAX;

int main(){

    // static members can be accessed without creating an object.(also, they can be accessed through a member aswell)
    cout << "Starting Roll  : " << Student::getCount() << endl;

    Student s1("bala");
    s1.display();
    Student s2("ravi");
    s2.display();
    Student s3("gopal");
    s3.display();

    cout << "No of students : " << Student::getCount() << endl;
    cout << Student::random << endl;

    // a public static member can be modified directly.
    Student::random = 30;
    cout << Student::random << endl;

}