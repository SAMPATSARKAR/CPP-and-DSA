#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~node() {
        int val = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Data to be freed: " << val << endl;
    }
};

// Insert at head
void insertAtHead(node*& head, int d) {
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

// Insert at tail
void insertAtTail(node*& tail, node*& head, int d) {
    if (head == NULL) {
        node* temp = new node(d);
        head = temp;
        tail = temp;
        return;
    }
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

// Insert at a given position
void insertAtPosition(node*& tail, node*& head, int position, int d) {
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    node* temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL || temp->next == NULL) {
        insertAtTail(tail, head, d);
        return;
    }

    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Print linked list
void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Reverse in groups of k
node* kreverse(node* head, int k) {
    if (head == NULL) 
        return NULL;

    node* curr = head;
    node* prev = NULL;
    node* next = NULL;
    int count = 0;

    // Step 1: Reverse first k nodes
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step 2: Recursively reverse remaining list
    if (next != NULL) {
        head->next = kreverse(next, k);
    }

    // Step 3: prev becomes new head of the reversed group
    return prev;
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    insertAtTail(tail, head, 10);
    insertAtTail(tail, head, 20);
    insertAtTail(tail, head, 30);
    insertAtTail(tail, head, 40);
    insertAtTail(tail, head, 50);
    insertAtTail(tail, head, 60);
    insertAtTail(tail, head, 70);

    cout << "Original Linked List: ";
    print(head);

    head = kreverse(head, 2);

    cout << "After k=2 reverse: ";
    print(head);

    return 0;
}
