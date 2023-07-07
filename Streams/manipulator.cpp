#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main(){
    // cout << hex << 163 <<endl;
    // cout << oct << 15 << endl;
    // cout << dec << 65<< endl;

    // cout<<setw(10)<<"Hello" << endl;
    // cout<<setfill('-')<<setw(10)<<"Hello" << endl;

    int num=10;

	cout<<"Decimal value is :"<< num << endl;

	cout.setf(ios::basefield,ios::oct);
	cout<<"Octal value is :"<< num << endl;

	cout.setf(ios::basefield,ios::hex);
	cout<<"Hex value is :"<< num << endl;
	return 0;
}