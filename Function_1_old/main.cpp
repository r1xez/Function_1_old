#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < abs(exponent); ++i) {
        result *= base;
    }
    if (exponent < 0) result = 1 / result;
    return result;
}

int main() {
    double base;
    int exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result: " << power(base, exponent) << endl;
    return 0;
}
