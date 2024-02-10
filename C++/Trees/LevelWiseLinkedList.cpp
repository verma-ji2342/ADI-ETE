#include <iostream>
#include <queue>
#include <vector>
using namespace std ;


template <typename T>
class Node {
   public:
    T data;
    Node<T> *next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


BinaryTreeNode<int> *takeInput() {
    int rootData;
    
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void print(Node<int> *head) {
    Node<int> *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}




vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root == NULL){
        return {NULL} ;
    }
    
    queue<BinaryTreeNode<int>*>pending ;
    
    pending.push(root) ;
    pending.push(NULL) ;
    vector<Node<int>*> ans ;
    
    Node<int> *head = NULL ;
    Node<int> *tail = NULL;
    
    while(!pending.empty()){
        BinaryTreeNode<int>* front = pending.front() ;
        pending.pop() ;
        
        if(front == NULL){
            if(pending.empty()){
                return ans ;
            }
            else {
                head = NULL ;
                tail = NULL ;
                pending.push(NULL) ;
            }
        }
        else {
            Node<int> *temp = new Node<int>(front->data);
            
            if(head == NULL) {
                head = temp;
                tail = temp;
                ans.push_back(head);
            } 
            else {
                tail -> next = temp;
                tail = temp;
            }
            if(front->left != NULL){
                pending.push(front->left) ;
            }
            if(front->right != NULL){
                pending.push(front->right) ;
            }
        }
    }
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    vector<Node<int> *> ans = constructLinkedListForEachLevel(root);

    for (int i = 0; i < ans.size(); i++) {
        print(ans[i]);
    }
}