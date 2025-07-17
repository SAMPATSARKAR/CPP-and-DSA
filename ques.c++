// #include<iostream>
// using namespace std;
// int main(){
//     int a=9;
//     if(a == 9){
//         cout << "NINEY"<<endl;
//     }
//     if(a>0){
//         cout <<"POSITIVE"<<endl;
//     }else{
//         cout<<"NEGATIVE"<<endl;
//     }
//     return 0;
// }
// -----------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int a =2;
//     int b=a+1;
//     if((a=6)==b){
//         cout<<a<<endl;
//     }else
//     {
//         cout <<a+2<<endl;
//     }
//     return 0;
// }
// ------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int a =2;
//     int b=a+1;
//     if((a=6)==b){
//         cout<<a<<endl;
//     }else
//     {
//         cout <<a+2<<endl;
//     }
//     return 0;
// }
// ---------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int a =24;
//     if(a>20){
//         cout<<"love"<<endl;
//     }
//     else if(a == 24){
//         cout<<"Lovly"<<endl;
//     }
//     else{
//         cout<<"Babbar"<<endl;
//     } 
//     cout<<a<<endl;
//     return 0;
// }
// -----------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     a=cin.get();
//     if(a >= 65 && a <= 90){
//         cout<<"This is uppercase"<<endl;
//     }else if(a>=97 && a<=122){
//         cout<<"a is lowercase"<<endl;
//     }else if(a>=48 && a<=57){
//         cout<<"a is a number"<<endl;
//     }

//     return 0;
// }
// ------------------------------------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         cout<<i<<" ";
//         i = i+1;
//     }

//     return 0;
// }
// ~~~~~~~~~~~~~~sum and prod of digits of number~~~~~~~~~~~~~~~~~~~~~
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     int multiply = 1;
//     while(n!=0){
//         int rem = n%10;
//         sum = sum + rem;
//         multiply = multiply + rem;
//         n = n/10;
//     }
//     cout<< sum << endl;
//     cout<< multiply << endl;
// }
// ~~~~~~~~~~~~~~~~~~~~~rev of a number~~~~~~~~~~~~~~~~~~~~
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    bool ab = false;
    while(n!=0){
        int last = n%10;
        if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
            ab = true;
            break;
        }
        ans = (ans * 10) + last;
        n = n/10;
    }
    if(ab){
        cout<<"0"<<endl;
    }else{
    cout<<ans<<endl;
    }

}