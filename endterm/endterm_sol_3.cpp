#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

#define foriN(i,N) for(;i<N;i++)

using namespace std;



int main() {
    string s, t;
    cin >> s >> t;

    int a[26];

    int i = 0;
    foriN(i, 26) {
        a[i] = 0;
    }

    i = 0;

    foriN(i, s.size()) {
        int k = s[i] - 'a';
        a[k]++;
    }

    i = 0;

    foriN(i, t.size()) {
        int k = t[i] - 'a';
        a[k]--;
    }

    i = 0;
    foriN(i, 26) {
        //cout << "a[" << i << "]=" << a[i] << endl;
        if (a[i] < 0) {
            cout << char('a' + i);
        }
    }

    cout << endl;

}
