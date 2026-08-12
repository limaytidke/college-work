#include <iostream>
using namespace std;

typedef struct BST{
    int val;
    struct BST *parent = nullptr;
    struct BST *left = nullptr;
    struct BST *right = nullptr;
}*tree;

void add(tree parent,int val=1){
    if (!parent){
        cout << "Tree doesn't exists\n";
        return;
    }

    if (!val)
        cin >> val;

    tree node = new BST();
    node->val = val;
    node->parent = parent;

    if (val < parent->val)
        parent->left = node;
    else
        parent->right = node;
}

 void add_multiple(tree parent){
    if (!parent){
        cout << "Tree doesn't exists\n";
        return;
    }

     int x;
     while (cin >> x)
         add(parent,x);
 }


int main(){
    tree T = new BST();
    add_multiple(T);
    return 0;
}
