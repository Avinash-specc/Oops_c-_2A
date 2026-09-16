#include <iostream>
using namespace std;

class University {
private:
    string universityName;

public:
    University(string name) {
        universityName = name;
    }

    class Department {
        string departmentName;
        int studentCount;

    public:

        Department(string name, int count) {
            departmentName = name;
            studentCount = count;
        }

        void display(University &u) {
            cout << "University Name: " << u.universityName << endl;
            cout << "Department Name: " << departmentName << endl;
            cout << "Student Count: " << studentCount << endl;
        }
    };
};

int main() {
    University u("ABES Engineering College");

    University::Department d("CSE-AIML", 240);

    d.display(u);
    return 0;
}