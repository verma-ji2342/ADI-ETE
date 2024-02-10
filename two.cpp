#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

class Node {
    public: 
        int height, key;
        Node* left;
        Node* right;
};

int height(Node* N){
    if(N == NULL) return 0;
    return N->height;
}


Node* rightRotation(Node* x){
    Node* y = x->left;
    Node* T2 = y->right;

    y->right = x;
    x->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return y;
}


Node* leftRotation(Node* y){
    Node* x = y->right;
    Node* T2 = x->left;

    x->left = y;
    y->right = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}


Node* newNode(int key){
    Node* node = new Node();

    node->key = key;
    node->left = node->right = NULL;
    node->height = 1;

    return node;
}

int getBalance(Node *N){
    if(N == NULL) return 0;
    return (height(N->left) - height(N->right));
}


Node* insert(Node* node, int key){
    if(node == NULL) return (newNode(key));x

    if(key < node->key){
        node->left = insert(node->left, key);
    }
    else if(key > node->key){
        node->right = insert(node->right, key);
    }
    else{
        return node;
    }

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    if(balance > 1 && key < node->left->key){
        return rightRotation(node);
    }

    if(balance < -1 && key > node->right->key){
        return leftRotation(node);
    }

    if(balance > 1 && key > node->left->key){
        node->left = leftRotation(node->left);
        return rightRotation(node);
    }

    if(balance < -1 && key < node->right->key){
        node->right = rightRotation(node->right);
        return leftRotation(node);
    }

    return node;
}


void preOrder(Node* root){
    if(root == NULL) return ;

    cout<<root->key<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


// Driver Code 
int main()  
{  
    Node *root = NULL;  
      
    /* Constructing tree given in  
    the above figure */
    int n ;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int key;
        cin>>key;
        root = insert(root, key);
    }
      
    /* The constructed AVL Tree would be  
                30  
            / \  
            20 40  
            / \ \  
        10 25 50  
    */
    cout << "Preorder traversal of the "
            "constructed AVL tree is \n";  
    preOrder(root);  
      
    return 0;  
}  