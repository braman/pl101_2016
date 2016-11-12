#include <iostream>
#define AGE 25
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define square(a) ((a) * (a))
#define forN(n)  for(int i=0;i<n;i++)
#define hello10Times() for(int i=0;i<10;i++) \
        printf("Hello World\n");

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main_w12_pre() {

    int m = ((1) > (5) ? (1) : (5));
    int m2 = ((1) > (5) ? (1) : (5));
    int m3 = ((1) > (5) ? (1) : (5));
    int m4 = ((1) > (5) ? (1) : (5));
    int m5 = ((1) > (5) ? (1) : (5));

    int m6 = max(1, 5);

    int s = square(2);

    printf("%d\n", AGE);
    printf("max is %d\n", m);
    printf("square:%d\n", s);

    int i = 123;

    forN(10) {
        forN(1) {
            printf("Hello World - %d\n", i);
        }
    }

    hello10Times();

    return 0;
}
