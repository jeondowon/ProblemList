#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product {
private:
    string name;
    int original_price;
    int discount_rate;
    string size;
    string manufacturer;
public:
    void add(string n, int p, int d, string s, string m) {
        name = n;
        original_price = p;
        discount_rate = d;
        size = s;
        manufacturer = m;
    }
    void print() {
        cout << name << " " << size << " " << manufacturer << endl;
        int sale_price = original_price * (100 - discount_rate) / 100;
        if (discount_rate == 0) {
            cout << sale_price << " (0%)" << endl;
        } else {
            cout << sale_price << " (-" << discount_rate << "%)" << endl;
        }
    }
};

int main() {
    vector<Product*> products;
    int menu;
    while (true) {
        cout << "1. Add  2.List 3.Quit > ";
        if (!(cin >> menu)) break;
        if (menu == 3) break;
        if (menu == 1) {
            cin.ignore();
            string name;
            getline(cin, name);
            int price, discount;
            string size, maker;
            cin >> price >> discount >> size >> maker;
            Product* p = new Product();
            p->add(name, price, discount, size, maker);
            products.push_back(p);
        } else if (menu == 2) {
            for (Product* p : products) {
                p->print();
            }
        }
    }
    for (Product* p : products) {
        delete p;
    }
    return 0;
}
