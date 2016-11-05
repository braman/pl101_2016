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
    cout << "    age - " << s.age << endl;
    cout << " gender - " << (s.gender ? "male" : "female") << endl;
    cout << " phone  - " << s.phone << endl;
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
                //TODO: display all students
            break;
            case 3:
                //TODO: remove student by id
            break;
            default:
                cout << "unknow command" << endl;


        }


    } while (cmd > 0);

    //prints(s);

    return 0;
}
