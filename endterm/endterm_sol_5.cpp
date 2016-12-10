#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

#define foriN(i,N) for(;i<N;i++)
#define MAX 1001
using namespace std;

int main() {
    int a[MAX];

    int i = 0;

    foriN(i, MAX) {
        a[i] = 0;
    }

    int n, t;

    cin >> n;

    i = 0;
    foriN(i, n) {
        cin >> t;
        a[t]++;
    }

    int total = 0, maxH = 0;
    i = 0;

    foriN(i, MAX) {
        if (a[i] > maxH) {
            maxH = a[i];
        }
        if (a[i] > 0) {
            total++;
        }
    }

    cout << maxH << " " << total << endl;
}
