#include <iostream>
#include <string>

using namespace std;



int main() {
    //c language style string
    /*
    char  *s0  = "1234";
    cout << s0 << endl;

    char c1 = s0[3];
    cout << c1 << endl;
    */

    //c++ style string
    string s1 = "Hello World";
    string *s11 = &s1;
    //the length of string
    cout << "s1 length:" << (*s11).size() << endl; //dereference of pointer to string
    cout << "s1 length:" << s11->size() << endl;

    //replace function
    s1.replace(6, 5, "Almaty"); //replace function
    cout << "Replace: " << s1 << endl;

    //substring function
    string s2 = s1.substr(0, 5); //returns hello
    cout << "Substring: " << s2 << endl;

    //checking if string is empty
    string s3 = "";

    if (s3.empty()) {
        cout << "s3 is empty" << endl;
    } else {
        cout << "s3 is not empty" << endl;
    }

    //append string to end
    s3.append("appended");
    //s3 = s3 + "1234";
    cout << "appended string to s3: " << s3 << endl;

    //find if string contains substring
    string s4 = "kazakh-british technical british university";

    int pos1 = s4.find("british1");

    cout << "pos1=" << pos1 << endl;

    if (pos1 != string::npos) {
        cout << "string :" << s4 << ", contains word: british"<< endl;
    } else {
        cout << "string :" << s4 << ", doesn't contain word: british"<< endl;
    }

    string s5 = "ping pong ping pong ping";

    int last_ping = s5.rfind("ping");

    if (last_ping != string::npos) {
        cout << "the string: " << s5 << ", has last ping position:" << last_ping << endl;
    }

    int first_pong = s5.find("pong");

    if (first_pong != string::npos) {
        cout << "the string: " << s5 << ", has first pong position:" << first_pong << endl;
    }

    return 0;
}
