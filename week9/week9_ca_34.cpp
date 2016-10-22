#include <iostream>
#include <math.h>

#define DIFF 0.0000001

using namespace std;

double solve(double A, double B, double C, double D) {
    double x = 50;
    double f = 0;
    bool b   = false;
    /*
    if (-C - D > 0 && -C - D <= 1e-7) {
        double d = 1e-7;
        return d;
    }
    */
    int c = 0;
    do {
        f = A * x + B * sqrt(x * x * x) - C * exp(-x/50) - D;
        cout << "x=" << x << ",f=" << f << endl;

        if (f > 0) {
            x = x - x / 2;
        } else {
            x = x + x / 2;
        }

        if (++c > 10000) {
            break;
        }

        b = f > 0 && f <= DIFF;
    } while (!b);


    return x;
}

int main() {

    int T;
    double A, B, C, D;

    double x = 50;

    cin >> T;

    for (int i=0;i<T;i++) {
        cin >> A >> B >> C >> D;
        double r = solve(A, B, C, D);
        cout << r << " ";
    }

    cout << endl;

    cin >> T;

    return 0;
}
