#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> remainders;
    int num;
    cout << "Enter number: ";
    cin >> num;

    while (num != 0) {
        remainders.push_back(num % 2);
        num /= 2;
    }

    reverse(remainders.begin(), remainders.end());

    for (int i : remainders) cout << i;

    return 0;
}
