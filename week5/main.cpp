#include <iostream>
#include <math.h>

using namespace std;

int main3()
{

    int N;

    cin >> N;

    for (int i=0;i<N;i++) {
        double d;

        cin >> d;

        int r = floor(d * 6);
        r++;

        cout << r << " ";
    }


    return 0;
}
