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
	int n;
	
	cin >> n;
	
	string str;
	
	for (int i=0;i<n+1;i++) {
		getline(cin, str);
		int len = str.length();
		
		if (len > 10) {
			char begin = str.at(0);
			char end   = str.at(len-1);
			int between= len - 2;
			
			cout << begin << between << end << endl;
		} else {
			cout << str << endl;
		}
		
	}
	
	return 0;
}
