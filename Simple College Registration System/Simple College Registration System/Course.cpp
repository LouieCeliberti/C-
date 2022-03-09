//
//  Course.cpp
//  Simple College Registration System
//
//  Created by Louiem Celiberti on 5/9/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include "Course.hpp"
#include <string>
#include <iostream>


// Course member functions

Course newcoursel;

Course::Course(){}

Course::Course(int course_Id, string course_Name, int course_max_cap){
    id = course_Id;
    name = course_Name;
    max_cap = course_max_cap;
    int size = max_cap;
    Student* reg_student = new Student[size];
    
   /* for(int i = 0; i < 3; i++){
        creg_student[i] = reg_student[i];
    }*/
    
    //reg_student = new Student[size];
    
}
/*void Course::assign_lecturer(Lecturer *l_ptr){
    *lecture_ptr = *l_ptr;
}*/
Course* Course::register_(int reg_std_num, Student* newStudent, string courseName){
    Course* cc= new Course[1];
    cc[0] = Course(1234, courseName,  10);
    cout << " " << endl;
    reg_student[0] = newStudent[0];
    cout << "Registered Student";
    reg_std_num++;
    return cc;
}
void Course::display_info(){
    cout << "Course Id: " << id << " Course name: " << name << " Lecturer's name: " << " Number of registered students: " << " Number of available seats: " << max_cap << endl;
}

void Course::listStudents(){
    for(int i = 0; i < 3; i++){
        cout << "Displaying all of the students in " << name << endl;
        reg_student[i].display_info();
    }
}
