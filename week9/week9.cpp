#include <iostream>
#include <vector>

using namespace std;

int sum(int a[], int arr_len) {
    int s = 0;
    for (int i = 0;i<arr_len;i++) {
        s += a[i]; //s = s + a[i];
    }

    return s;
}





int main_week9() {
    //cout << "test" << endl;
/*
    int a[] = {1,2,3,4,5};
    //0x123, 0x124, 0x125, ...

    int *pointer = a;

    cout << "array is:" << *(pointer+1) << endl;

    int len = sizeof(a) / sizeof(int);

    int s = sum(a, len); //15

    cout << "sum is:" << s << endl;
*/

    int a[] = {1,2,3,4,5};

    vector<int> v(a, a+5);

    cout << "capacity is :" << v.size() << endl;

    cout << "vector style std:" << endl;

    v.clear();

    for(vector<int>::iterator i = v.begin();i != v.end();i++) {
        //cout << *i << endl;
        v.erase(i);
    }

    //v.pop_back();
    //vector<int>::iterator it = v.begin();

    //v.erase(it); //begin
    //v.erase(it + (v.size()-1)); //end


    //for (int i=0;i<v.size();i++) {
    //    v.erase(it + i); //end
    //}


    //cout << "vector style like array:" << endl;
    //for (int i=0;i<v.size();i++) {
    //   cout << v[i] << endl;
    //}

}
