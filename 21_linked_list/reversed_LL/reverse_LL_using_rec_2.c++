#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~node(){
        int val = this->data;
        while(next != NULL){
            delete next;
            next = NULL;
        }
    }
};
void insertAtHead(node* &tail,node* &head,int d){
    //insert at head
    if(head == NULL){
        node* temp = new node(d);
        head= temp;
        tail = temp;
    }
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(node* &tail,node* &head,int d){
    if(tail == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
        return;
    }

    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(node* &tail,node* &head,int position,int d){
    if(head == NULL){
        node* temp = new node(d);
        head= temp;
        tail = temp;
        return;
    }
    if(position == 1){
        insertAtHead(tail,head,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while( cnt<position-1 && temp !=NULL){
        temp = temp->next;
        cnt++;
    }
    if(temp == NULL){
        cout<<"Out of range"<<endl;
        return;
    }
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
    
}
node* reverse(node* head){
    if(head == NULL || head->next == NULL){
        cout<<"No LL to reverse"<<endl;
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
node* reverse1(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* chotaHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotaHead;
}
void reverse3(node* &head,node* curr,node* prev){
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
    node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAtPosition(tail,head,2,1);
    print(head);
    insertAtPosition(tail,head,2,2);
    print(head);
    insertAtPosition(tail,head,3,3);
    print(head);
    insertAtPosition(tail,head,4,4);
    print(head);
    // head=reverse(head);
    // print(head);
    head = reverse1(head);
    print(head);
}

