#include <bits/stdc++.h>
using namespace std;

class Node {
    public: 

    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* reverseKGroup(Node* head, int k) {
        Node* temp = head;
        vector<vector<int>>arr; // 2-d array
        while(temp){
            vector<int>a;
            for(int i=0 ; i<k && temp!=NULL; i++){
                a.push_back(temp->data);
                temp = temp->next;
            }
            arr.push_back(a);
        }
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i].size() == k){
                reverse(arr[i].begin(), arr[i].end());
            }
        }

        temp = head;
        int i=0;
        while(temp){
            for(auto x : arr[i]){
                temp->data = x;
                temp = temp->next;
            }
            i++;
        }
        return head;
}

Node* insert(vector<int> &arr){
    Node *head = NULL;
    Node *tail = NULL;

    for(int i=0 ; i<arr.size() ; i++){
        Node *temp = new Node(arr[i]);

        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}

void printLL(Node *head) {
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    vector<int>arr;
    int key;
    cin>>key;
    while(key != -1){
        arr.push_back(key);
        cin>>key;
    }
    Node *head = insert(arr);
    printLL(head);
    int k;
    cin>>k;
    reverseKGroup(head, k);
    
    printLL(head);
    return 0;
}