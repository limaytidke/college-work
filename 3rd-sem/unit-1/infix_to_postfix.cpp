#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> op;
    stack<char> opd;
    string oper = "(+-*/)";
    string s = "(a+b+v";

    for (auto i : s) {
        if (find(oper.begin(), oper.end(), i) != oper.end()) {
            if (i != ')')
                op.push(i);
            else {
                while (op.top() != '(') op.pop();
                op.pop();
            }
        }
    }

    while (!op.empty()) {
        cout << op.top() << " ";
        op.pop();
    }
    return 0;
}
