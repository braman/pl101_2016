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
	int64 n, m, a;
	cin >> n >> m >> a;
  	int64 c = n / a + (n % a == 0 ? 0 : 1);
	//cout << c << endl;
	
	int64 b = m / a + (m % a == 0 ? 0 : 1);
	//cout << b << endl;
	
	int64 s = c * b;
	cout << s;
	return 0;
}
