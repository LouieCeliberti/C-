// CMPT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
int main()
{
    cout << "Hello World!\n";
    int myvar;
    // declare a pointer
    int *number_pointer;
    
    number_pointer = &myvar;
    *number_pointer = 10;
    cout << myvar << endl;
    
    //setw();
    int x = 7, y = 9, z = 90;
    cout << setw(3) << endl;
    cout << x << y << z << endl;
    
    
    // setprecision();
    double e = 43.458234;
    cout << setprecision(6) << x << endl;
    
    // getline();
    string s;
    cout << "Please enter a sentence: ";
    getline(cin,s);
    cout << s;
    
    // .get();
    char c1;
    cin.get(c1);
    cout << c1 << endl;
    
    // .ignore();
    char c2,c3,c4;
    cin.get(c2);
    cin.ignore();
    cin.get(c4);
    cout << c2 << c4 << endl;
    
    
    return 0;
}
