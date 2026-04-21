#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int blanks = 0;
    int count[26] = {0};

    getline(cin, sentence);

    if (sentence.length() > 50) {
        cout << "50자 초과" << endl;
        return 1;
    }
    else{   
        for (int i = 0; i < sentence.length(); i++) {
            if(sentence[i] == ' ') {
                blanks++;
            }
            else if ((sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= 'a' && sentence[i] <= 'z')) {
                if (sentence[i] >= 'a' && sentence[i] <= 'z'){
                    char ch = sentence[i] - 32;     //소문자 -> 대문자 크기로 바꿔서 계산
                    count[ch - 'A']++;
                }
                else {
                    count[sentence[i] - 'A']++;
                }
            }
        }
    }

    cout << "blanks : " << blanks << endl;

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << char('A' + i) << " : " << count[i] << endl;
        }
    }
    return 0;
}