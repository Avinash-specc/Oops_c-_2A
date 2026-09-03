#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:

    Student() {
        name = "Unknown";
        marks = 0;
        cout << "Default constructor called." << endl;
    }

    Student(string n, int a) {
        name = n;
        marks = a;
        cout << "Parameterized constructor called for "
        << name << "." << endl;
    }

    Student(const Student& obj) {
        name = obj.name;
        marks = obj.marks;
        cout << "Copy constructor called for "
             << name << "." << endl;
    }

    void display() const {
        cout << "Name: " << name
             << ", Marks: " << marks << endl;
    }

    ~Student() {
        cout << "Destructor called for "
             << name << "." << endl;
    }
};

int main() {

    Student s1;                
    s1.display();

    Student s2("Avinash", 20);  
    s2.display();

    Student s3(s2);        
    s3.display();
    cout<<endl;

    return 0;
};