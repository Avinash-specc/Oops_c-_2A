#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:

    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called." << endl;
    }

    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called for "
             << name << "." << endl;
    }

    Student(const Student& obj) {
        name = obj.name;
        age = obj.age;
        cout << "Copy constructor called for "
             << name << "." << endl;
    }

    void display() const {
        cout << "Name: " << name
             << ", Age: " << age << endl;
    }

    ~Student() {
        cout << "Destructor called for "
             << name << "." << endl;
    }
};

int main() {
    cout << "--- Object 1 ---" << endl;
    Student s1;                
    s1.display();

    cout << "\n--- Object 2 ---" << endl;
    Student s2("Alice", 20);  
    s2.display();

    cout << "\n--- Object 3 ---" << endl;
    Student s3(s2);        
    s3.display();

    cout << "\n--- Local Scope ---" << endl;
    {
        Student s4("Bob", 22);
        s4.display();
        cout << "Leaving local scope..." << endl;
    } 

    cout << "\nEnd of main()" << endl;
    return 0;
}