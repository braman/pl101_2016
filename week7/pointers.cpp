#include <iostream>
#include <string>

using namespace std;

void sum1(int a, int b, long long s) {
    s = a + b;
}

void sum2(int a, int b, long long* s) {
    cout << "value of s is " << *s << endl;
    *s = a + b;
}

int array_len(int* a) {
    int s = sizeof(a)/sizeof(*a);
    cout << "size=" << s << endl;
    return s;
}

int main5() {
/*
    int  n = 10; //32, 64, etc
    int* p = &n; //32 bit or 64 bit
    int nv = *p;

    int a[123];

    int len = sizeof(a) / sizeof(a[0]);
    int len2 = array_len(a);

    cout<<"size of a=" << len << endl;

    cout << "value:" << n << endl;
    cout << "pointer:" << p << endl;
    cout << "deref:" << nv << endl;

    return 0;


*/


    long long s = 0;
    cout << "s=" << s << endl;
    sum1(1,2, s);

    cout << "s1=" << s << endl; //3, aibar=0

    s = 0;
    sum2(1,2, &s);
    cout << "s2=" << s << endl; //3






    cout << "sizeof(s)=" << sizeof(s) << endl;
    cout << "sizeof(&s)=" << sizeof(&s) << endl;


    //return 0;
}
