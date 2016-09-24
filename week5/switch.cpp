#include <iostream>

using namespace std;

int main2(int argc, char ** argv) {

    int a;
    cin >> a;

    switch(a) {
        case 1:
            cout << "Hello1" << endl;
            cout << "Hello1" << endl;
            cout << "Hello1" << endl;
        case 2: cout << "Hello2" << endl; break;
        case 3: cout << "Hello3" << endl; break;
        case 4: cout << "Hello4" << endl; break;
        case 5: cout << "Hello5" << endl; break;
        default: cout << "nothing" << endl;
    }
}

int main_old()
{


    //for, while, do while, if, switch
    //array
    //recursion

    int a = 1; //1,2,3,10, 500
    cout << "enter a:" << endl;
    cin >> a;

    if (a == 1) {
        cout << "1";
    } else if (a == 2) {
        cout << "2";
    } else if (a == 3) {
        cout << "3";
    } else if (a == 10) {
        cout << "10";
    } else if (a == 500) {
        cout << "500";
    } else if (a == 1000) {
        cout << "1000";
    }



    return 0;
}
