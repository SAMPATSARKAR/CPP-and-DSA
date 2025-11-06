// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;

//     node(int data){
//         this->data= data;
//         this->next = NULL;
//     }
//     ~node(){
//         int value = this->data;
//         //memory free
//         if(this->next != NULL){
//             delete next;
//             this->next = NULL;
//         }
//         cout<<"memory is free from node with data "<<value<<endl;
//     }
// };

// void insertAtHead(node* &head,int d){
//     node* temp = new node(d);
//     temp->next = head;
//     head = temp;
// };


// void insertAtTail(node* &tail,int d){
//     node* temp = new node(d);
//     tail->next =temp;
//     tail=temp; 
// };
// void insertAtPosition(node* &head, node* &tail, int position,int d){
//     //insert at start
//     if(position == 1){
//         insertAtHead(head,d);
//         return;
//     }

//     node* temp = head;
//     int cnt = 1;
//     while(cnt<position-1){
//         temp = temp->next;
//         cnt++;
//     }
//     if (temp == NULL) {
//         cout << "⚠️ Invalid position " << position << ", inserting at tail.\n";
//         insertAtTail(tail, d);
//         return;
//     }
//     if(temp->next == NULL){
//         insertAtTail(tail,d);
//         return;
//     }
//     node* nodeToInsert = new node(d);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;

// };
// void deleteNode(int position, node* &head){
//     //deleting first or start node
//     if(position == 1){
//         node* temp = head;
//         head = head->next;

//         //memory free of start node

//         temp->next = NULL;
//         delete temp;
//     }else
//     {
//         // deleting any middle node or last node
//         node* curr = head;
//         node* prev = NULL;

//         int cnt =1;
//         while(cnt < position){
//             prev = curr;
//             curr = curr->next;
//             cnt++;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }

// void print(node* &head){
//     node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }cout<<endl;
// };


// int main(){
//     node* node1 = new node(10);
//     node* head = node1;
//     node* tail = node1;

//     insertAtPosition(head,tail,2,20);
//     print(head);
//     insertAtPosition(head,tail,3,30);
//     print(head);
//     insertAtPosition(head,tail,4,40);
//     print(head);
//     insertAtPosition(head,tail,6,50);
//     print(head);
//     deleteNode(2,head);
//     print(head);
// }
// ---------------------------------------------------

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     ~node() {
//         // ✅ changed: removed recursive delete to avoid double-free errors
//         cout << "memory is free from node with data " << this->data << endl;
//     }
// };

// void insertAtHead(node*& head, int d) {
//     node* temp = new node(d);
//     temp->next = head;
//     head = temp;
// }

// void insertAtTail(node*& tail, int d) {
//     node* temp = new node(d);
//     tail->next = temp;
//     tail = temp;
// }

// void insertAtPosition(node*& head, node*& tail, int position, int d) {
//     // insert at start
//     if (position == 1) {
//         insertAtHead(head, d);
//         return;
//     }

//     node* temp = head;
//     int cnt = 1;

//     // ✅ changed: added null-check to avoid segmentation fault
//     while (cnt < position - 1 && temp->next != NULL) {
//         temp = temp->next;
//         cnt++;
//     }

//     // ✅ changed: handle out-of-range insertion by appending at tail
//     if (temp->next == NULL) {
//         cout << "⚠️ Invalid position " << position << ", inserting at tail.\n";
//         insertAtTail(tail, d);
//         return;
//     }

//     node* nodeToInsert = new node(d);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;
// }

// void deleteNode(int position, node*& head) {
//     if (head == NULL) {  // ✅ changed: handle empty list
//         cout << "List is empty, nothing to delete.\n";
//         return;
//     }

//     // deleting first node
//     if (position == 1) {
//         node* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     } else {
//         node* curr = head;
//         node* prev = NULL;

//         int cnt = 1;
//         while (cnt < position && curr != NULL) {  // ✅ changed: added curr != NULL
//             prev = curr;
//             curr = curr->next;
//             cnt++;
//         }

//         // ✅ changed: handle invalid position safely
//         if (curr == NULL) {
//             cout << "⚠️ Position " << position << " out of range.\n";
//             return;
//         }

//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }

// void print(node*& head) {
//     node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     node* node1 = new node(10);
//     node* head = node1;
//     node* tail = node1;

//     insertAtPosition(head, tail, 2, 20);
//     print(head);
//     insertAtPosition(head, tail, 3, 30);
//     print(head);
//     insertAtPosition(head, tail, 4, 40);
//     print(head);
//     insertAtPosition(head, tail, 6, 50); // invalid, handled safely now ✅
//     print(head);

//     deleteNode(2, head);
//     print(head);

//     deleteNode(10, head); // ✅ test invalid delete
//     print(head);

//     return 0;
// }
// ----------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = nullptr;
    }
};
class mylinkedlist{
    public:
    node* head;
    mylinkedlist(){
        head = nullptr;
    }
    int get(int index){
        int count =0;
        node* temp = head;
        while(temp!=NULL){
            if(count == index)
                return temp->data;
            temp = temp->next;
            count++;
        }
        return -1;
    }
    void addAtHead(int val){
        node* newNode = new node(val);
        newNode->next = head;
        head = newNode;
    }
    void addAtTail(int val){
        node* newNode = new node(val);
        if(head == nullptr){
            head = newNode;
        }
        
        node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;            
        }
        temp->next = newNode;
        
    }
    void addAtindex(int index,int val){
        if(index==0){
            addAtHead(val);
            return;
        }
        node* newNode = new node(val);
        int count = 0;
        node* temp = head;
        while(temp->next!=NULL && count<index-1){
                temp = temp->next;
                count++;
        }
        if(temp->next==NULL){
            addAtTail(val);
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;

    }
    void deleteNode(int index){
        if(head == nullptr){
            return;
        }
        if(index == 0){
            node* temp = head;
            head =temp->next;
            delete temp;
            return; 
        }
        int count=0;
        node* temp =head;
        while(temp->next!=NULL && count<index-1){
            temp=temp->next;
            count++;
        }
        node* free = temp->next;
        temp->next = temp->next->next;
        delete free;

    }
    void print(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }

};
int main(){
    mylinkedlist* a= new mylinkedlist();    
    a->addAtHead(10);    
    a->print();
    a->addAtindex(1,12);
    a->print();
    a->addAtTail(13);
    a->print();

}