#include <iostream>
#include "Product.h"

using namespace std;

Product::Product(string id, string name, double price, int amount){
    this->id = id;
    this->name = name;
    this->price = price;
    this->amount = amount;
}

Product::~Product(){}

void Product::display(){
    cout << "====== My product ======= \n";
    cout << "ID: " << this->id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Price: " << this->price << endl;
    cout << "Amount: " << this->amount << endl;
    cout << "=========================\n";
}