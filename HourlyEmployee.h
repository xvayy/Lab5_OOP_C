#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;


class HourlyEmployee : public Employee {
    private:
        double hourly_rate;
        int hours_worked;
    public:
        HourlyEmployee();
        HourlyEmployee(double hourly_rate, int hours_worked, string name, string work_place, int age);
        double calculate_salary() override;
        void display_data() override;
};

#endif