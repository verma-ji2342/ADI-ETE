#include <iostream>
#include <queue>
#include "BinaryTreeNode.cpp"
using namespace std ;

void InsertBST(BinaryTreeNode<int>* root, int key){
    BinaryTreeNode<int>* r = NULL, *p ;
    while(root != NULL){
        r = root ;
        if(key == root->data){
            return ;
        }
        else if(key < root->data){
            root = root->left ;
        }
        else {
            root = root->right ;
        }
    }
    p = new BinaryTreeNode<int>(key) ;
    if(p->data < r->data) r->left = p ;
    else r->right = p ;
}


BinaryTreeNode<int>* RInsert(BinaryTreeNode<int>*p, int key){
    BinaryTreeNode<int> *t = NULL ;

    if(p == NULL){
        t = new BinaryTreeNode<int>(key) ;
        return t ;
        
    }

    if(key < p->data){
        p->left = RInsert(p->left, key) ;
    }
    else if(key > p->data){
        p->right = RInsert(p->right, key) ;
    }

    return p ;
}

void printTreeLevelWise(BinaryTreeNode<int>* root) {
    if(root == NULL){
        return ;
    }

    queue<BinaryTreeNode<int>*> pending ;

    pending.push(root) ;
    while(pending.size() != 0){
        BinaryTreeNode<int>* front = pending.front() ;
        cout<<front->data<<":" ;
        pending.pop() ;

        if(front->left != NULL){
            cout<<"L"<<front->left->data ;
            pending.push(front->left) ;
        }
        
        if(front->right != NULL){
            cout<<"R"<<front->right->data ;
            pending.push(front->right) ;
        }
        cout<<endl ;
    }
}

BinaryTreeNode<int>* root1 ;

void Insert(int key){
    BinaryTreeNode<int> *t = root1 ;
    BinaryTreeNode<int> *r, *p ;

    if(root1 == NULL){
        p = new BinaryTreeNode<int>(key) ;
        root1 = p ;
        return ;
    }

    while(root1 != NULL){
        r = t ;
        
        if(key < t->data){
            t = t->left ;
        }
        else if(key > t->data){
            t = t->right ;
        }
        else {
            return ;
        }
    }

    p = new BinaryTreeNode<int>(key) ;
    if(key < r->data) r->left = p;
    else r->right = p ;
}

int main(){
    BinaryTreeNode<int>* R = new BinaryTreeNode<int>(9) ;
    int data ;
    cout<<"Enter the data : "<<endl ;
    cin>>data ;
    while(data != -1){
        InsertBST(R,data) ;
        cout<<"Enter the data : "<<endl ;
        cin>>data ;
    }

    printTreeLevelWise(R) ;

    R = RInsert(R,9) ;
    RInsert(R,15) ;
    RInsert(R,5) ;
    RInsert(R,20) ;
    RInsert(R,16) ;
    RInsert(R,8) ;
    RInsert(R, 12) ;
    RInsert(R,3) ;
    RInsert(R,6) ;

    cout<<endl;
    printTreeLevelWise(root1) ;
    return 0;
}

