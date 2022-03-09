//
//  main.cpp
//  Assignment 3
//
//  Created by Louiem Celiberti on 2/23/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

/*
CMPT102 HW3, Assignment3.cpp
Purpose: Create a sturcture that contains the students information, create three functions that print the students information, search by their last name, and search by the year they were born
Programmer: Louie Celiberti
Date: 2/25/20
*/

#include <iostream>
using namespace std;

// Structure containing the information of the student such as name, date of birth, phone number and major
struct Student{
    string first_Name;
    string last_Name;
    int day;
    int month;
    int year;
    string phone_Number;
    string major;
};
// print_student_info function prints out the information of the student
void print_student_info(Student student){

    cout<<"Name: "<<student.first_Name<<" "<<student.last_Name<<endl;
    cout<<"Date of Birth: "<<student.month<<"/"<<student.day<<"/"<<student.year<<endl;
    cout<<"Phone Number: "<<student.phone_Number<<endl;
    cout<<"Major: "<<student.major<<endl;

}
// search_students_by_lastname function searches for the student by last name
// if the last name is found, the student's inormation will be printed out
// if the last name is not found, an error will occur
void search_students_by_lastname(Student student[], int size, string word){
    
    bool search = false;

    for(int i = 0; i < size; i++){
       if(student[i].last_Name == word){
           print_student_info(student[i]);
           search = true;
       }
    }
   if(!search){

       cout<<"0 match found with LastName = "<< word << endl;

   }
}
// search_students_by_yobfunction searches for there information by the year they were born
// if the year is found, the student's information will be printed out
// if the year is not found, an error will occur
void search_students_by_yob(Student student[], int size, int year){
    
    bool search = false;

    for(int i = 0; i < size; i++){
     if(student[i].year == year){
         print_student_info(student[i]);
         search = true;
     }
    }

 if(!search){

     cout<<"0 match found with Year of birth = "<< year << endl;

 }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    const int number_of_students = 5;
    Student student[number_of_students] = {
        {"Bill", "Gates", 1, 23, 1954, "893-034-2201", "Computer Science"},
        {"Steve", "Jobs", 10, 1, 1956, "239-920-1394", "Computer Science"},
        {"Bart", "Simpson", 3, 4, 1990, "768-845-3001", "Liberal Arts"},
        {"Steve", "Wozniack", 6,22,1968, "908-940-9213", "Computer Engineering"},
        {"Jezz", "Bezos", 12, 1, 2002, "863-534-5029", "Political Science"}
        };

    // printing student information
    cout << "Printing student information: " << endl;
    print_student_info(student[4]);
    cout << endl;
    
    // searching by last name
    cout << "Searching student by their last name: " << endl;
    search_students_by_lastname(student, number_of_students, "Simpson");
    cout << endl;
    search_students_by_lastname(student, number_of_students, "Celiberti");
    cout << endl;
    search_students_by_lastname(student, number_of_students, "Jobs");
    cout << endl;
    
    // searching by year
    cout << "Searching student by year they were born:" << endl;
    search_students_by_yob(student, number_of_students, 1954);
    cout << endl;
    search_students_by_yob(student, number_of_students, 2000);
    cout << endl;
    search_students_by_yob(student, number_of_students, 1968);
    cout << endl;
    search_students_by_yob(student, number_of_students, 1990);
    cout << endl;
    
    return 0;
}
