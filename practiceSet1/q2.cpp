#include <iostream>
using namespace std;
class Employee{
private:
    int employeeId;
    string name;
    double salary;
    
public:
    void input();
    void display();
};

void Employee:: input(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Employee ID: ";
    cin>>employeeId;
    cout<<"Enter Salary: ";
    cin>>salary;
}
void Employee:: display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Employee ID: "<<employeeId<<endl;
    cout<<"Salary: "<<salary<<endl;
}
int main(){
    Employee emp1;
    emp1.input();
    cout<<"\n\n";
    emp1.display();
    return 0;
}