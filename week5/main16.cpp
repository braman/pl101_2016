#include <iostream>

using namespace std;

int main1()
{

    int N;
    cin >> N;

    for (int i=0;i<N;i++) {
        int k = 0, avg = 0, c = -1;

        do {
            cin >> k;
            avg = avg + k;//2+3+7
            c++; //3
        } while (k != 0);

        avg = avg / c;
        cout << avg << " ";
    }


    return 0;
}
