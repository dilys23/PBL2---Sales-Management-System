#include <iostream>
#include "product/Product.h"

using namespace std;

int main(){
    string id;
    string name;
    double price;
    int amount;

    // Get infor of product
    cout << "Enter id: ";
    getline(cin, id);
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter amount: ";
    cin >> amount;

    // Create new instance product
    Product product(id, name, price, amount);
    
    // Display infor of product
    product.display();

    return 0;
}