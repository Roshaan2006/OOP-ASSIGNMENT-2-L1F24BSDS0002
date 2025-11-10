#pragma once

#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    char* emp_name;
    int emp_id;
    double emp_salary;
    static int emp_count;
    static const string company_name;

public:
    Employee(const char* name, int id, double salary);
    Employee(const Employee& other);
    ~Employee();

    void show_data() const;
    static void show_count();

    friend void print_emp(Employee e);
    static Employee make_copy(Employee e);
};

