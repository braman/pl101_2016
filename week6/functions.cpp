#include <iostream>
#include <string>

using namespace std;

//1)
int f(int a, int b){
     int sum = 0;
     for(int i = a;i<=b;i++){
         sum+=i;
     }
     return sum;
}
//2)
double half(int a){
    return (double)a/2;
   }

//3)
string toString(int num){
      int len = 0;
      int tmp = num;
      while(tmp != 0){
           tmp/=10;
           len++;
      }
      char res[len];
      for(int i = 0;i<len;i++){
          res[len-i-1] = num%10;
          num/=10;
      }
      return res;
}
//4)
int toInt(string str){
       int ten = 1;
       int res = 0;
       for(int i  =  str.length()-1;i>=0;i--){
              res+=(str[i]-'0')*ten;
        ten*=10;
       }
       return res;
}

//5)
int sqrt(int a){
     if(a == 1) return 1;
     for(int i  = 1;i<=a/2;i++){
        if(i*i>a) return i-1;
     }
     return 1;
   }

//6)
   int sqr(int a){
       return a*a;
   }

   int sum(int a, int b){
         int res = 0;
    for(int i = a;i<=b;i++){
        res+=sqr(i);
        }
         return res;
   }

//b) Recursion:

//1)
int sum2(int a, int b){
        if(a == b) return a;
    return a + sum2(a+1, b);
   }


//2)
int fibDyanmic(int index){ // 1 based index
    if(index == 1 || index == 2) return 1;
    int p = 1;
        int pp = 1;
        for(int i = 3;i<=index;i++){
          int tmp  = pp;
           pp = p+pp;
              p = tmp;
        }
    return pp;
}

//3)
int fibRecursive(int index){ // 1 based index
    if(index == 1 || index == 2) return 1;
    return fibRecursive(index-1) + fibRecursive(index-2);
   }

int main() {

}
