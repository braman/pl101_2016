#include <iostream>
#include <vector>

using namespace std;

namespace stud {

    typedef struct {
        int id;

    } student;

    void prints(stud::student s) {
        printf("Hello");
    }

    void addStudent(vector<student> &all) {

    }

}

namespace stud_fs {

    typedef struct {
        int id;
    } student;

    void prints(stud::student s) {
        printf("Hello ");
    }

    void addStudent(vector<student> all) {

    }

}

using namespace stud;

int main()
{
    stud::student s = {1};


    stud::prints(s);

    cout << "Hello world!" << endl;
    return 0;
}
