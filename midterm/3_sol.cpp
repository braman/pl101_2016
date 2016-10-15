#include <iostream>
#include <string>

using namespace std;
int  main_2() {
    string s;

    cin >> s;

    int a[26];
    for (int i=0;i<26;i++) {
        a[i] = 0;
    }

    for (int i=0;i<s.length();i++) {
        char c = s.at(i);
        /*
        switch(c) {
            case 'a' : a[0]++; break;
            case 'b' : a[1]++; break;
            case 'c' : a[2]++; break;
            case 'd' : a[3]++; break;
            case 'e' : a[4]++; break;
        }
        */


        a[c-'a']++;
    }


    for (int i=0;i<26;i++) {
        char c = 'a'+i;

        if (a[i]>0) {
            cout << c << '=' << a[i]<<endl;
        }
    }

}
