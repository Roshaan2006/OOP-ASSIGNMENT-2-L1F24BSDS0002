#include "TS_Employee.h"
using namespace std;

int main() {
    cout << "----Roshaan Tech Solutions Employee Data----" << endl;
    Employee* emp1 = new Employee("Roshaan", 0002, 50000);
    Employee* emp2 = new Employee("Ahmad", 0115, 60000);

    cout << "\n-------[Employee Data]-------" << endl;
    emp1->show_data();
    emp2->show_data();

    Employee::show_count();

    cout << "\n----Passing Object to the friend function----" << endl;
    print_emp(*emp1);

    cout << "\n---(Deep Copy) -----" << endl;
    Employee emp3 = Employee::make_copy(*emp1);
    cout << "Deep copy of emp1 created as emp3" << endl;
    emp3.show_data();

    cout << "\n----(Shallow Copy)----" << endl;
    Employee emp4 = *emp1;
    cout << "Shallow copy of emp1 created as emp4" <<endl;
    emp4.show_data();

    cout << "\n<<<<Deleting Original emp1>>>>" << endl;
    delete emp1;

    cout << "\nAfter deleting emp1:" << endl;
    cout << "emp3 (Deep Copy):" << endl;
    emp3.show_data();
    cout << "--------------------------------------------" << endl;
    cout << "emp4 (Shallow Copy):" << endl;
    emp4.show_data();
    cout << "--------------------------------------------" << endl;


    Employee::show_count();

    cout << "\n<<<<Deleting (emp2)>>>>>" << endl;
    delete emp2;
    Employee::show_count();

    return 0;
}
