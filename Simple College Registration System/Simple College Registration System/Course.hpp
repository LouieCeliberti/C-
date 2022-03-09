//
//  Course.hpp
//  Simple College Registration System
//
//  Created by Louiem Celiberti on 5/9/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
#include <string>
#include "student.hpp"
using namespace std;

class Course{
private:
    int id;
    std::string name;
   // Lecturer* lecture_ptr;
    int reg_students_num;
    Student* reg_student;
    int max_cap;
public:
    Course();
    Course(int course_Id, string course_Name, int course_max_cap);
   // void assign_lecturer(Lecturer *l_ptr);
    Course* register_(int reg_std_num, Student* reg_student, string Name);
    void display_info();
    void listStudents();
};
#endif /* Course_hpp */
