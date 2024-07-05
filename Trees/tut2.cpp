//Level order traversal of a tree

#include <iostream>
#include <queue>
using namespace std;
class node {    
public:
    int data;
    node* left;
    node* right;

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

    root = new node(d);
    cout<<"Enter the data for inserting in left of the tree"<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for inserting in right of the tree"<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrder(node* root) {
    if (root == NULL) {
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}
int main(){
    node* root = NULL;
    // creating a tree
    root = buildTree(root);
    levelOrder(root);
    return 0;
}