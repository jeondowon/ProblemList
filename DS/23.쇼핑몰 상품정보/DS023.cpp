#include <iostream>
using namespace std;

class Product{
    public:
    Product* next;
    char name[100];
    int price;
    int discount_rate;
    char manufact[100];
    char size[100];
    Product();
    void input();       //상품명(공백포함), 가격, 할인률, 용량, 제조사(공백미포함)
    void print();
    int get_discount_price(int p, int d);
};

Product::Product(){
    next = NULL;

    name[0] = '\0';
    price = 0;
    discount_rate = 0;
    manufact[0] = '\0';
    size[0] = '\0';
}

void Product::input(){
    cin.get();
    cin.getline(name, 100);
    cin >> price >> discount_rate >> size >> manufact;
}

int Product::get_discount_price(int p, int d){
    return (p - (p * d / 100));
}

void Product::print(){
    cout << get_discount_price(price, discount_rate) << " (";
    if(discount_rate != 0){
        cout << '-';
    }
    cout << discount_rate << "%)\t"
        << name << " "
        << size << " "
        << manufact << endl;

}

class productList{
    Product* head;
    Product* tail;

    public:
    void add_product_tail(Product p);
    void print_list();
    productList();
};

productList::productList(){
    head = NULL;
    tail = NULL;
}

void productList::add_product_tail(Product p){
    Product* good = new Product;
    *good = p;
    if(head == NULL){
        good->next = head;
        head = good;
        tail = good;
    }
    else{
        good->next = tail->next;
        tail->next = good;
        tail = good;
    }
}

void productList::print_list(){
    Product* p;
    for(p = head; p != NULL; p = p->next){
        p->print();
    }
}

int main(){
    productList list;

    int input_num = 0;
    while(input_num != 3){
        cout << "1. Add  2. List  3. Quit > ";
        cin >> input_num;
        if(input_num == 1){
            Product p;
            p.input();
            list.add_product_tail(p);
        }
        else if(input_num == 2){
            list.print_list();
        }
    }


    return 0;
}