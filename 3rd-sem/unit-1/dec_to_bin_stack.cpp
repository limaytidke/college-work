#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> remainders;
    int num;
    cout << "Enter number: ";
    cin >> num;

    while (num != 0) {
        remainders.push(num % 2);
        num /= 2;
    }

    while (!remainders.empty()) {
        cout << remainders.top();
        remainders.pop();
    }

    return 0;
}
