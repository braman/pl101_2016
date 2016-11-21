#include <iostream>

#define foriN(i,N) for(;i<N;++i)

//as bonus

double minOutputRate(int t[],
                     int size_arr_t,
                     int x[],
                     int size_arr_x,
                     int C) {

    double y[size_arr_x];

    int i = 0;

    foriN(i, size_arr_x) {

    }


    return 0;
}

int main_w13_tc2() {

    int t1[] = {3, 3};
    int x1[] = {1, 2};
    int C1   = 3;

    double r1 = minOutputRate(t1, 2, x1, 2, C1);

    printf("r1=%.6f\n", r1);

    return 0;
}
