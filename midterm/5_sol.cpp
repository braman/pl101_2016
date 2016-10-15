#include <iostream>
#include <string>

using namespace std;
int  main_5() {
    string s;

    cin >> s;

    for (int i=0;i<=s.length();i++) {
        for (int j=0;j<i;j++) {
            cout << s.at(j);
        }
        cout << endl;
    }




}
