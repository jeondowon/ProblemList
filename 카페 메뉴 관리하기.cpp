#include <iostream>
#include <string>

using namespace std;

struct Menu {
    string name;
    int price;
};

struct Cafe {
    string name;
    int menu_count;
    Menu* menu_list;
};

void addMenu(Menu &m1) {
    cin >> m1.name >> m1.price;
}

void addCafe(Cafe &r1) {
    if (getline(cin, r1.name)) {
        if (r1.name.empty()) {
            getline(cin, r1.name);
        }
        cin >> r1.menu_count;
        r1.menu_list = new Menu[r1.menu_count];
        for (int i = 0; i < r1.menu_count; ++i) {
            addMenu(r1.menu_list[i]);
        }
    }
}

void displayMenus(Cafe &r1) {
    cout << "===== " << r1.name << " =====" << endl;
    for (int i = 0; i < r1.menu_count; ++i) {
        cout << r1.menu_list[i].name << " " << r1.menu_list[i].price << endl;
    }
    cout << "====================" << endl;
}

int main() {
    Cafe cafe;
    addCafe(cafe);
    displayMenus(cafe);
    delete[] cafe.menu_list;
    return 0;
}
