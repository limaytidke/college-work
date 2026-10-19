#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<vector<int>> graph;
set<int> seen;

void dfs(int start, int& count) {
    count++;
    seen.insert(start);
    for (int i = 0; i < graph.size(); i++)
        if (graph[start][i] == 1 && seen.find(i) == seen.end()) dfs(i, count);
    return;
}

int main() {
    int n;
    cout << "Enter size of graph: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> vertex(n);
        for (int j = 0; j < n; j++) {
            cin >> vertex[j];
        }
        graph.push_back(vertex);
    }

    for (int ignore = 0; ignore < graph.size(); ignore++) {
        seen.clear();
        seen.insert(ignore);
        int count = 0;
        for (int i = 0; i < graph.size(); i++) {
            if (graph[ignore][i] == 1) {
                dfs(i, count);
                break;
            }
        }
        if (count < graph.size() - 1)
            cout << "Articulation point:(node index) " << ignore << endl;
    }
}
