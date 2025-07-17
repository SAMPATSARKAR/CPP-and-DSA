#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int col1=1;
        while(col1<=i-1){
            cout<<"*"<<" ";
            col1++;
        }
        int col2=1;
        while(col2<=i-1){
            cout<<"*"<<" ";
            col2++;
        }
        // int col3=1;
        // while(col3<=n-i+1){
        //     int x = n-col3+1;
        //     cout<<x<<" ";
        //     col3++;
        // }

        int col3 = n-i+1;
        while(col3!=0){
            cout<< col3<<" ";
            col3--;
        }
        
        i++;
        cout<<endl;
    }
}