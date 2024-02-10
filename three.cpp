#include <iostream>
using namespace std;


class Node {
    public: 
        int data;
        Node* left;
        Node* right;
        Node(int key){
            this->data = key;
            this->left = this->right = NULL;
        }
};

Node* insertBST(Node* root, int key){
    if(root == NULL){
        return (new Node(key));  
    }

    if(key < root->data){
        root->left = insertBST(root->left, key);
    }
    else if(key > root->data){
        root->right = insertBST(root->right, key);
    }

    return root;
}

Node* solve1(Node* root){
    if(root == NULL){
        return NULL;
    }

    if(root->left == NULL && root->right == NULL){
        cout<<"inside leaf"<<" ";
        free(root);
        return NULL;
    }

    root->left = solve1(root->left);
    root->right = solve1(root->right);

    return root;
}

Node* leftmostDelete(Node *root){
    if(root == NULL){
        return NULL;
    }

    if(root->left == NULL){
        // free(root);
        return NULL;
    }

    root->left = leftmostDelete(root->left);
    return root;
}

Node* rightmostDelete(Node* root){
    if(root == NULL){
        return NULL;
    }

    if(root->right == NULL){
        free(root);
        return NULL;
    }

    root->right = rightmostDelete(root->right);
    return root;
}

Node* solve2(Node* root){
    if(root == NULL){
        return NULL;
    }

    root->left = leftmostDelete(root->left);
    root->right = rightmostDelete(root->right);
    return root;
}


void postOrder(Node* root){
    if(root == NULL){
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    int n;
    cin>>n;
    Node* root = NULL;

    for(int i=0 ; i<n ; i++){
        int key ;
        cin>>key;
        root = insertBST(root, key);
    }

    cout<<"According to question : "<<endl;
    solve2(root);
    postOrder(root);

    cout<<endl<<"call solve1 function instead of calling solve2, if you want output according to sample TestCase"<<endl;
    return 0;
}