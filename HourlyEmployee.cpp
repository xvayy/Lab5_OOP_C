#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee() {}

HourlyEmployee::HourlyEmployee(double hourly_rate, int hours_worked, string name, string work_place, int age) : Employee(name, work_place, age) {
    this->hourly_rate = hourly_rate;
    this->hours_worked = hours_worked;
}

double HourlyEmployee::calculate_salary() {
    return hourly_rate * hours_worked;
}

void HourlyEmployee::display_data() {
    cout << "Name: " << name << endl;
    cout << "Work Place: " << work_place << endl;
    cout << "Age: " << age << endl;
    cout << "Hourly Rate: " << hourly_rate << endl;
    cout << "Hours Worked: " << hours_worked << endl;
    cout << "Salary: " << calculate_salary() << endl;
}