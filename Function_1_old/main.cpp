#include <iostream>
using namespace std;

bool isLucky(int number) {
    if (number < 100000 || number > 999999) return false;

    int firstHalf = number / 1000;
    int secondHalf = number % 1000;

    int sum1 = 0, sum2 = 0;
    while (firstHalf > 0) {
        sum1 += firstHalf % 10;
        firstHalf /= 10;
    }
    while (secondHalf > 0) {
        sum2 += secondHalf % 10;
        secondHalf /= 10;
    }

    return sum1 == sum2;
}

int main() {
    int number;
    cout << "Enter a six-digit number: ";
    cin >> number;
    if (isLucky(number))
        cout << "The number is lucky!" << endl;
    else
        cout << "The number is not lucky." << endl;
    return 0;
}
