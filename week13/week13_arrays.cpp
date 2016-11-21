#include <iostream>

#define foriN(i, n) for(i=0;i<n;++i)
using namespace std;
int sum2d(int rows, int cols, int a[][3]) {
    int i = 0,j = 0;
    int sum = 0;
    foriN(i, rows) {
        foriN(j, cols) {
            sum += a[i][j];
        }
    }
    return sum;
}

int sum3d(int x, int y, int z, int a[][3][3])
{
    int i = 0,j = 0, k = 0;
    int sum = 0;

    foriN(i, x) {
        foriN(j, y) {
            foriN(k, z) {
                sum += a[i][j][k];
            }
        }
    }
    return sum;
}

int main_w13_arr()
{
    int d2[][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    int d3[][3][3] = {
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18},
        }
    };

    int sum2 = sum2d(2, 3, d2);

    printf("sum2d = %d \n", sum2);

    int sum3 = sum3d(2, 3, 3, d3);

    printf("sum3d = %d \n", sum3);

    return 0;
}
