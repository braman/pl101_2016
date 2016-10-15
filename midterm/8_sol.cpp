#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int  main() {
    int MAX = 100;

    int n;

    cin >> n;

    for (int a=1;a<=MAX;a++) {
        for (int b=1;b<=MAX;b++) {
            int l = pow(a, n) + pow(b, n);

            for (int c=1;c<=MAX;c++) {
                int r = pow(c, n);

                if (l == r) {
                    cout << a << " " << b << " " << c << endl;
                    return 0;
                }
            }
        }
    }



}
