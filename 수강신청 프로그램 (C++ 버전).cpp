#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#define MAX 100

using namespace std;
string kname[2] = {"A+~F", "P/F"};

class MyClass {
private:
	int code;
	string name;
	int unit;
	int grading;
public:
    MyClass(int ncode, string nname, int nunit, int ngrading) {
        code = ncode; name = nname; unit = nunit; grading = ngrading;
    }
    ~MyClass() {}
    int getCode() { return code; }
    string getName() { return name; }
    int getUnit() { return unit; }
    int getGrading() { return grading; }
    void setCode(int newcode) { code = newcode; }
    void setName(string newname) { name = newname; }
    void setUnit(int newunit) { unit = newunit; }
    void setGrading(int newgrading) { grading = newgrading; }
    string toString() {
        stringstream sstm;
        sstm << "[" << code << "] " << name << " [credit " << unit << " - " + kname[grading-1] << "]";
        return sstm.str();
    }
    string toStringSave() {
        stringstream sstm;
        sstm << code << " " << name << " " << unit << " " << grading;
        return sstm.str();
    }
};

class MyClassManager {
private:
    MyClass* allclasses[MAX];
    MyClass* myclasses[10];
    int count;
    int mycount;
public:
    MyClassManager() {
        count = 0; mycount = 0;
    }
    ~MyClassManager() {
        for(int i=0; i<count; ++i) delete allclasses[i];
    }
    int getCount() { return count; }
    int getMyCount() { return mycount; }

    void loadData(string filename);
    void printAllClasses();
    void findClasses(string name);
    void saveAllClasses(string filename);

    void addClass();
    void editClass();

    void applyMyClass();
    void printMyClasses();
    void saveMyClasses(string filename);
};

int main() {
	int no;
    int quit = 0;
	string name;

	MyClassManager manager;
	manager.loadData("classes.txt");

	while(!quit) {
		cout << "Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit\n";
		cout << ">> Menu? > ";
		if (!(cin >> no)) break;
        switch(no) {
            case 1: 
			    cout << "> 1.Print All Classes\n";
	    		manager.printAllClasses();
                break;
            case 2:
			    cout << "> 2.Add a Class\n";
    			manager.addClass();
                break;
		    case 3:
    			cout << "> 3.Modify a Class\n";
	    		manager.editClass();
                break;
            case 4:
            	cout << "> 4.Search a Class\n";
			    cout << ">> Enter class name > ";
			    cin >> name;
    			manager.findClasses(name);
                break;
		    case 5:
    			cout << "> 5.Apply a class\n";
	    		manager.applyMyClass();
		    	cout << manager.getMyCount() << " classes has been applied.\n";
                break;
    		case 6:
    			cout << "> 6.My classes\n";
	    		manager.printMyClasses();
                break;
    		case 7:
    			cout << "> 7.Save\n";
	    		manager.saveMyClasses("myclasses.txt");
		    	cout << "\n> All my classes ware saved to my_classes.txt.\n";
			    manager.saveAllClasses("classes.txt");
			    cout << "\n> All of class list ware saved to classes.txt.\n";
                break;
            case 0:
                quit = 1;
                break;
		}
	}
	return 0;
}

void MyClassManager::loadData(string filename) {
    string name;
    int code, unit, grading;
	ifstream file(filename);
    if (!file.is_open()) return;
	while(true) {
		if(!(file >> code >> name >> unit >> grading)) break;
        allclasses[count] = new MyClass(code, name, unit, grading);
		count++;
	}
	file.close();
    cout << count << " classes are loaded.\n";
}

void MyClassManager::printAllClasses() {
	for (int i=0; i<count; i++) {
		cout << allclasses[i]->toString() << endl;
	}
}

void MyClassManager::saveAllClasses(string filename) {
	ofstream file(filename);
	for(int i=0; i<count; i++) {
		file << allclasses[i]->toStringSave() << endl;
	}
	file.close();	
}

void MyClassManager::findClasses(string name) {
	int found = 0;
	cout << "Searching keyword: " << name << endl;
	for(int i=0; i<count; i++) {
		if(allclasses[i]->getName().find(name) != string::npos) {
		    cout << allclasses[i]->toString() << endl;
			found++;
		}
	}
	cout << found << " classes found.\n";
}

void MyClassManager::addClass() {
    string name;
    int code, unit, grading;
	cout << ">> code number > ";
	cin >> code;
    for(int i=0; i<count; i++){
        if(allclasses[i]->getCode() == code){
            cout << ">> Code duplicated! Retry.\n";
            return;
        }
    }
	cout << ">> class name > ";
	cin >> name;
	cout << ">> credits > ";
	cin >> unit;
	cout << ">> grading (1: A+~F, 2: P/F) > ";
	cin >> grading;

    allclasses[count++] = new MyClass(code, name, unit, grading);
}

void MyClassManager::editClass() {
	int code;
	cout << ">> Enter a code of class > ";
	cin >> code;
    int idx = -1;
    for(int i=0; i<count; i++){
        if(allclasses[i]->getCode() == code){
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        cout << "> No such class.\n";
        return;
    }
    cout << "> Current: " << allclasses[idx]->toString() << endl;
    cout << "> Enter new class name > "; 
    string name; cin >> name;
    cout << "> Enter new credits > ";
    int unit; cin >> unit;
    cout << "> Enter new grading(1:Grade, 2: P/F) > ";
    int grading; cin >> grading;

    allclasses[idx]->setName(name);
    allclasses[idx]->setUnit(unit);
    allclasses[idx]->setGrading(grading);
    cout << "> Modified.\n";
}

void MyClassManager::applyMyClass() {
    int cmd = 1;
    while(cmd == 1){
        cout << ">> Enter a class code > ";
        int code; cin >> code;
        int idx = -1;
        for(int i=0; i<count; i++){
            if(allclasses[i]->getCode() == code){ idx = i; break; }
        }
        if (idx == -1) {
            cout << ">> No such code of class.\n";
        } else {
            bool dup = false;
            for(int i=0; i<mycount; i++){
                if(myclasses[i]->getCode() == code) dup = true;
            }
            if (dup) {
                cout << ">> Already applied.\n";
            } else {
                if (mycount < 10) {
                    myclasses[mycount++] = allclasses[idx];
                }
            }
        }
        cout << ">> Add more?(1:Yes 2:No) > ";
        cin >> cmd;
    }
}

void MyClassManager::printMyClasses() {
    int total_credits = 0;
    for(int i=0; i<mycount; ++i){
        cout << i+1 << ". " << myclasses[i]->toString() << endl;
        total_credits += myclasses[i]->getUnit();
    }
    cout << "All : " << total_credits << " credits\n";
}

void MyClassManager::saveMyClasses(string filename) {
    ofstream file(filename);
    file << "My Classes\n";
    int total_credits = 0;
    for(int i=0; i<mycount; ++i){
        file << i+1 << ". " << myclasses[i]->toString() << endl;
        total_credits += myclasses[i]->getUnit();
    }
    file << "All : " << mycount << " classes, " << total_credits << " credits\n";
    file.close();
}
