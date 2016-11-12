#include <iostream>
#include <string>
using namespace std;
void test1() {
    int n;
    char c;
    char str[100];
    //scanf("%x", &n);
    //scanf("%c", &c);
    scanf("%s", &str);
    //printf("2");
    //printf("%c", c);
    printf("%s", str);
}
void test2() {
    float f1, f2, f3;
    scanf("%f %f %f", &f1, &f2, &f3);
    printf("%.2f - %.2f - %.2f", f1, f2, f3);
}
int main_w12_scanf() {
    //test1();
    test2();
    return 0;
}
