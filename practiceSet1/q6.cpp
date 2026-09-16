#include <iostream>
using namespace std;
class Marks{
private:
    int a[5] = {35,34,65,56,88};
public:
    void display(){
        for(auto nums: a){
            cout<<nums<<" ";
        }
    }
    friend void totalMarks(Marks &m);
};
void totalMarks(Marks &m){
    int total =0;
    for(auto num: m.a){
        total+=num;
    }
    cout<<"Total Marks: "<<total<<endl;
}
int main(){
    Marks m1;
    m1.display();
    cout<<endl;
    totalMarks(m1);
    return 0;
}