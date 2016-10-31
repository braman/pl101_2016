#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int partition(int a[], int left, int right) {
    //cout << "calling partition" << endl;

    int lt = left;
    int rt = right;
    string dir = "left";        //specifies at which side is currently "empty" space
    int pivot = a[left];

    while (lt < rt) {
        if (dir == "left") {
            if (a[rt] > pivot) {
                rt = rt - 1;
            } else {
                a[lt] = a[rt];
                lt = lt + 1;
                dir = "right";
            }
        } else {
            if (a[lt] < pivot) {
                lt = lt + 1;
            } else {
                a[rt] = a[lt];
                rt = rt - 1;
                dir = "left";
            }
        }
    }
    a[lt] = pivot;       //here lt = rt - both points to empty cell where pivot should return

    return lt;
}

void quicksort(int a[], int left, int right) {

    int pivot_pos = partition(a, left, right);

    //cout << "pivot_pos=" << pivot_pos << ",l=" << left << ",r=" << right << endl;
    cout << left << "-" << right << " ";
    if (pivot_pos - left > 1) {
        quicksort(a, left, pivot_pos-1);
    }

    if (right - pivot_pos > 1) {
        quicksort(a, pivot_pos+1, right);
    }
}



int main_week10_ca_122(int argc, char ** argv) {

    int arr2[] = {38, 23, 9, 19, 113, 5, 42, 85, 71, 112};
    int N = sizeof(arr2)/sizeof(int);

    quicksort(arr2, 0, N-1);
    /*
    for (int i=0;i<N;i++) {
        cout << arr[i] <<" ";
    }
    */
    cout << endl;


    return 0;
}
