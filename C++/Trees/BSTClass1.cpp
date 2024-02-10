#include <iostream>
#include "BinaryTreeNode.cpp"
#include <queue>
using namespace std ;

class BST {
    // Define the data members
    BinaryTreeNode<int> *root;
    
public:
    BST() { 
        // Implement the Constructor
        root = NULL;
    }
    
    ~BST() {
        delete root;
    }

    /*----------------- Public Functions of BST -----------------*/
    // Remove function
private:
    BinaryTreeNode<int>* remove(int data, BinaryTreeNode<int>* node) {
        if (node == NULL) {
            return NULL;
        }

        if (data > node -> data) {
            node -> right = remove(data, node -> right);
            return node;
        } else if (data < node -> data) {
            node -> left = remove(data, node -> left);
            return node;
        } else {
            if (node -> left == NULL && node -> right == NULL) {
                delete node;
                return NULL;
            } else if (node -> left == NULL) {
                BinaryTreeNode<int>* temp = node -> right;
                node -> right = NULL;
                delete node;
                return temp;
            } else if (node -> right == NULL) {
                BinaryTreeNode<int>* temp = node -> left;
                node -> left = NULL;
                delete node;
                return temp; 
            } else {
                BinaryTreeNode<int>* minNode = node -> right;
                while (minNode -> left) {
                  minNode = minNode -> left;
              }
              int rightMin = minNode -> data;
              node -> data = rightMin;
              node -> right = remove(rightMin, node -> right);
              return node;
          }
      }
  }
  
public:
    void remove(int data) { 
        // Implement the remove() function 
        root = remove(data, root);
    }

    // Print Function
private:
    void print(BinaryTreeNode<int> *root) { 
        // Implement the print() function
        if (root == NULL) {
            return;
        }
        
        cout << root -> data << ":";
        
        if (root -> left) {
            cout << "L:" << root -> left -> data <<",";
        }

        if (root -> right) {
            cout << "R:" << root -> right -> data;
        }
        cout << endl;
        print(root -> left);
        print(root -> right);
    }
    
public:
    void print() {
        return print(root);
    }

    // Insert Function
private:
  BinaryTreeNode<int>* insert(int data, BinaryTreeNode<int>* node) {
      if (node == NULL) {
          BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
          return newNode;
      }

      if (data <= node -> data) {
          node -> left = insert(data, node -> left);
      } else {
          node -> right = insert(data, node -> right);
      }
      return node;
  }

public:
  void insert(int data) {
      this -> root = insert(data, this -> root);
  }

    // Search Function
private:
    bool search(int data, BinaryTreeNode<int> *node) { 
        if (node == NULL) {
            return false;
        }

        if (node -> data == data) {
          return true;
      } else if (data < node -> data) {
          return search(data, node -> left);
      } else { 
          return search(data, node -> right);
      }
      
  }
  
public:
    bool search(int data) {
        // Implement the search() function 
        return search(data, root);
    }
};


int main() {
    BST *tree = new BST();
    int choice, input, q;
    cin >> q;
    while (q--) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                tree->insert(input);
                break;
            case 2:
                cin >> input;
                tree->remove(input);
                break;
            case 3:
                cin >> input;
                cout << ((tree->search(input)) ? "true\n" : "false\n");
                break;
            default:
                tree->print();
                break;
        }
    }
}