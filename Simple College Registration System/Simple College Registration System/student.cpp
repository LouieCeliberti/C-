//
//  student.cpp
//  Simple College Registration System
//
//  Created by Louiem Celiberti on 5/9/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include "student.hpp"
#include "Course.hpp"
#include <string>
#include <iostream>
//using namespace std;


Student newstudent;

Student::Student(){}

Student::Student(int identification, string student_Name){
    id = identification;
    name = student_Name;
    max_courses = 6;
    int size = max_courses;
    course = new Course[size];
}
Student* Student::register_(int course_num, Course* newCourse, string courseName){
    Course* std= new Course[course_num++];
    //std[0] = Student(1234, courseName);
    course[0] = newCourse[0];
    std::cout << "Registered Student";
    return std;
}
void Student::display_info(){
    cout << " Student Id: " << id << " Student's name: " << name << endl;
}
