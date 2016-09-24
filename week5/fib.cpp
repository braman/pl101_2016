#include <iostream>

using namespace std;

/*
<return type> <name>(<paramters delitemed with comma) {
    <function body>
    <return statement>
}
*/

int fib(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    fib(n-1) + fib(n-2);
}


int  main() {
    //int f = fib(2);
    //cout << f << endl;

    int n = 6;

    int a0 = 1;
    int a1 = 1;
    int an = 0;

    for (int i=0;i<n;i++) {
        an = a0 + a1;

        a0 = a1;
        a1 = an;


    }

    cout << an << endl;

    return 0;
}
