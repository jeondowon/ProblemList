#include <iostream>
using namespace std;

struct Menu{
    char name[100];
    int price;
};

struct Cafe{
    char name[100];
    int menu_count;
    Menu* menu_list;
};

int strLength(char str[]){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

void addCafe(Cafe &r1){
    cin.getline(r1.name,100);
}

void addMenu(Menu &m1){
    cin >> m1.name >> m1.price;
}

void displayMenus(Cafe &r1){
    cout << "=====" << r1.name << "=====" << endl;
    for (int i = 0; i < r1.menu_count; i++){
        cout << r1.menu_list[i].name << " " << r1.menu_list[i].price << endl;
    }
    cout << "=================" << endl;
}


int main(){
    Cafe restaurant;
    Menu food;
    addCafe(restaurant);

    cin >> restaurant.menu_count;
    restaurant.menu_list = new Menu[restaurant.menu_count];
    
    for (int i = 0; i < restaurant.menu_count; i++){
        addMenu(food);
        for (int j = 0; j < strLength(food.name); j++){
            restaurant.menu_list[i].name[j] = food.name[j];
        }
        restaurant.menu_list[i].name[strLength(food.name)] = '\0';
        restaurant.menu_list[i].price = food.price;
    }
    displayMenus(restaurant);

    delete[] restaurant.menu_list;

    return 0;
}
