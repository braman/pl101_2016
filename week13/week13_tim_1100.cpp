#include <iostream>
#include <algorithm>


#define foriN(i,N) for(;i<N;++i)

using namespace std;

void bbsort(int a[][2], int arr_size) {
    int i=0, j=0;
    foriN(i, arr_size-1) {
        j = i+1;
        foriN(j, arr_size) {
            if (a[i][1] < a[j][1]) {
                //swap
                int t1 = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = t1;

                int t2 = a[i][1];
                a[i][1] = a[j][1];
                a[j][1] = t2;
            }
        }
    }
}


int partition(int a[][2], int arr_size, int l, int r) {
    int p = l;
    int i = 0, j = 0;;

    foriN(i, arr_size) {
        if (a[p][1] > a[i][1]) {
            if (i - p > 1) {
                printf("bigger \n");

                for (j = i; j >= p; j--) {
                    swap(a[j][0], a[j-1][0]);
                    swap(a[j][1], a[j-1][1]);
                }


            } else {

                printf("swapping \n");

                swap(a[i][0], a[p][0]);
                swap(a[i][1], a[p][1]);
                p = i;
            }
        }
    }


}

void qs(int a[][2], int arr_size, int l, int r) {
    int pi = partition(a, arr_size, l, r);
    printf("pi=%d\n", pi);
    if (pi - 1 < l) {
        qs(a, arr_size, pi, l-1);
    }

    if (pi + 1 < r) {
        qs(a, arr_size, pi, r-1);
    }
}


int main() {

    int n;
    scanf("%d", &n);

    int a[n][2];
    int i = 0;

    foriN(i, n) {
        scanf("%d %d", &a[i][0], &a[i][1]);
    }

    //bbsort(a, n);

    /*
    int n2 = 6;

    int b[][2] = {
        {1, 5},
        {1, 1},
        {1, 2},
        {1, 6},
        {1, 7},
        {1, 0},
    };

    qs(b, n2, 0, n2-1);

    int i = 0;

    foriN(i, n2) {
        printf("%d %d\n", b[i][0], b[i][1]);
    }
    */
    qs(a, n, 0, n-1);


    i = 0;
    foriN(i, n) {
        printf("%d %d\n", a[i][0], a[i][1]);
    }

    return 0;
}
