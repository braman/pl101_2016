#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b) {
    //cout << "a=" << a << ",b=" << b << endl;

    a = a - b;

    if (a == 0) {
        return b;
    } else {
        int tmp = a;
        a = b;
        b = tmp;
    }

    return gcd(a, b);
}

int  main_6() {
    int a,b;

    cin >> a >> b;

    int r = gcd(a, b);

    cout << r << endl;

}
