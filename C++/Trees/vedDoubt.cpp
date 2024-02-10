#include <iostream>
using namespace std;
class bst
{
    public:
    int data;
    bst* lst;
    bst* rst;
    bst* insert(bst* , int d);
   /* bst* succ;
    bst* node;
    bst*findmin;*/
    void inorder(bst*);
    void node_delete(bst*,int );
    void search(bst*&,bst*&,int );
   
};
bst* bst::insert(bst* root, int d)
{
    bst* temp = new bst;
    temp->data = d;
    temp->lst = NULL;
    temp->rst = NULL;
    if(root== NULL)
    {  root = temp;
        return root;
    }
    else{
        if (root->data>d)
        {
            root->lst = insert(root->lst,d);
            return root;
        }
    else
    {
        root->rst = insert(root->rst,d);
        return root;
    }
    }
}
void bst::inorder(bst* root)
{
    if(root == NULL){
    return ;
       
    }
    inorder(root->lst);
    cout<<root->data<< "  ";
    inorder(root->rst);
}
void bst::search(bst*&curr,bst*&parent,int key )
{
    if(curr==NULL || curr->data==key)
    return;
    else{
        if(curr->data >key)
        parent = curr;
        curr = curr->lst;
        search(curr,parent,key);
    }
    /*else{
        parent = curr;
        curr = curr->lst;
        search(curr,parent,key);
    }*/
}
void bst::node_delete(bst*root,int key)
{
   // public:
    bst* curr = root;
    bst* parent = NULL;
    search(curr,parent,key);
   if(curr->lst == NULL && curr->rst== NULL)
   {
       if(curr!=NULL)
       {
           if(parent->lst == curr)
           {
               parent->lst = NULL;
           }
           
       }
       
    else if (curr == root)
   {
       root=NULL;
   }
   else{
           parent->rst=NULL;
       }
   delete curr;
   }
   //node with two child
else if(curr->lst !=NULL && curr->rst !=NULL)
{
    Node* succ = findmin(curr->rst);
    int k = succ->data;
    Node* bst::findmin(bst*curr,int key);
    {
        while(curr->lst!=NULL)
        {
            curr = curr->lst;
        }
        return curr;
    }
    delete(root,k);
    curr->data = k;
    else
{
    if(curr->lst == NULL)
    {
        parent->lst = curr->rst;
    }
    else
    {
        parent->rst = curr->rst;
    }
}
}
else {
    if (parent->lst = curr)
    {
        parent->lst = curr->lst;
    }
    else
    {
    parent->rst = curr->lst;
    }
    delete curr;
}

}
int main() {
bst* root = NULL,b;
root= b.insert(root,5);
 b.insert(root,2);
 b.insert(root,4);
 b.insert(root,8);
 b.insert(root,6);
 b.insert(root,7);
b.insert(root,3);
b.inorder(root);
b.node_delete(root,6);
    return 0;
}