#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

void insertIntoVector(Node* head, vector<int>& arr) {
    Node* current = head;
    while (current) {
        arr.push_back(current->data);
        current = current->next;
    }
}

int main() {
    int N;
    cin >> N;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < N; ++i) {
        int value;
        cin >> value;
        Node* newNode = new Node(value);
        if(!head){
            head = newNode;
            tail = newNode;
        } 
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    vector<int> arr;
    insertIntoVector(head, arr);
    sort(arr.begin(), arr.end());

    for(int i=0;i<arr.size();i++) {
        cout << arr[i];
        if (i<arr.size()-1){
            cout << "->";
        }
    }

    return 0;
}
