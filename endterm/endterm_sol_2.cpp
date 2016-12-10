#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

#define foriN(i,N) for(;i<N;i++)

using namespace std;

int singleNumber(vector<int>& nums) {
    int i = 0, j = 0;
    int N = nums.size();

    foriN(i, N) {
        bool ok = false;
        j = 0;
        foriN(j, N) {
            if (i != j && nums[i] == nums[j]) {
                ok = true;
                break;
            }
        }

        if (!ok) {
            return nums[i];
        }
    }

    return 0;
}



int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);

    int r = singleNumber(v);
    cout << r;
}
