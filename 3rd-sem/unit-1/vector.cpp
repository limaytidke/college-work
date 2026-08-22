#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(100);
    cout << v1.size() << endl;
    reverse(v1.begin(),v1.end());

    for (auto i : v1)
        cout << i << endl;

    return 0;
}
