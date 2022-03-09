//
//  main.cpp
//  Assignment6 Course Information
//
//  Created by Louiem Celiberti on 9/20/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

/*
 CMPT101 HW1, Assignment1.cpp
 pURPOSE: Recieving a list of users course information when entered
 Programmer: Louie Celiberti
 Date: 9/20/19
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    string course_Name, semester, assignment_Number, due_Date;
    cout << "Please enter the following information:\n";
    cout << "Course name:";
    getline(cin, course_Name);
    cout << "Semester:\n";
    getline(cin, semester);
    cout << "Assignment number:\n";
    getline(cin, assignment_Number);
    cout << "Due Date:\n";
    getline(cin, due_Date);
    cout << course_Name << setw(40) << semester << endl;
    cout << assignment_Number << endl;
    cout << due_Date << endl;
    return 0;
}
