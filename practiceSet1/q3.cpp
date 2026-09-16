#include <iostream>
using namespace std;
void swapByValue(int a, int b){
    int temp = a;
    a =b;
    b = temp;
    
}
void swapByRefrence(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a =10;
    int b = 20;
    cout<<"Before swap by value: "<<"a: "<<a<<" b: "<<b<<endl;
    swapByValue(a,b);
    cout<<"After swap by value: "<<"a: "<<a<<" b: "<<b<<endl;
    swapByRefrence(a,b);
    cout<<"After swap by refrence: "<<"a: "<<a<<" b: "<<b<<endl;
    return 0;
}