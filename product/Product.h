#include<iostream>
using namespace std;

class Product {
    private:
        string id;
        string name;
        double price;
        int amount;
    public:
        Product(string, string, double, int);
        ~Product();
        void display();
};