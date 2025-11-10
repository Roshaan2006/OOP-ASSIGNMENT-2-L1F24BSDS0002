#include "TS_Employee.h"

int Employee::emp_count = 0;
const string Employee::company_name = "Roshaan TechSolutions";

Employee::Employee(const char* name, int id, double salary) {
    this->emp_id = id;
    this->emp_salary = salary;
    size_t len = strlen(name) + 1;
    this->emp_name = new char[len];
    strcpy_s(this->emp_name, len, name);
    Employee::emp_count++;
}


Employee::Employee(const Employee& other) {
    size_t len = strlen(other.emp_name) + 1;
    this->emp_name = new char[len];
    strcpy_s(this->emp_name, len, other.emp_name);
    this->emp_id = other.emp_id;
    this->emp_salary = other.emp_salary;
    Employee::emp_count++;
}


Employee::~Employee() {
    delete[] emp_name;
    emp_count--;
}

void Employee::show_data() const {
    cout << "Company: " << company_name << endl;
    cout << "Name: " << emp_name << endl;
    cout << "ID: " << emp_id << endl;
    cout << "Salary: " << emp_salary << endl << endl;
}

void Employee::show_count() {
    cout << "Total Employees: " << emp_count << endl << endl;
}

void print_emp(Employee e) {
    e.show_data();
}

Employee Employee::make_copy(Employee e) {
    Employee temp(e);
    return temp;

}
