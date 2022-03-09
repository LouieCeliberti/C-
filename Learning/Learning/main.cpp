//
//  main.cpp
//  Learning
//
//  Created by Louiem Celiberti on 12/12/20.
//

#include <iostream>
using namespace std;

struct student{
    int age;
    double gpa;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    student students[10];
    students[0].age = 21;
    students[1].gpa = 1.9;
    students[2].age = 23;
    students[3].gpa = 3.8;
    students[4].age = 20;
    students[5].gpa = 4.0;
    students[6].age = 18;
    students[7].gpa = 2.3;
    students[8].age = 19;
    students[9].gpa = 3.2;
    
    for(int i = 0; i < 10; i++){
        cout << students[i].age << " ";
        
    }
    return 0;
}
