#include <iostream>
#include <string>
using namespace std;

class Employee 
{
    int eid;
    string ename;
    int salary;

public:
    void getemp(int id, string name, int basic);
    void putemp();
};

void Employee::getemp(int id, string name, int basic) 
{
    eid = id;
    ename = name;
    salary = basic;
}

void Employee::putemp() {
    cout << "ID: " << eid << " Name: " << ename << " Salary: " << salary << endl;
}

int main() {
    Employee e1, e2;
    e1.getemp(1, "Bhavani", 70000);
    e2.getemp(2, "Vinitha", 70000);
    e1.putemp();
    e2.putemp();
    return 0;
}

