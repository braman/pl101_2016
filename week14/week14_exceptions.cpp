#include <iostream>
#include <exception>

using namespace std;

struct DivisionByZeroException : public exception {
   const char * what () const throw () {
      return "Division by zero exception!";
   }
};

double divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero exception!";
    }

    return (a+0.f)/ b;
}

double divide2(int a, int b) {
    if (b == 0) {
        throw DivisionByZeroException();
    }

    return (a+0.f)/ b;
}

int main() {
    int a = 10;

    try {
        int b = divide(a, 0);
    } catch (const char * err) {
        cerr << "division by zero!" << endl;
    }

    return 0;

    try {
        int b = divide2(a, 0);
    } catch (DivisionByZeroException &e) {
        cerr << e.what() << endl;
    } catch(exception& e) {
      //Other errors
    }

    cout << "hello" << endl;

    return 0;
}

