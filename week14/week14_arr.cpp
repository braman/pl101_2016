#include <iostream>

#define N 10
#define foriN(i,n) for(;i<n;i++)
using namespace std;

int main() {
    int *a = new int[N];

    a[0] = 1;
    a[1] = 2;
    int i = 0;

    foriN(i, N) {
        cout << a[i] << " ";
    }

    delete [] a;

    int **b = new int*[N];


    int j = 0;
    foriN(i, N) {
        b[i] = new int[N];
    }

    cout << "here!" << endl;

    i = 0;

    foriN(i, N) {
        j = 0;
        foriN(j, N) {
            b[i][j] = i * 100 + j;
        }
    }

    cout << "hello";
    i = 0;

    foriN(i, N) {
        j = 0;
        foriN(j, N) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    i = 0;
    foriN(i, N) {
        delete [] b[i];
    }

    cout << endl;


    return 0;
}
