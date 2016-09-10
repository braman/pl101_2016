#include <iostream>
#include <string>

/*
@author: braman
http://codeforces.com/problemset/problem/1/A
*/

// #define <name> <what you want>
#define int64 unsigned long long int 

using namespace std;

int main()
{
	int n = 5;
	int s[n];
	s[0]=70;
	s[1]=80;
	s[2]=90;
	s[3]=100;	
	s[4]=80;
	int avg=0;
	for(int i=0 ; i<n; i++){
		avg= avg +s[i];
	}
	avg= avg/n;
	cout << avg;
	
	return 0;
}
