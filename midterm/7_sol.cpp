#include <iostream>
#include <string>

using namespace std;

int decode(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : 1;
    }
}

int  main_7() {
    string s;
    cin >> s;

    char prev = s.at(0);
    int n = decode(prev);

    for (int i=1;i<s.length();i++) {
        int a = decode(s.at(i));
        int b = decode(prev);
        //cout << "n=" << n << ",a=" << a << ", b=" << b << endl;

        if (a > b) {
            n = n - b + (a - b);
        } else {
            n = n + a;
        }

        prev = s.at(i);
    }

    cout << n << endl;
}
