#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

#define foriN(i,N) for(;i<N;i++)

using namespace std;

int main() {
    vector<int> v;

    int n, t;
    cin >> n;
    int i = 0;
    foriN(i, n) {
        scanf("%d+", &t);
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    i = 0;
    foriN(i, n) {
        printf("%d+", v[i]);
    }

    cout << endl;


    return 0;
}
