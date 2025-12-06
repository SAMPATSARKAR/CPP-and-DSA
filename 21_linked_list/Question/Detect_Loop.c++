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
void insertAtHead(node*& tail,node* &head, int d) {
    if (head == NULL) {
        node* temp = new node(d);
        head = temp;
        tail = temp;
        return;
    }
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
        insertAtHead(tail,head, d);
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
node* floyddetectLoop(node* head){
    if(head == NULL){
        return NULL;
    }
    node* slow = head;
    node* fast = head;
    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    if(floyddetectLoop(head)){
        cout<<"Loop exist"<<endl;
    }else{
        cout<<"Loop doesnot exist"<<endl;
    }
    insertAtTail(tail, head, 10);
    insertAtTail(tail, head, 20);
    insertAtTail(tail, head, 30);
    insertAtTail(tail, head, 40);
    insertAtTail(tail, head, 50);
    insertAtTail(tail, head, 60);
    insertAtTail(tail, head, 70);
    tail->next = head->next;

    if(floyddetectLoop(head)!=NULL){
        cout<<"Loop exist"<<endl;
    }else{
        cout<<"Loop doesnot exist"<<endl;
    }
    return 0;
}
