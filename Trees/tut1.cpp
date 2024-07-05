#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;  // Corrected from int* to node*
    node* right; // Corrected from int* to node*

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {
    cout<<"Enter the data :"<<endl;
    int d;
    cin >> d;

    if (d == -1) {
        return NULL;
    }

    root = new node(d); // Use the existing root parameter
    cout<<"Enter the data for inserting in left of the tree"<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for inserting in right of the tree"<<endl;
    root->right = buildTree(root->right);
    return root;
}

int main() {
    node* root = NULL;
    // creating a tree
    root = buildTree(root);

    return 0;
}
