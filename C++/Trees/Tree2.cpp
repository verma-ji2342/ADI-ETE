#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std ;


TreeNode<int> * takeinput(){
    int rootData ;
    cout<<"Enter data: "<<endl ;
    cin>>rootData ;
    TreeNode <int>* root = new TreeNode <int> (rootData) ;

    int n ;
    cout<<"Enter number of children "<<rootData <<endl ;
    cin>>n ;

    for(int i=0 ; i<n ; i++){
        TreeNode<int> *child = takeinput() ;
        root->children.push_back(child) ;
    }
    return root ;

}

TreeNode<int>* takeInputLevelWise(){
    int rootData ;
    cout<<"Enter root Data "<<endl ;
    cin>>rootData ;
    TreeNode<int>* root = new TreeNode<int>(rootData) ;

    queue<TreeNode<int>*> pendingNodes ;

    pendingNodes.push(root) ;

    while(pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front() ;
        pendingNodes.pop() ;
        cout<<"Enter num of children of "<<front->data<<endl;
        int numChild ;
        cin>>numChild ;

        for(int i=0 ; i<numChild ; i++){
            int childData ;
            cout<<"Enter the "<<i<<"th child of "<<front->data<<endl ;
            cin>>childData ;
            TreeNode<int>* child = new TreeNode<int>(childData) ;
            front->children.push_back(child) ;
            pendingNodes.push(child) ;
        }
    }
    return root ;
}

int numNode(TreeNode<int>* root){
    int ans = 1 ;
    for(int i=0 ; i<root->children.size() ; i++){
        ans += numNode(root->children[i]) ;
    }

    return ans ; 
}


void BetterPrintTree(TreeNode<int>* root) {

    if(root == NULL){
        return ;
    }

    cout<<root->data<<": " ;
    for(int i=0 ; i<root->children.size() ; i++){
        cout<<root->children[i]->data<<',' ;
    }
    cout<<endl ;
    for(int i=0 ; i<root->children.size() ; i++){
        BetterPrintTree(root->children[i]) ;
    }

}

void printAtLevelK(TreeNode<int>* root, int k){
    if(k == 0){
        cout<<root->data<<endl ;
    }

    for(int i=0 ; i<root->children.size() ; i++){
        printAtLevelK(root->children[i], k-1) ;
    }

}


int main(){

    TreeNode<int>*root = takeInputLevelWise() ;

    BetterPrintTree(root) ;

    cout<<"Total number of Nodes in Tree are : "<<numNode(root) ;

    cout<<"Print all Nodes at level 4 " <<endl ;
    printAtLevelK(root, 4) ;

    return 0;
}