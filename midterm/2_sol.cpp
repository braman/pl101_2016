#include <iostream>
#include <string>

using namespace std;
int  main_1() {
    string s;

    cin >> s;

    if (s.at(0) == '+' && s.length() == 12) {
            for (int i=1;i<s.length();i++) {
                if (s.at(i) >= '0' && s.at(i)<= '9') {
                } else {
                    cout << "0";
                    return 0;
                }
            }


            cout << 1;
    } else if (s.at(0) == '8' && s.length() == 11) {
            for (int i=1;i<s.length();i++) {
                if (s.at(i) >= '0' && s.at(i)<= '9') {
                } else {
                    cout << "0";
                    return 0;
                }
            }
    } else {
            cout << 0;
        }
}
