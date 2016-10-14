#include <iostream>
#include <fstream>


int main() {
    using namespace std;


    //ofstream file("pl101.txt", ios::in); //input
    ifstream file("pl101.txt"); //input

    if (file.is_open()) {
        cout << "File exists" << endl;
    } else {
        cerr << "File doesn't exist" << endl;
        exit(1);
    }

    //file << "Hello World" << endl;
    //file << "Hello Class!!!" << endl;

    while (file) {
        string line;
        int a;

        file >> line;
        cout << line << endl;

        file >> a;
        cout << a << endl;

        file >> line;
        cout << line << endl;
    }


    return 0;
}
