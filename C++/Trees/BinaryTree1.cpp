#include <iostream>
#include "BinaryTreeNode.cpp" 
#include <queue>
using namespace std ;

void printBinaryTree(BinaryTreeNode<int>* root){
    if(root == NULL){
        return ;
    }

    cout<<root->data<<":" ;
    
    if(root->left != NULL){
        cout<<'L'<<root->left->data ;
    }

    if(root->right != NULL){
        cout<<'R'<<root->right->data ;
    }

    cout<<endl ;

    printBinaryTree(root->left) ;
    printBinaryTree(root->right) ;

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


BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData ; 
    cout<<"Enter Root Data :"<<endl ;
    cin>>rootData ;
    if(rootData == -1 ){
        return NULL ;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData) ;
    queue<BinaryTreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;

    while(pendingNodes.size() != 0){
        BinaryTreeNode<int>* front = pendingNodes.front() ;
        pendingNodes.pop() ;

        cout<<"Enter the left Child of "<<front->data<<endl ;
        int leftChildData ;
        cin>>leftChildData ;
        if(leftChildData != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData) ;
            front->left = child ;
            pendingNodes.push(child) ;
        }

        cout<<"Enter the right child of "<<front->data<<endl ;
        int rightChildData ;
        cin>>rightChildData ;
        if(rightChildData != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData) ;
            front->right = child ;
            pendingNodes.push(child) ;
        }
    }
    return root ;
}

int countNodes(BinaryTreeNode<int>* root){
    if(root == NULL){
        return 0 ;
    }

    return 1 + countNodes(root->left) + countNodes(root->right) ;
}


int height(BinaryTreeNode<int>* root){
    if(root == NULL){
        return 0;
    }

    return 1 + max(height(root->left), height(root->right)) ;
}

int diameter(BinaryTreeNode<int>* root){
    if(root == NULL){
        return 0;
    }

    int option1 = height(root->left) + height(root->right) ;
    int option2 = diameter(root->left) ;
    int option3 = diameter(root->right) ;

    return max(option1, max(option2, option3)) ;
}


pair<int,int> heightDiameter(BinaryTreeNode<int>* root){ // Time Complexity is less than above function 
    if(root == NULL){
        pair<int,int> p ;
        p.first = 0 ;
        p.second = 0 ;
        return p ;
    }

    pair<int, int> leftAns = heightDiameter(root->left) ;
    pair<int, int> rightAns = heightDiameter(root->right) ;
    
    int lh = leftAns.first ;
    int ld = leftAns.second ;
    int rh = rightAns.first ;
    int rd = rightAns.second ;

    int height = 1 + max(lh,rh) ;
    int diameter = max(lh+rh , max(ld,rd)) ;
    
    pair<int, int> p ;
    p.first = height ;
    p.second = diameter ;

    return p ;
}


BinaryTreeNode<int>* takeInput(){
    int rootData ;
    cout<<"Enter Data "<<endl ;
    cin>>rootData ;

    if(rootData == -1){
        return NULL ;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData) ;
    BinaryTreeNode<int>* leftChild = takeInput() ;
    BinaryTreeNode<int>* rightChild = takeInput() ;

    root->left = leftChild ; 
    root->right = rightChild ;

    return root ;

}

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
                //           1
                //     2            3
                // 4       5     6       7
                //             8    9 

int main(){
    BinaryTreeNode<int>* R = takeInputLevelWise() ;
    printTreeLevelWise(R) ;
    cout<<"Number of nodes in tree are : "<<countNodes(R)<<endl ;
    cout<<"Height of Tree : "<<height(R)<<endl ;
    cout<<"Diameter of Tree : "<<diameter(R)<<endl;
    cout<<"Height and Diameter of Binary Tree : "<<heightDiameter(R).first<<" : "<<heightDiameter(R).second ;
    return 0 ;
}