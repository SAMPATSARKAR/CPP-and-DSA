#include <iostream>
#include <map>
using namespace std;
class node{
    //constructor
    public:
    int data;
    node* next;
    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    
    ~node(){
        int value = this->data;
        while(this->next != NULL){
            delete next;
            next=NULL;
        }

        cout<<"Memeory freed is:- "<<value<<endl;
    }
};

void insertNode(node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
        return;
    }else{
        //non-empty list
        node* curr = tail;
        while(curr->data != element){
            curr=curr->next;

        }
        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node* &tail){
    node* temp = tail;
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
    
}
void deleteNode(node* &tail,int value){
    //empty list
    if(tail == NULL){
        cout<<"List is empty,plz check again"<<endl;
        return;
    }else{
        //non-empty
        node* prev = tail;
        node* curr = prev->next;;
        while(curr->data != value){
            prev = curr;
            curr= curr->next;
        }
        prev->next = curr->next;
        if(curr == prev){
            tail = NULL;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
bool isCircularList(node* head){
    //empty  list
    if(head == NULL){
        return true;
    }

    node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }
    return false;
    
}
bool detectLoop(node* head){
    if(head == NULL){
        return false;

    }
    map<node* , bool> visited;
    node* temp = head;
    while(temp !=NULL){
        //cycle is present
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
int main(){
    
    node* tail = NULL;
    // insertNode(tail,2,1);
    // print(tail);
    // insertNode(tail,1,2);
    // print(tail);
    // insertNode(tail,2,3);
    // print(tail);
    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    if(detectLoop(tail)) {
        cout << " Cycle is present" << endl;
    }
    else{
        cout << "Cycle is not present " << endl;
    }
    

    return 0;
}