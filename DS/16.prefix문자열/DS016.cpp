#include <iostream>
#include <string>
using namespace std;

void findPrefix(string* w, string* pre){
    int i = 0;
    while(true){
        if(w[0][i] == '\0' || w[1][i] == '\0' || w[2][i] == '\0'){
            break;
        }
        if(w[0][i] == w[1][i] && w[1][i] == w[2][i]){
            *pre += w[0][i];
        }
        else{
            break;
        }
        i++;
    }
}

int main (){
    string *word;
    word = new string[3];

    for (int i = 0; i < 3; i++){
        cin >> word[i];
    }
    string prefix = "";
    findPrefix(word, &prefix);

    if (prefix == ""){
        cout << "?" << endl;
    }
    else{
        cout << prefix << endl;
    }

    delete[] word;

    return 0;
}