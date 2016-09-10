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
	
	for (int i=1,j = 1 ; i < 10 && j % 5 != 0; i=i*2,j++) {
		cout << i << endl;
	}
	
	
	return 0;
}
