#include <iostream>
#include <string>

using namespace std;

class EngScore {
private:
    string name;
    int lc;
    int rc;
public:
    EngScore() {}
    EngScore(string n) : name(n) {
        int l, r;
        do {
            cout << "LC> ";
            cin >> l;
        } while(l < 0 || l > 495);
        lc = l;
        
        do {
            cout << "RC> ";
            cin >> r;
        } while(r < 0 || r > 495);
        rc = r;
    }
    
    void print() {
        cout << "[" << name << "]" << endl;
        cout << "LC - " << lc << " " << (lc >= 350 ? "Pass" : "Fail") << endl;
        cout << "RC - " << rc << " " << (rc >= 350 ? "Pass" : "Fail") << endl;
        cout << "Total - " << lc + rc << endl;
    }
};

int main() {
    string name;
    if (getline(cin, name)) {
        EngScore es(name);
        es.print();
    }
    return 0;
}
