#include <iostream>
using namespace std;
class Student{
    string name;
    int rollNo;
    double marks;
public:
    void read(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter RollNo: ";
        cin>>rollNo;
        cout<<"Enter Marks: ";
        cin>>marks;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"RollNo: "<<rollNo<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    double getMarks(){
        return marks;
    }

};
int main(){
    int n;
    cout<<"Enter no. of Students: ";
    cin>>n;

    Student* students = new Student[n];

    for(int i=0; i<n; i++){
        cout<<"Enter Details of Student"<<i+1<<endl;
        students[i].read();
    }

    Student* highest = &students[0];
    for(int i=1; i<n; i++){
        if(students[i].getMarks()>highest->getMarks()){
            highest = &students[i];
        }
    }

    for(int i=0; i<n; i++){
        cout<<"\nStudent"<<i+1<<":\n";
        students[i].display();
    }

    cout<<"Student with the highest marks: \n";
    highest->display();

    delete[] students;
    return 0;
}