#include <iostream>
#include <string>

using namespace std;
int  main_3() {
    string s;

    cin >> s;

    int a = 0;

    for (int i=0;i<s.length();i++) {

        if (s.at(i) == '(') {
            a++;
        } else {
            a--;
        }
    }

    if (a == 0) {
        cout << 1;
    } else {
        cout << 0;
    }


}
