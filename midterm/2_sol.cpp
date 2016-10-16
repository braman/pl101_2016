#include <iostream>
#include <string>

using namespace std;
int  main_2() {
    string s;

    cin >> s;

    if (s.length() == 12 && s.at(0) == '+' && s.at(1) == '7') {
            for (int i=1;i<s.length();i++) {
                if (s.at(i) >= '0' && s.at(i)<= '9') {
                } else {
                    cout << "0";
                    return 0;
                }
            }


            cout << 1;
    } else if (s.length() == 11 && s.at(0) == '8') {
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
