#include <iostream>
using namespace std;

typedef struct AVL {
    int data;
    int balanceFactor;
    int balanceChanged;
    struct AVL *left, *right, *parent;
    AVL(int val)
        : data(val),
          left(nullptr),
          right(nullptr),
          parent(nullptr),
          balanceFactor(0),
          balanceChanged(0) {};
}* avl;

avl makeNode(int val) { return new AVL(val); }

int calcHeight(avl root) {
    if (!root)
        return 0;
    else
        return 1 + max(calcHeight(root->left), calcHeight(root->right));
}

int calcBalanceFactor(avl root) {
    return calcHeight(root->left) - calcHeight(root->right);
}

void updateBalanceFactor(avl& root) {
    if (!root) return;
    if (root->balanceChanged) root->balanceFactor = calcBalanceFactor(root);
    root->balanceChanged = 0;
    if (root->left && root->left->balanceChanged)
        updateBalanceFactor(root->left);
    if (root->right && root->right->balanceChanged)
        updateBalanceFactor(root->right);
}

avl rightRotate(avl& root) {
    avl p = root->left;
    avl pr = p->right;

    p->right = root;
    root->left = pr;
    return p;
}

avl leftRotate(avl& root) {
    avl p = root->right;
    avl pl = p->left;

    p->left = root;
    root->right = pl;
    return p;
}

avl LLrotate(avl& root) { return rightRotate(root); }

avl RRrotate(avl& root) { return leftRotate(root); }

avl LRrotate(avl& root) {
    leftRotate(root->left);
    return rightRotate(root);
}

avl RLrotate(avl& root) {
    rightRotate(root->right);
    return leftRotate(root);
}

avl balance(avl& root) {
    int BL = root->balanceFactor;
    if (BL == 2) {
        if (root->left->balanceFactor == 1)
            root = LLrotate(root);
        else
            root = LRrotate(root);
    } else {
        if (root->right->balanceFactor == -1)
            root = RRrotate(root);
        else
            root = RLrotate(root);
    }
    root->balanceFactor = calcBalanceFactor(root);
    return root;
}

avl insertNode(avl& root, int val) {
    if (!root)
        root = makeNode(val);
    else if (root->data > val)
        root->left = insertNode(root->left, val);
    else
        root->right = insertNode(root->right, val);

    root->balanceFactor = calcBalanceFactor(root);
    if (root->balanceFactor != 0 && root->balanceFactor != -1 &&
        root->balanceFactor != 1) {
        root->balanceChanged = 1;
        root = balance(root);
    }

    updateBalanceFactor(root);

    return root;
}

void inorder(avl root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << "(" << root->balanceFactor << ") ";
    inorder(root->right);
}

int menu() {
    int choice;
    cout << "1.Insert Node\n"
         << "2.Delete Node\n"
         << "3.Inorder\n"
         << ": ";
    cin >> choice;
    return choice;
}

int main() {
    avl root;
    int val;
    do {
        switch (menu()) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                root = insertNode(root, val);
                break;
            case 3:
                inorder(root);
                cout << "\n";
                break;
            default:
                exit(0);
        }
    } while (1);
    return 0;
}
