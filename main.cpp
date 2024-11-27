#include <iostream>
#include "SalaryEmployee.h"
#include "HourlyEmployee.h"

using namespace std;

int main() {

    HourlyEmployee amazon_worker(80, 40, "John", "Amazon", 25);
    SalaryEmployee google_worker(4000, "Jane", "Google", 30);
    
    amazon_worker.display_data();
    cout << "\n";   
    google_worker.display_data();
    return 0;
}