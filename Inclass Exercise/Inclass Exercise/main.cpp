// CMPT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
    string name, city, college, proffesion, animal, pets_name;
    int age;
    cout << "What is your name?\n";
    getline(cin,name);
    cout << "How old are you?\n";
    cin >> age;
    cin.ignore();
    cout << "What city do you live in?\n";
    getline(cin, city);
    cout << "What college do you currently attend?\n";
    getline(cin, college);
    cout << "What is your occupation?\n";
    getline(cin, proffesion);
    cout << "What kind of pet do you have?\n";
    getline(cin, animal);
    cout << "What is your pets name?\n";
    getline(cin, pets_name);
    cout << "There once was a person name " << name << "who live in." << city << " At th age of " << age << ", " + name
    << "went to colleg at " << college + ". " << name << "Graduated from and went to work as a " << proffesion + ". " << "Then, " + name << "adopted a(n)" + animal + "named " << pets_name
    << "They both lived happily ever after!" << endl;
    
    return 0;
}
