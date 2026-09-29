#include <iostream>
using namespace std;
class Student{
public:
    int rollNumber;
    string studentName;
    Student* nextStudent;

    Student(int rollNumber,string studentName){
        this->rollNumber = rollNumber;
        this->studentName = studentName;
        nextStudent = NULL;
    }

};
int main(){
    Student s1(345,"Avinash");
    Student s2(32,"Ash");
    Student s3(5,"Avi");

    s1.nextStudent = &s2;
    s2.nextStudent = &s3;

    cout<<s1.studentName<<endl;
    cout<<s1.nextStudent->studentName<<endl;
    cout<<s1.nextStudent->nextStudent->studentName<<endl;
    return 0;
}