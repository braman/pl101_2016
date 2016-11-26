#include <iostream>
#include <vector>
#include <set>
#define foriN(i,N) for(;i<N;i++)

using namespace std;
void print(vector<string> &v) {
    int j = 0;
    foriN(j, v.size()) {
            cout << v[j] << " ";
    }
}
int main1() {
    vector<int> N; //<int> - is the template parameter

    vector< vector<int> > CorrectDefinition;
    vector<vector<int> > WrongDefinition; // Wrong: compiler may be confused by 'operator >>'

    bool a = true;

    int b = 0;

    if (!a) {
        cout << "yes!" << endl;
    }

    if (!b) {
        cout << "b is ok!" << endl;
    }

    vector<string> data(20, "unknown");
    int i = 0;
    foriN(i, 20) {
        cout << data[i] << endl;
    }
    vector< vector<string> > matrix(5, vector<string>(5, "unknown"));
    i = 0;
    int j = 0;
    foriN(i, matrix.size()) {
        j = 0;
        print(matrix[i]); //vector<string> copyOfM = matrix[i];
         //print(copyOfM);
        cout << endl;
    }
    return 0;
}
int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);

    int i = 0;
    set<int>::reverse_iterator it = s.rbegin();

    while (it != s.rend()) {
        cout << *it << endl;
        it++;
    }
    return 0;
}

/*
 template<typename T1, typename T2> struct mypair {
      T1 first;
      T2 second;
 };

 typedef struct mypair mypair;
 typedef unsigned int myint;

int main() {
    myint m = 123;

    pair p<int, string>;
    p.first = 0;
    p.second = "Hello World";

    return 0;
}
*/
