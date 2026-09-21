#include <iostream>
using namespace std;

//i dont know what even is this
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

// makes new node
avl makeNode(int val) { return new AVL(val); }

// does the name not explain it?
int calcHeight(avl root) {
    if (!root)
        return 0;
    else
        return 1 + max(calcHeight(root->left), calcHeight(root->right));
}

// i aint gonna explain this
int calcBalanceFactor(avl root) {
    return calcHeight(root->left) - calcHeight(root->right);
}

// after rotation need to update balanceFactor again
void updateBalanceFactor(avl& root) {
    if (!root) return;
    if (root->balanceChanged) root->balanceFactor = calcBalanceFactor(root);
    root->balanceChanged =
        0;  // this parameter determines if the balanceFactor needs to be
            // calculated again avoiding unnecessary function calls
    if (root->left && root->left->balanceChanged)
        updateBalanceFactor(root->left);
    if (root->right && root->right->balanceChanged)
        updateBalanceFactor(root->right);
}

// rotates right (WOW)
avl rightRotate(avl& root) {
    avl p = root->left;
    avl pr = p->right;

    p->right = root;
    root->left = pr;
    return p;
}

// rotates left (OMG)
avl leftRotate(avl& root) {
    avl p = root->right;
    avl pl = p->left;

    p->left = root;
    root->right = pl;
    return p;
}

// rotation functions
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

// this checks the balanceFactors and performs appropriate rotations
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

// god i hate implementing this again and again.
// inserts the value, checks balance and does corresponding things
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

// inoder traversal (How would one have known)
void inorder(avl root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << "(" << root->balanceFactor << ") ";
    inorder(root->right);
}

// inoder traversal (How would one have known)
void preorder(avl root) {
    if (!root) return;
    cout << root->data << "(" << root->balanceFactor << ") ";
    preorder(root->left);
    preorder(root->right);
}

// inoder traversal (How would one have known)
void postorder(avl root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << "(" << root->balanceFactor << ") ";
}

//inverts the tree using revursion by just swapping the childrens
void invert(avl& root) {
    if (!root) return;

    invert(root->left);
    invert(root->right);

    avl temp = root->left;
    root->left = root->right;
    root->right = temp;
}

// menu cause why not
int menu() {
    int choice;
    cout << "1.Insert Node\n"
         << "2.Delete Node\n"
         << "3.Inorder\n"
         << "4.Preorder\n"
         << "5.Postorder\n"
         << "6.Invert\n"
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
                cout << "\n";
                break;
            // deletion will be implemented when I am not feeling lazy
            case 3:
                inorder(root);
                cout << "\n\n";
                break;
            case 4:
                preorder(root);
                cout << "\n\n";
                break;
            case 5:
                postorder(root);
                cout << "\n\n";
                break;
            case 6:
                invert(root);
                break;
            default:
                exit(0);
        }
    } while (1);
    return 0;
}
