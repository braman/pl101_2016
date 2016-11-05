#include <iostream>
#include <vector>

using namespace std;

typedef struct {
    int id;
    int age;
    bool gender;
    string name;
    int phone;
} student;

int ids = 1;

void prints(student s) {
    cout << "Student - " << s.name << endl;
    cout << "    ID  - " << s.id << endl;
    cout << "    age - " << s.age << endl;
    cout << " gender - " << (s.gender ? "male" : "female") << endl;
    cout << " phone  - " << s.phone << endl;
}

void printAll(vector<student> &v) {
    for(vector<student>::iterator i = v.begin();i != v.end();i++) {
        prints(*i);
    }
}

void deleteStudent(vector<student> &v) {
    cout << "enter student id to delete:" << endl;
    int id;
    int c = 0;

    cin >> id;

    for(int i=0;i<v.size();i++) {
        //cout << *i << endl;
        if (v[i].id == id) {
            v.erase(v.begin()+i);
            c++;
        }
    }

    cout << c << " row(s) were deleted!" << endl;

}
int addStudent(vector<student> &v) {
    string name;
    int age;
    bool gender;
    int phone;

    cout << "Enter name:";
    cin >> name;

    cout << "Enter age:";
    cin >> age;

    cout << "Enter gender:";
    char g;
    cin >> g;

    gender = g == 'M';

    cout << "Enter phone:";
    cin >> phone;


    student s = {ids++, age, gender, name, phone};

    v.push_back(s);

    cout << "new student was added!" << endl;
}

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1.Add Student" << endl;
    cout << "2.Display students" << endl;
    cout << "3.Remove students by id" << endl;
    cout << "0.Exit" << endl;
}

int main() {
    vector<student> students;

    int cmd = 0;


    do {
        displayMenu();

        cin >> cmd;

        switch(cmd) {
            case 1:
                addStudent(students);
            break;
            case 2:
                printAll(students);
            break;
            case 3:
                deleteStudent(students);
            break;
            case 0: return 0;
            default:
                cout << "unknow command" << endl;


        }


    } while (cmd > 0);

    //prints(s);

    return 0;
}
