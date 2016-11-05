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

int main() {

    student s = {ids++, 25, true, "Test name", 707654622};

    vector<student> students;

    prints(s);

    return 0;
}
