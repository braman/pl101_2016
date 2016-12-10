#include <iostream>

using namespace std;


void forLoop(int n) { //n = 8....0
    if (n == 0) {
        return;
    }
    cout << "looping..." << endl;
    forLoop(n-1);
}

int forLoop2(int n) { //n = 8....0
    if (n == 0) {
        return 0;
    }

    return n + forLoop2(n-1);
}

int forLoop3(int n) { //n = 8....0
    if (n == 0) {
        return 0;
    }

    if (n % 2 ==0) {
        return forLoop3(n-1);
    }

    return n + forLoop3(n-1);
}

int fib1(int i, const int n, int a, int b) {
    if (i == n-1) {
        return b;
    }

    return fib1(++i, n, b, a + b);
}
//    1 + fib1(++i, n, 1, 2);
//    1 + 1 + fib1(++i, n, 2, 3);
//    1 + 1 + 2 + fib1(++i, n, 3, 5);
//    1 + 1 + 2 + 3 + fib1(++i, n, 5, 8);
//    1 + 1 + 2 + 3 + 5 + fib1(++i, n, 8, 13);
//    1 + 1 + 2 + 3 + 5 + 8 + fib1(++i, n, 13, 21);
//    1 + 1 + 2 + 3 + 5 + 8 + 13 + fib1(++i, n, 21, 34);
//    1 + 1 + 2 + 3 + 5 + 8 + 13 + 21 + fib1(++i, n, 34, 55);
//    1 + 1 + 2 + 3 + 5 + 8 + 13 + 21 + 34 + fib1(++i, n, 55, 88);



int main() {

    //forLoop(10);
    //int r1 = forLoop2(10);
    //cout << r1 << endl;

    //int r2 = forLoop3(11);
    //cout << r2 << endl;

    int f1 = fib1(0, 10, 0, 1);
    cout << f1 << endl;

}
