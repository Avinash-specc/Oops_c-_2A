#include <iostream>
using namespace std;
void area(int a ){
    cout<<"Area of Square is: "<<a*a<<endl;
}
void area(int a, int b){
    cout<<"Area of Rectangle is: "<<a*b<<endl;
}
void simpleInterest(int principal,int time, int rate = 3){
    cout<<"Interest Amount: "<<(principal*time*rate)/100<<endl;
}

int main(){
    area(23);
    area(2,5);
    simpleInterest(20000,2);
    return 0;
}