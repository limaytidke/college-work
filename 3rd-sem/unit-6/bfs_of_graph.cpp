#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> graph = {{0,1,0,1,0},{0,0,1,1,0},{0,0,0,0,1},{0,0,1,0,0},{0,0,0,0,0}};
vector<int> seen;

void bfs() {
    queue<int> nodes;
    nodes.push(0);
    int size = graph[0].size();
    seen.push_back(0);
    while (!nodes.empty()) {
        int front = nodes.front();
        nodes.pop();
        for (int i = 0; i < size; i++) {
            if (graph[front][i] == 1 &&
                find(seen.begin(),seen.end(),i) == seen.end()) {
                seen.push_back(i);
                nodes.push(i);
            }
        }
    }
}

int main() {
    bfs();
    for (auto node : seen)
        cout << "( " << node+1 << " ),";
    return 0;
}
