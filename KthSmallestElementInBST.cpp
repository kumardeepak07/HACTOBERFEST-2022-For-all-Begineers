//Kth smallest element in BST😊😊..
#include <bits/stdc++.h>
using namespace std;
 //create node...
struct Node {
    int data;
    Node *left, *right;
    int lCount;
    Node(int x)
    {
        data = x;
        left = right = NULL;
        lCount = 0;
    }
};
 
//insert values..
Node* insert(Node* root, int x)
{
    if (root == NULL)
        return new Node(x);
  
    if (x < root->data) {
        root->left = insert(root->left, x);
        root->lCount++;
    }
 
    else if (x > root->data)
        root->right = insert(root->right, x);
    return root;
}
 //function for inorder...
void inOrder(Node* root,vector<int>&v){
    if(root==NULL){
        return ;
    }
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
}
    
//function of finding smallest element...
int kthSmallest(Node* root, int k)
{
    vector<int>v;
    inOrder(root,v);
    return v[k-1];
}

int main()
{
    Node* root = NULL;
    int keys[] = { 20, 8, 22, 4, 12, 10, 14 };
    for (int x : keys)
        root = insert(root, x);
    int k = 4;
    cout<<k<<"th smallest element is: "<<kthSmallest(root,k)<<endl;
    return 0;
}
