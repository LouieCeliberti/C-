//
//  student.hpp
//  Simple College Registration System
//
//  Created by Louiem Celiberti on 5/9/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <stdio.h>
#include <string>
#include "Course.hpp"
//using namespace std;

class Student{
private:
    int id;
    std::string name;
    int course_num;
    int max_courses;
    Course* course;
public:
    Student();
    Student(int Identification, std::string student_Name);
    Student* register_(int course_num, Course* newCourse, std::string courseName);
    void display_info();
};

#endif /* student_hpp */
