#include <iostream>
using namespace std;
class Product{
    string name;
    int price;

public:
    Product(string name, int price){
        this->name = name;
        this->price = price;
    }
    Product higherPrice(Product p1, Product p2){
        if(p1.price>p2.price){
            return p1;
        }
        else return p2;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    Product p1("Biscuits",54);
    Product p2("Cookies",76);

    Product p3 = p1.higherPrice(p1,p2);
    p3.display();
    return 0;
}