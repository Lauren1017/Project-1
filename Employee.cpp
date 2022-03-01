#include "Employee.h"
#include <string.h>

Employee::Employee(string n, string a, string e, string p, int yE)
{
    name = n;
    address = a;
    email = e;
    position = p;
    yearsEmployed = yE;
}
bool Employee::setName(string n)
{
    if (n = '/n')
    {
       return true;
    }
    else{
        name = n;
        return false;
    }
}
bool Employee::setAddress(string);
bool Employee::setEmail(string);
bool Employee::setPosition(string);
bool Employee::setYearsEmployed(int);
