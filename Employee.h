#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;


class Employee {
    protected:
        string name;
        string work_place;
        int age;
    public:
        Employee();
        Employee(string name, string work_place, int age);
        virtual double calculate_salary() = 0;
        virtual void display_data() = 0;
};

#endif