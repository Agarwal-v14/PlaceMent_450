#include<bits/stdc++.h>
using namespace std;
class BinaryTree{
    public:
        BinaryTree *left, *right;
        int val;

        BinaryTree(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
BinaryTree* insertValue(BinaryTree* root, int value, queue<BinaryTree*>&q){
    BinaryTree* node = new BinaryTree(value);
    if (root == NULL)
        root = node;
 
    // The left child of the cBinaryTree*is
    // used if it is available.
    else if (q.front()->left == NULL)
        q.front()->left = node;
 
    // The right child of the cBinaryTree*is used
    // if it is available. Since the left child of this
    // node has already been useBinaryTree*is popped
    // from the queue after using its right child.
    else {
        q.front()->right = node;
        q.pop();
    }
 
    // WheneverBinaryTree*is added to the tree, its
    // address is pushed into the queue.
    // So that its children Nodes can be used later.
    q.push(node);
    return root;
}
 
// This function mainly calls insertValue() for
// all array elements. All calls use same BinaryTree* createTree(int arr[], intBinaryTree* root = NULL;
BinaryTree* createTree(int arr[], int n)
{
    BinaryTree* root = NULL;
    queue<BinaryTree*> q;
    for (int i = 0; i < n; i++)
      root = insertValue(root, arr[i], q);
    return root;
}
void printTree(BinaryTree *head){
    queue<BinaryTree*>q;
    q.push(head);
    while(!q.empty()){
        BinaryTree *front = q.front();
        q.pop();
        cout << front->val << " ";
        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right);
        }
    }
    return;
}
int main(){
    int arr[] = { 10, 20, 30, 40, 50,60,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    BinaryTree *head = createTree(arr,n);
    printTree(head);
}