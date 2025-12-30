// #include<bits/stdc++.h>
// using namespace std;
// bool palindromeCheck(string str,int i,int j){
//     if(str.length() == 0) return true;

//     if(i>j) return true;

//     if(str[i] != str[j]) 
//         return false;
        

//     i++;
//     j--;
//     return palindromeCheck(str,i,j);
// }
// int main(){
//     cout<<palindromeCheck("malayalam",0,8)<<endl;
//     return 0;
// }

//insert and value less than target
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    node* insert(node* root,int val){

        node* curr = root;
        while(true){

            if(curr->data<val){
                if(curr->right!=NULL){
                    curr=curr->right;
                }else{
                    curr->right= new node(val);
                    break;
                }
            }
            else{
                if(curr->left!=NULL){
                    curr=curr->left;
                }else{
                    curr->left= new node(val);
                    break;
                }
            }
        }
        return root;
    }
    void findless(node* root, int target,int &count){
        if(root == NULL) return ;

        findless(root->left,target,count);
        if(root->data<target){
            cout<<root->data<<" ";
            count++;
        }
        findless(root->right,target,count);
    }
    void print(node* root){
        if(root==NULL) return ;
        print(root->left);
        cout<<root->data;
        print(root->right);
    }

};
int main(){
    node a(10);
    a.insert(&a,20);
    a.insert(&a,30);
    a.insert(&a,40);
    a.insert(&a,50);
    int count=0;
    a.findless(&a,40,count);
    cout<<"Count"<<count<<endl;
}