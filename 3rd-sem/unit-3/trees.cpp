#include <iostream>
#include <queue>
using namespace std;

typedef struct BST {
    int val;
    struct BST* parent = nullptr;
    struct BST* left = nullptr;
    struct BST* right = nullptr;
}* tree;

tree getNode() { return new BST(); }

void addNode(tree& root) {
    tree node = getNode();
    cout << "\tEnter value: ";
    cin >> node->val;
    cout << endl;

    if (!root) {
        root = node;
        return;
    }

    tree tail = root;
    while (1) {
        if (tail->val > node->val) {
            if (!tail->left) {
                tail->left = node;
                node->parent = tail;
                return;
            } else {
                tail = tail->left;
            }
        } else {
            if (!tail->right) {
                tail->right = node;
                node->parent = tail;
                return;
            } else {
                tail = tail->right;
            }
        }
    }
}

void displayInorder(tree root) {
    if (!root) {
        cout << "Tree does not exists\n";
        return;
    }

    if (root->left) displayInorder(root->left);

    cout << root->val << " ";

    if (root->right) displayInorder(root->right);
}

void displayBFS(tree& root) {
    if (root == nullptr) return;

    queue<tree> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; ++i) {
            tree curr = q.front();
            q.pop();
            cout << curr->val << " ";

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        cout << endl;
    }
}

int menu() {
    int c;
    cout << "1.addNode\n"
         << "2.displayInorder\n"
         << "3.displayBFS\n"
         << "4.displayDFS\n"
         /*<< "5.deleteAt\n"*/
         << "Enter choice: ";
    cin >> c;
    cout << endl;
    return c;
}

int main() {
    tree root = nullptr, temp, tail;
    tail = root;
    int choice;
    do {
        choice = menu();
        switch (choice) {
            case 1:
                addNode(root);
                break;
            case 2:
                displayInorder(root);
                cout << endl;
                break;
            case 3:
                displayBFS(root);
                break;
        }
    } while (1);
    return 0;
}
