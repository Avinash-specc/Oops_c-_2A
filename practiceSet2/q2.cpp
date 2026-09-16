#include <iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    string customerName;
    double balance;

public:
    BankAccount(int accountNumber,string customerName,double balance){
        this->accountNumber = accountNumber;
        this->customerName = customerName;
        this-> balance = balance;
}

friend void compareBalance(const BankAccount &p1, const BankAccount &p2);

};
void compareBalance(const BankAccount &p1, const BankAccount &p2){
    if(p1.balance>p2.balance) cout<<p1.customerName<<" has higher balance"<<endl;
    else if(p1.balance<p2.balance) cout<<p2.customerName<<" has higher balance"<<endl;
    else cout<<"Both customers have the same Balance"<<endl;
}
int main(){
    BankAccount b1(7934,"Avinash",345549);
    BankAccount b2(4353,"Ash",6990459);
    compareBalance(b1,b2);
    return 0;
}