#include <iostream>
using namespace std;
class Product{
public:
    int productId;
    string name;
    int price;

    Product(int productId,string name,int price){
        this->productId = productId;
        this->name = name;
        this->price = price;
    }
    
    Product comparePrice(const Product &p){
        if(price>p.price){
            return  *this;
        }
        else return p;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Product ID: "<<productId<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    Product p1(23,"Cookies",89899);
    Product p2(24,"Biscuits",577454);
    Product higher = p1.comparePrice(p2);
    p1.display();
    return 0;
}