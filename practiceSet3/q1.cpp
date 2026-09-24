#include <iostream>
using namespace std;
class Student{
    int rollNo;
    string name;
    double CGPA;
public:
    Student(int rollNo, string name){
        this-> rollNo = rollNo;
        this-> name = name;
        this->CGPA = 0.0;
    }
    Student(int rollNo, string name, double CGPA){
        this-> rollNo = rollNo;
        this-> name = name;
        this-> CGPA = CGPA;
    }
    void updateCGPA(double CGPA){
        this->CGPA = CGPA;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"RollNo: "<<rollNo<<endl;
        cout<<"CGPA: "<<CGPA<<endl;
    }
    
    class Address{
        string city, state;
    public:

        Address(string city, string state){
            this-> city = city;
            this->state = state;
        }
        void displayAddress(){
            cout<<"City: "<<city<<endl;
            cout<<"State: "<<state<<endl;
        } 
    };
};
int main(){
    Student s[5] = {
        Student(17,"Avinash"),Student(34,"ASH"),Student(23,"Avi",9.7),Student(56,"Anurag"),Student(54,"Ag")
    };
    Student:: Address ad("Deoria","UP");
    s[0].display();
    s[1].display();
    s[2].display();
    s[3].display();
    s[4].display();
    s[3].updateCGPA(9.9);
    s[3].display();
    ad.displayAddress();
    return 0;
}