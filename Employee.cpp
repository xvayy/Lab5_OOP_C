#include "Employee.h"

Employee::Employee() {}

Employee::Employee(string name, string work_place, int age) {
    this->name = name;
    this->work_place = work_place;
    this->age = age;
}