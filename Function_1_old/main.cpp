#include <iostream>
#include <string>
using namespace std;

void printCard(string rank, string suit) {
    cout << "Card: " << rank << " of " << suit << endl;
}

int main() {
    string rank, suit;
    cout << "Enter card rank (e.g., Ace, 2, 10, Jack): ";
    cin >> rank;
    cout << "Enter card suit (e.g., Hearts, Diamonds): ";
    cin >> suit;
    printCard(rank, suit);
    return 0;
}
