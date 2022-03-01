#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee
{
public:
    string name;
    string address;
    string email;
    string position;
    int yearsEmployed {0};


private:
    Employee() = default;
    Employee(string n, string a, string e, string p, int yE);
    bool setName(string);
    bool setAddress(string);
    bool setEmail(string);
    bool setPosition(string);
    bool setYearsEmployed(int);
    string getName();
    string getAddress();
    string getEmail();
    string getPosition();
    int getYearsEmployed();
};


#endif