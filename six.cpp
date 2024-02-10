#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int key){
        this->data = key;
        this->left = this->right = NULL;
    }
};

Node* insert(Node* root, int key){
    if(root == NULL){
        return (new Node(key));
    }
    if(root->data > key){
        root->left = insert(root->left, key);
    }
    else if(root->data < key){
        root->right = insert(root->right, key);
    }
    return root;
}

Node* LowestCommonAncestor(Node* root, int val1, int val2){
    if(root == NULL || root->data == val1 || root->data == val2){
        return root;
    }
    Node *leftlca = LowestCommonAncestor(root->left, val1, val2);
    Node *rightlca = LowestCommonAncestor(root->right, val1, val2);
    if(leftlca == NULL) return rightlca;
    if(rightlca == NULL) return leftlca;
    return root;
}

int main(){

    Node* root = NULL;
    int n ;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int key;
        cin>>key;
        root = insert(root, key);
    }
    int val1, val2;
    cin>>val1>>val2;
    Node *ans = LowestCommonAncestor(root, val1, val2);
    cout<<ans->data<<endl;
    return 0;
}