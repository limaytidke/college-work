#include <iostream>
#include <stack>
using namespace std;

char par(char b){
    switch (b){
        case ')' : 
            return '(';
            break;
        case ']' : 
            return '[';
            break;
        case '}' : 
            return '{';
            break;
    }
    return 'a';
}

int main(){
    stack<char> paren;
    string s;
    char complement;
    cout << "Enter string: ";
    cin >> s;

    for (auto i : s){
        if (i == '(' || i == '[' || i == '{')
            paren.push(i);
        else{
            complement = par(i);
            if (paren.top() == complement)
                paren.pop();
            else{
                cout << "False";
                return 0;
            }
        }
    }

    if (paren.empty())
        cout << "True";
    else
        cout << "False";

    return 0;
}


