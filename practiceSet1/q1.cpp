#include <iostream>
using namespace std;
class Student{
public:
    int rollNumber;
    string name;
    int marks;
    
    Student(int rollNumber, string name, int marks){
        this->rollNumber = rollNumber;
        this->name = name;
        this->marks = marks;
    }
    void display(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Roll Number: "<<this->rollNumber<<endl;
        cout<<"Marks: "<<this->marks<<endl;
    }
};
int main(){
    int rollNumber;
    string name;
    int marks;
    cout<<"Enter RollNo: ";
    cin>>rollNumber;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Marks: ";
    cin>>marks;
    cout<<"\n\n";
    Student s1(rollNumber,name,marks);
    s1.display();
    return 0;
}