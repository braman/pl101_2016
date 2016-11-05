#include <iostream>

using namespace std;

void or1(int a, int b) {
    int c = a | b;
    cout << "or(" << a << "," << b << ")=" << c << endl;
}

void and1(int a, int b) {
    int c = a & b;
    cout << "and(" << a << "," << b << ")=" << c << endl;
}

void xor1(int a, int b) {
    int c = a ^ b;
    cout << "xor(" << a << "," << b << ")=" << c << endl;
}

void sl(int a, int b) {
    int c = a << b;
    cout << "shift left (" << a << " to " << b << " bits)=" << c << endl;
}

void sr(int a, int b) {
    int c = a >> b;
    cout << "shift right (" << a << " to " << b << " bits)=" << c << endl;
}

void not1(int a) {
    int c = !a;
    cout << "not(" << a << ")=" << c << endl;
}
int main_w11_bits() {
    or1(1,2);
    and1(1,2);
    xor1(1,2);
    sl(1, 1);
    sr(1, 1);
    not1(0);

    return 0;
}
