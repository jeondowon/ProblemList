#include <iostream>
using namespace std;

struct good {
    char name[100];
    int price;
    char company[100];
};

int strLength(char str[]){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

bool isEqual(good* o1, good* o2){
    if(strLength(o1->name) != strLength(o2->name)){
        return false;
    }
    for (int i = 0; i < o1->name[i] != '\0' ; i++){
        char c1 = o1->name[i];
        char c2 = o2->name[i];
        if(c1 >= 'A' && c1 <= 'Z'){
            c1 += 32;
        }
        if(c2 >= 'A' && c2 <= 'Z'){
            c2 += 32;
        }
        if(c1 != c2){
            return false;
        }
    }
    if(o1->price != o2->price){
        return false;
    }

    return true;
}

int main(){
    good* o1 = new good;
    good* o2 = new good;

    cin >> o1->name >> o1->price >> o1->company;
    cin >> o2->name >> o2->price >> o2->company;

    if (isEqual(o1, o2)){
        cout << o1->name << " is equal." << endl;
    }
    else{
        cout << o1->name << " and " << o2->name << " is not equal." << endl;
    }

    delete o1;
    delete o2;

    return 0;
}