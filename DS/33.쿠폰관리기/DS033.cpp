#include <iostream>
#include "DS033.h"
using namespace std;

int main(){
    int size;
    cin >> size;
    CouponStack stack(size);
    bool quit = false;
    char cmd;
    elem c;
    while(!quit){
        cin >> cmd;
        if(cmd == '+'){
            cin >> c.rank;
            getchar();
            getline(cin, c.name);
            stack.push(c);
        }
        else if(cmd == '-'){
            elem* rm = stack.pop();
            if(rm->rank == 0){
                cout << "Empty" << endl;
            }
            else{
                cout << rm->rank << "등 - " << rm->name << endl;
            }
            delete rm;

        }
        else if(cmd == 'q'){
            quit = true;
        }
        else if(cmd == 'p'){        //명령문 추가(연습): stack 전체 출력
            stack.print();
        }
        else if(cmd == 'r'){        //명령문 추가(연습): stack pop하면서 전체 출력
            stack.rprint();
        }
    }

    return 0;
}

