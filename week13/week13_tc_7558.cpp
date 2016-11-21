#include <iostream>

#define foriN(i, N) for(i=0;i<N;++i)
using namespace std;

int numberOfRejections(int arr_size, int requests[]) {
    int i = 0;
    int rejections = 0;
    int billboard[101];

    foriN(i, arr_size) {
        if (billboard[requests[i]] != 1) {
            billboard[requests[i]] = 1;
        } else {
            ++rejections;
        }
    }

    return rejections;
}

int main_w13_tc1() {
    int t1[] = {1,2,1,2};

    int r1 = numberOfRejections(4, t1);

    printf("r1=%d \n", r1);

    int t2[] =
        {100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
         100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
         100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
         100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
         100, 100, 100, 100, 100, 100, 100, 100, 100, 100
        };

    int r2 = numberOfRejections(50, t2);

    printf("r2=%d \n", r2);


    return 0;
}
