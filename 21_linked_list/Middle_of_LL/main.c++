#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data= data;
        this->next = NULL;
    }
    ~node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free from node with data "<<value<<endl;
    }
};

void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
};


void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next =temp;
    tail=temp; 
};
void insertAtPosition(node* &head, node* &tail, int position,int d){
    //insert at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    node* temp = head;
    int cnt = 1;
    while(cnt<position-1 && tail!= NULL){
        temp = temp->next;
        cnt++;
    }
    if (temp == NULL) {
        cout << "⚠️ Invalid position " << position << ", inserting at tail.\n";
        insertAtTail(tail, d);
        return;
    }
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

};
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
void deleteNode(int position, node* &head, node* &tail){
    if (position == 1) {
    node* temp = head;
    head = head->next;
    if (head == NULL) tail = NULL; // only node deleted
    temp->next = NULL;
    delete temp;
} else {
    node* curr = head;
    node* prev = NULL;
    int cnt = 1;
    while (cnt < position && curr != NULL) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    if (curr == NULL) return; // invalid position
    prev->next = curr->next;
    if (curr->next == NULL) tail = prev; // last node deleted
    curr->next = NULL;
    delete curr;
}

}


void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
};
void middleLL(node* &head){
    int cnt = 0;
    node* temp = head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int middle=(cnt/2)+1;
    node* temp1 = head; 
    int pos =1;
    while(pos != middle){

        temp1=temp1->next;
        pos++;
    }
    cout<<temp1->data<<endl;
    

}


int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    insertAtPosition(head,tail,2,20);
    print(head);
    insertAtPosition(head,tail,3,30);
    print(head);
    insertAtPosition(head,tail,4,40);
    print(head);
    insertAtPosition(head,tail,5,50);
    print(head);
    // deleteNode(2,head);
    // print(head);
    middleLL(head);
}