#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;

    static int count;

public:
    Employee(int i, string n) {
        id = i;
        name = n;
        count++;
    }

    
    static void showCount() {
        cout << "Total Employees: " << count << endl;
    }


    friend void showEmployee(Employee e);
};

// Initialize static member
int Employee::count = 0;

// Friend function
void showEmployee(Employee e) {
    cout << "ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
}

int main() {
    Employee e1(101, "Avinash");
    Employee e2(102, "Ash");

    showEmployee(e1);
    cout << endl;

    showEmployee(e2);
    cout << endl;

    Employee::showCount();

    return 0;
}