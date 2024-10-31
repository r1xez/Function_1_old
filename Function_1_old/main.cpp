#include <iostream>
using namespace std;

int rangeSum(int a, int b) {
    int sum = 0;
    for (int i = min(a, b); i <= max(a, b); ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum of range: " << rangeSum(a, b) << endl;
    return 0;
}
