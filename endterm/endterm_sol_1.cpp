#include <iostream>
#include <string>
#include <algorithm>

#define foriN(i,N) for(i=0;i<N;i++)

using namespace std;

string rev(string s) {
    string s2 = "";
    const int N = s.size();
    int i = 0;

    foriN(i, N) {
        s2.push_back(s[N-i-1]);
    }

    return s2;
}

int main() {
    string s;

    cin >> s;
    int i = 0;


    int half = s.size() / 2; //5 -> 2.5

    if (s.size() % 2 == 0) {
        string s1 = s.substr(0, half);
        string s2 = s.substr(half, half);
        //string s3 = rev(s1) + rev(s2);
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        string s3 = s1 + s2;
        cout << s3;
    } else {
        string s1 = s.substr(0, half);
        string s2 = s.substr(half+1, half);
        //string s3 = rev(s1) + s[half] +  rev(s2);
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        string s3 = s1 + s[half] +  s2;
        cout << s3;
    }
}
