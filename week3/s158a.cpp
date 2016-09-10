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
	int n, k;
	cin >> n >> k;
	
	int a[n];
	
	for (int i=0;i<n;i++) {
		cin >> a[i];
		// cout << a[i] << endl;
	}
	
	int count = 0;
	
	for (int i=0;i<n;i++) {
		if (a[i] >= a[k-1] && a[i] > 0) {
			count++;
		}
	}
	
	cout << count;
	
	return 0;
}
