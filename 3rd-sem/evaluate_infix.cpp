#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    int opd2, opd1, res;
    stack<int> st;
    cin >> n;
    cin.ignore();
    vector<string> str(n);

    for (int i = 0; i < n; i++) cin >> str[i];

    for (auto ch : str) {
        if (ch == "+") {
            opd2 = st.top();
            st.pop();
            opd1 = st.top();
            st.pop();
            res = opd1 + opd2;
            st.push(res);

        } else if (ch == "/") {
            opd2 = st.top();
            st.pop();
            opd1 = st.top();
            st.pop();
            res = opd1 + opd2;
            st.push(res);

        } else if (ch == "-") {
            opd2 = st.top();
            st.pop();
            opd1 = st.top();
            st.pop();
            res = opd1 + opd2;
            st.push(res);

        } else if (ch == "*") {
            opd2 = st.top();
            st.pop();
            opd1 = st.top();
            st.pop();
            res = opd1 + opd2;
            st.push(res);

        } else
            st.push(stoi(ch));
    }

    cout << st.top();
    return 0;
}
