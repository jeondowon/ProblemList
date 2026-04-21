#include <iostream>
#include <string>

using namespace std;

struct Item {
    string name;
    int price;
    string manufacturer;
};

bool compareItem(Item* a, Item* b) {
    if (a->price != b->price) return false;
    if (a->name.length() != b->name.length()) return false;
    for (size_t i = 0; i < a->name.length(); ++i) {
        if (tolower(a->name[i]) != tolower(b->name[i])) return false;
    }
    return true;
}

int main() {
    Item item1, item2;
    if (cin >> item1.name >> item1.price >> item1.manufacturer >> item2.name >> item2.price >> item2.manufacturer) {
        if (compareItem(&item1, &item2)) {
            cout << item1.name << " is equal" << endl;
        } else {
            cout << item1.name << " and " << item2.name << " is not equal." << endl;
        }
    }
    return 0;
}
