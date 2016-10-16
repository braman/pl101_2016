#include <iostream>
#include <string>

using namespace std;
int  main() {
    string s;

    cin >> s;

    int a = 0;

    for (int i=0;i<s.length();i++) {

        if (s.at(i) == '(') {
            a++;
        } else {
            a--;
        }

        //for the case when we start from closed bracket
        if (a < 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    if (a == 0) {
        cout << 1;
    } else {
        cout << 0;
    }


}
