#include <iostream>
using namespace std;
class Product{
    int productId;
    string productName;
    int price;
    
public:
    Product(int pId,string pName, int pr){
        productId = pId;
        productName = pName;
        price = pr;
    }
    void calculatePrice(){
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Product Id: "<<productId<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void calculatePrice(double discount){
        double finalPrice = price-((price*discount)/100);
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Product Id: "<<productId<<endl;
        cout<<"Price: "<<finalPrice<<endl;
    }
    void calculatePrice(double discount,int deliveryCharge){
        double finalPrice = price-((price*discount)/100)+deliveryCharge;
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Product Id: "<<productId<<endl;
        cout<<"Price: "<<finalPrice<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter no. of Products: ";
    cin>>n;
    Product **products =  new Product*[n];
    for(int i=0; i<n; i++){
        int id;
        string name;
        double price;

        cout << "\nEnter details of Product " << i + 1 << endl;
        cout << "Product Id: ";
        cin >> id;
        cout << "Product Name: ";
        cin >> name;
        cout << "Price: ";
        cin >> price;
        products[i] = new Product(id, name, price);
    }
    cout<<"\nProduct Details\n";
    for(int i=0; i<n; i++){
        products[i]->calculatePrice();
    }

    cout<<"\n Product1 after 17% discount\n";
    products[0]->calculatePrice(17);
    cout<<"\n Product2 after 17% discount and 100 delivery \n";
    products[1]->calculatePrice(17,100);

    for(int i=0; i<n; i++){
        delete products[i];
    }
    delete[] products;
    return 0;
}