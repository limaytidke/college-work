#include <iostream>
#include <vector>
using namespace std;

typedef struct Tree {
    int data;
    struct Tree *left, *right, *parent;
    Tree(int val) : data(val), left(nullptr), right(nullptr), parent(nullptr) {}
}* tree;

tree makeNode(int val) { return new Tree(val); }

tree insertNode(tree& root, int val) {
    if (!root)
        root = makeNode(val);
    else if (root->data > val)
        root->left = insertNode(root->left, val);
    else
        root->right = insertNode(root->right, val);
    return root;
}

int minValue(tree root) {
    tree current = root;
    while (current->left) {
        current = current->left;
    }
    return current->data;
}

tree deleteNode(tree root, int val) {
    if (!root) return root;

    if (root->data > val) {
        root->left = deleteNode(root->left, val);
    } else if (root->data < val) {
        root->right = deleteNode(root->right, val);
    } else {
        if (!root->left)
            return root->right;
        else if (!root->right)
            return root->left;

        root->data = minValue(root->right);
        root->right = deleteNode(root->right, root->data);
    }
    return root;
}

void inorder(tree root, vector<int>& values) {
    if (!root) return;
    inorder(root->left, values);
    values.push_back(root->data);
    inorder(root->right, values);
}

void preorder(tree root, vector<int>& values) {
    if (!root) return;
    values.push_back(root->data);
    preorder(root->left, values);
    preorder(root->right, values);
}

void postorder(tree root, vector<int>& values) {
    if (!root) return;
    preorder(root->left, values);
    preorder(root->right, values);
    values.push_back(root->data);
}

int searchNode(tree root, int val) {
    if (!root) return 0;
    if (root->data == val)
        return 1;
    else if (root->data > val)
        return searchNode(root->left, val);
    else
        return searchNode(root->right, val);
}

int main() {
    tree root = nullptr;
    int x;
    int ch;
    vector<int> values;

    do {
        cin >> ch;
        switch (ch) {
            case 1:
                cin >> x;
                root = insertNode(root, x);
                break;
            case 2:
                cin >> x;
                deleteNode(root, x);
                break;
            case 3:
                cin >> x;
                if (searchNode(root, x))
                    cout << "Found\n";
                else
                    cout << "Not Found\n";
                break;
            case 4:
                values.clear();
                inorder(root, values);
                for (int i = 0; i < values.size(); i++) {
                    cout << values[i]
                         << ((i == values.size() - 1) ? "\n" : " ");
                }
                break;
            case 5:
                values.clear();
                preorder(root, values);
                for (int i = 0; i < values.size(); i++) {
                    cout << values[i]
                         << ((i == values.size() - 1) ? "\n" : " ");
                }
                break;
            case 6:
                values.clear();
                postorder(root, values);
                for (int i = 0; i < values.size(); i++) {
                    cout << values[i]
                         << ((i == values.size() - 1) ? "\n" : " ");
                }
                break;
        }
    } while (ch != 0);
    return 0;
}
