// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int i=1;
// //     while(i<=n){
// //         int j=1;
// //         while(j<=n-i+1){
// //             cout<<j<<" ";
// //             j++;
// //         }
// //         int col1=1;
// //         while(col1<=i-1){
// //             cout<<"*"<<" ";
// //             col1++;
// //         }
// //         int col2=1;
// //         // int col2=1;
// //         while(col2<=i-1){
// //             cout<<"*"<<" ";
// //             col2++;
// //         }
// //         // int col3=1;
// //         // while(col3<=n-i+1){
// //         //     int x = n-col3+1;
// //         //     cout<<x<<" ";
// //         //     col3++;
// //         // }

// //         int col3 = n-i+1;
// //         while(col3!=0){
// //             cout<< col3<<" ";
// //             col3--;
// //         }
        
// //         i++;
// //         cout<<endl;
// //     }
// // }
// // ------------------------doubly LL--------------
// // #include <iostream>
// // using namespace std;
// // class node{
// //     public:
// //     int data;
// //     node* next;
// //     node* prev;

// //     node(int data){
// //         this->data = data;
// //         this->next=NULL;
// //         this->prev=NULL;
// //     }

// // };
// // int getLength(node* &head){
// //     node* temp = head;
// //     int len=0;
// //     while(temp != NULL){
// //         len++;
// //         temp=temp->next;
// //     }
// //     return len;
// // };
// // void insertAtHead(node* &head,int d){
// //     node* temp = new node(d);
// //     temp->next=head;
// //     head->prev=temp;
// //     head=temp;

// // }
// // void insertAtTail(node* &tail,int d){
// //     node* temp = new node(d);
    
// //     temp->prev = tail;
// //     tail->next = temp;
// //     tail=temp; 
// // };
// // void insertAtAnyPosition(node* &head,node* &tail,int position,int d){
// //     //if at start
// //     if(position == 1){
// //         insertAtHead(head,d);
// //         return ;
// //     }

// //     node* temp = head;
// //     int cnt = 1;

// //     while(cnt<position-1){
// //         temp = temp->next;
// //         cnt++;
// //     }
// //     //inserting at last position
// //     if(temp->next == NULL){
// //         insertAtTail(tail,d);
// //         return;
// //     }
// //     //inserting at any position
// //     node* nodeToInsert = new node(d);
// //     nodeToInsert->next  = temp->next; 
// //     temp->next->prev = nodeToInsert;
// //     temp->next = nodeToInsert;
// //     nodeToInsert->prev=temp; 
// // }
// // void print(node* &head){
// //     node* temp = head;
// //     while(temp != NULL){
// //         cout<<temp->data<<" ";
// //         temp = temp->next;
// //     }cout<<endl;

// // }

// // int main(){
// //     node* curr = new node(10);
// //     node* head = curr;
// //     node* tail = curr;
// //     print(head);
// //     insertAtHead(head,12);
// //     print(head);
// //     insertAtTail(tail,23);
// //     print(head);
// //     insertAtAnyPosition(head,tail,3,20);
// //     print(head);

// //     return 0;

// // }
// // --------------------------------------
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data = data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Data to be freed:- "<<this->data<<endl;

    }

};
int getLength(node* &head){
    node* temp = head;
    int len=0;
    while(temp != NULL){
        len++;
        temp=temp->next;
    }
    return len;
};
void insertAtHead(node* &tail,node* &head,int d){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;

    }else{
        node* temp = new node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

}
void insertAtTail(node* &tail,node* &head,int d){
    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }else{
        node* temp = new node(d);
        
        temp->prev = tail;
        tail->next = temp;
        tail=temp; 
    }
};

void insertAtAnyPosition(node* &tail,node* &head,int position,int d){
    //if at start
    if(position == 1){
        insertAtHead(tail,head,d);
        return ;
    }

    node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }
    //inserting at any position
    node* nodeToInsert = new node(d);
    nodeToInsert->next  = temp->next; 
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev=temp; 
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;

}
void deleteNode(int position,node* &head){
    if(position == 1){
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

    }else{

        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;

    }

}

int main(){
    // node* curr = new node(10);
    node* head = NULL;
    node* tail = NULL;
    // print(head);
    insertAtHead(tail,head,12);
    print(head);
    insertAtTail(tail,head,23);
    print(head);
    insertAtAnyPosition(tail,head,3,20);
    print(head);
    insertAtAnyPosition(tail,head,1,20);
    print(head);
    insertAtAnyPosition(tail,head,5,27);
    print(head);
    deleteNode(1,head);
    print(head);
    delete(head);
    // print(head);
    return 0;

}