#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H
#include "Employee.h"

class SalaryEmployee : public Employee {
    private:
        double monthly_salary;
    public:
        SalaryEmployee();
        SalaryEmployee(double monthly_salary, string name, string work_place, int age);
        double calculate_salary() override;
        void display_data() override;
};

#endif