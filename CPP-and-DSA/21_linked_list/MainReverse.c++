#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){
        int val = this->data;
        while(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Value that is deleted is:- "<<val<<endl;
    }

};
void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp->next= head;
    head = temp;
}
void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next= temp;
    tail = temp;
}
void insertAtAnyPosition(node* &tail,node* &head,int d,int position){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
        return;
    }
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    node* temp = head;
    int cnt =1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp == NULL){
        cout<<"Inserting at tail as its out of reach"<<endl;
        insertAtTail(tail,d);
        return;
    }
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(node* &head,int position){
    node* curr = head;
    node* prev = NULL;
    int cnt =1;
    while(cnt<position){
        prev=curr;
        curr=curr->next;        
        cnt++;
    }
    prev->next= curr->next;
    curr->next = NULL;
    delete curr;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
node* reverse1(node* head){
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

};
// ---------------------------------------------------------------
void reverse2(node* &head,node* curr, node* prev){
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
    node* forward = curr->next;
    reverse2(head,forward,curr);
    curr->next =prev;
}
node* reverseLL(node* head){ //cal using this fxn
    node* curr = head;
    node* prev = NULL;
    reverse2(head,curr,prev);
    return head;
}
// ---------------------------------------------------------------
node* reverse3(node* &head){
    if(head ==NULL || head -> next == NULL){
        return head;
    }
    node* chotahead = reverse3(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotahead;
}
node* reverseLLL(node* head){
    return reverse3(head);
}
// --------------------------------------------
int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAtAnyPosition(tail,head,1,1);
    print(head);
    insertAtAnyPosition(tail,head,2,2);
    print(head);
    insertAtAnyPosition(tail,head,3,3);
    print(head);
    insertAtAnyPosition(tail,head,4,4);
    print(head);
    node* h = reverseLLL(head);
    print(h);
}
