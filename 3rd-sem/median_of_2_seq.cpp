#include <iostream>
#include <vector>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)

int main() {
    int s1, s2;
    cout << "Enter size of vector 1 and vector 2: ";
    cin >> s1 >> s2;
    int s3 = s1 + s2;
    vector<int> v1(s1);
    vector<int> v2(s2);
    vector<int> vfinal(s3);
    int x;

    cout << "\nEnter elements of vector 1: ";
    rep(s1) {
        cin >> x;
        v1[i] = x;
    }
    cin.ignore();
    cout << "\nEnter elements of vector 2: ";
    rep(s2) {
        cin >> x;
        v2[i] = x;
    }

    int v1_i = 0, v2_i = 0;
    rep(s3) {
        if (!(v1_i < s1)) {
            vfinal[i] = v2[v2_i];
            v2_i++;
        } else if (!(v2_i < s2)) {
            vfinal[i] = v1[v1_i];
            v1_i++;
        } else {
            if (v1[v1_i] < v2[v2_i]) {
                vfinal[i] = v1[v1_i];
                v1_i++;
            } else {
                vfinal[i] = v2[v2_i];
                v2_i++;
            }
        }
    }

    int index = vfinal.size() / 2;

    cout << "\nMedian: ";
    if (vfinal.size() % 2 == 0){
        float median = (vfinal[index] + vfinal[index-1]);
        cout << median/2;
    }
    else
        cout << vfinal[index];

    return 0;
}
