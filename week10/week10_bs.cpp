#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int bin_search(vector<int> vect/*sorted in ascending order*/,
               int e) {

    //return index of the element e in the list

    const int N = vect.size();

    int lhs = 0;
    int rhs = N;


    int mid = 0;
    int c   = 0;

    while (lhs <= rhs) {
        mid = (lhs + rhs) / 2;

        cout << "lhs=" << lhs << ", rhs=" << rhs << ",mid=" << mid << endl;


        if (vect[mid] == e) {
            return mid;
        }

        if (vect[mid] > e) {
            rhs = mid - 1;
        } else {
            lhs = mid + 1;
        }
    }

    return -1;
}


int main() {

    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(6);
    vect.push_back(7);
    vect.push_back(8);
    vect.push_back(9);


    for (int i=0;i<vect.size();i++) {
        cout << vect[i] << " ";
    }

    cout << endl;

    int i = bin_search(vect, 7);

    cout << "index is:" << i << endl;


    return 0;
}
