#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

struct Node {

	char data;
	unsigned freq;
	Node *left, *right;
	Node(char data, unsigned freq, Node* l = NULL, Node* r = NULL)
	{
		this->left = l;
		this->right = r;
		this->data = data;
		this->freq = freq;
	}
};


struct compare {
	bool operator()(Node* l, Node* r)
	{
		return (l->freq < r->freq);
	}
};


void printCode(Node *root, string str=""){
    if(root == NULL){
        return ;
    }

    if(root->data != '$'){
        cout<<root->data<<" : "<<str<<endl;
    }

    printCode(root->left, str+"0");
    printCode(root->right, str+"1");

}


void printHCoding(char arr[], int freq[], int n){
    priority_queue<Node*, vector<Node*>, compare> h;

	for (int i = 0; i < n; ++i)
		h.push(new Node(arr[i], freq[i]));

	// Iterate while size of heap doesn't become 1
	while (h.size() > 1) {
		Node *l = h.top();h.pop();

		Node *r = h.top();h.pop();
		Node *top = new Node('$', l->freq + r->freq, l, r);

		h.push(top);
	}
	printCode(h.top(), "");
}


int main(){
    char arr[] = { 'a', 'd', 'e', 'f' };
	int freq[] = { 30, 40, 80, 60 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printHCoding(arr, freq, size);
    return 0;
}


// 5
// a b c d e
// 85 63 22 55 10