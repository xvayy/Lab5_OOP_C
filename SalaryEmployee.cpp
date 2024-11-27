#include "SalaryEmployee.h"

SalaryEmployee::SalaryEmployee() {}

SalaryEmployee::SalaryEmployee(double monthly_salary, string name, string work_place, int age) : Employee(name, work_place, age){
    this->monthly_salary = monthly_salary;
}

double SalaryEmployee::calculate_salary() {
    return monthly_salary;
}

void SalaryEmployee::display_data() {
    cout << "Name: " << name << endl;
    cout << "Work Place: " << work_place << endl;
    cout << "Age: " << age << endl;
    cout << "Monthly Salary: " << monthly_salary << endl;
}