// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {
public:
    Employee(int employeeId, const std::string& name, double salary, int departmentId);

    void displayInfo() const;

private:
    int employeeId;
    std::string name;
    double salary;
    int departmentId;
};

#endif // EMPLOYEE_H
