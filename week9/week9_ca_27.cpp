#include <iostream>
#include <algorithm>

using namespace std;

void print_arr(int *a, int arr_size) {
    cout << " array = ";
    for (int i=0;i<arr_size;i++) {
        cout << *(a+i) <<" ";
    }
    cout << endl;
}

void print_line() {
    cout << "---------------" << endl;
}
int main() {

    int n;
    cin >> n;

    int a[n];

    for (int i=0;i<n;i++) {
        cin >> a[i];
    }


    int loops   = 0;
    int t_swaps = 0;

    print_arr(a, n);

    for (int j=0;j<n;j++) {
        int swaps = 0;
        for (int i=0;i<n-1;i++) {
            if (a[i] > a[i+1]) {
                cout << "swapping(" << a[i] << "," << a[i+1] << ")" << endl;
                swap(a[i], a[i+1]);
                swaps++;
                print_arr(a, n);
            }
        }
        if (swaps > 0) {
            loops++;
        }

        t_swaps += swaps;

        cout << "total - swaps=" << swaps
                << ", loops=" << loops << endl;

        print_line();
    }

    loops++;

    cout << loops << " " << t_swaps << endl;

    return 0;
}
