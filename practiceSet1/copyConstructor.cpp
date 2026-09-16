#include <iostream>
using namespace std;
class Student{
    string name;
    int marks;

public:
    Student(string n, int m){
        name = n;
        marks = m;
    }
    Student(){
        cout<<"Default Constructor"<<endl;
    }
    Student(const Student &s){
        name = s.name;
        marks = s.marks;
    }
    void show(){
        cout<<"Name: " <<name<<" "<<marks<<endl;
    }
};
int main(){
    Student s1;
    Student s2(s1);
    s2.show();
    return 0;
}