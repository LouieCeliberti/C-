//
//  main.cpp
//  Quiz 4
//
//  Created by Louiem Celiberti on 3/31/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

class Employee {
    string employee_name, employee_number, employee_hired_date;
    
    public:
    void setemployeeName(string employeeName);
    void setemployeeNumber(string);
    void sethireDate(string);
    string getemployeeName() const;
    string getemployeeNumber() const;
    string gethireDate() const;
    Employee();
};

    void Employee::setemployeeName(string named_Employee){ employee_name = named_Employee; }

    void Employee::setemployeeNumber(string numbered_Employee){ employee_number = numbered_Employee; }

    void Employee::sethireDate(string date_hired){ employee_hired_date = date_hired;}

    string Employee::getemployeeName() const{ return employee_name; }

    string Employee::getemployeeNumber() const{ return employee_number; }

    string Employee::gethireDate() const{ return employee_hired_date;}

Employee::Employee() {
   cout << "Please answer the following questions about your employees:\n";
}

class ProductionWorker : public Employee {
   int shift;
   double hourly_Pay;

public:
   void setShift(int);
   void sethourlyPay(double);
   int getShift() const;
   double gethourlyPay() const;
   ProductionWorker();
};

    void ProductionWorker::setShift(int s){ shift = s; }

    void ProductionWorker::sethourlyPay(double pay){ hourly_Pay = pay;}

    int ProductionWorker::getShift() const { return shift; }

    double ProductionWorker::gethourlyPay() const { return hourly_Pay; }

ProductionWorker::ProductionWorker()
{
   cout << "Your responses will then be displayed after all the quastions have been answered.\n";
}

int main()
{
    ProductionWorker info;
    string name, num, date;
    int shift;
    double pay;

   cout << "Please enter employee name: ";
   cin >> name;

   cout << "Please enter employee number: ";
   cin >> num;

   cout << "Please enter employee hire date \n";
   cout << "(Example: February 6 1920 = 02061920)";
   cin >> date;

   cout << "What shift does the employee work: \n";
   cin >> shift;

   cout << "What is the employee's hourly rate of pay: ";
   cin >> pay;

   info.setemployeeName(name);
   info.setemployeeNumber(num);

// was not able finish rest of code
    return 0;
}
