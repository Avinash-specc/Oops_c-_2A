#include <iostream>
using namespace std;

class ResultAnalyzer;

class StudentResult {
private:
    int rollNo;
    string name;
    float marks1, marks2, marks3;

    static int totalStudents;

public:

    StudentResult(int r, string n, float m1, float m2, float m3) {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;

        totalStudents++;
    }

    friend class ResultAnalyzer;

    static void showTotalStudents() {
        cout << "Total StudentResult objects created: "
             << totalStudents << endl;
    }

    ~StudentResult() {
        cout << "StudentResult object of " << name
             << " is destroyed." << endl;
    }
};

int StudentResult::totalStudents = 0;

class ResultAnalyzer {
public:
    void calculateResult(const StudentResult &s) {

        float total = s.marks1 + s.marks2 + s.marks3;
        float percentage = total / 3;

        cout << "\nRoll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (s.marks1 >= 40 && s.marks2 >= 40 && s.marks3 >= 40)
            cout << "Result: PASS" << endl;
        else
            cout << "Result: FAIL" << endl;
    }
};


int main() {

    StudentResult s1(101, "Avinash", 810, 75, 90);
    StudentResult s2(102, "Ash", 35, 780, 65);

    StudentResult::showTotalStudents();

    ResultAnalyzer analyzer;

    analyzer.calculateResult(s1);
    analyzer.calculateResult(s2);

    return 0;
}