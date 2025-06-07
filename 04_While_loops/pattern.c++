// ----------------------------3X3 pattern--------------------
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


//     return 0;
// }
// -------------------------------3X3 rownumber pattern~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


//     return 0;
// }
// ------------------------------------4X4 pattern reverse ----------------
// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }
// ---------------------pattern like dial pad---------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count =1;
//     int i =1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<< count<<" ";
//             count ++;
//             j++;
//         }
//         cout<< endl; 
//         i++;
//     }

//     return 0;
// }
// -----------------------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int count = i;
//         int j=1;
//         while(j<=i){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl; 
//         i++;
//     }



//     return 0;
// }
// -----------------------------reverse triangle~~~~~~~~~~~~~~~~~~~~~~
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i-j+1;
//             j++;
//         }
//         i++;
//         cout<<endl;

//     }


//     return 0;
// } 
// ~~~~~~~~~~~~~~~~~~~~~~~alphabet pattern~~~~~~~~~~~~~~~~~~~
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         char ch = 'A'+i-1;
//         int j=1;
//         while(j<=n){
//             cout<<ch<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
// -------------------- alphabet pattern-----------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A'+j-1;
//             cout<< ch;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }

//     return 0;
// }
// ---------------------------alphabet inc order pattern---------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     char ch = 'A'; 
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<ch<<" ";
//             j++;
//             ch++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
// -------------------------alphabet pattern~~~~~~~~~~~~~~~~~~~~~
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     char countm='A';
//     while(i<=n){
//         char count = countm;
//         int j=1;
//         while(j<=n){
//             cout<<count;
//             j++;
//             count++;
//         }
//         i++;
//         countm++;
//         cout<< endl;
//     }



//     return 0;
// }
// ------------for printing pattern starting with row------------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i+j-1;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
// -------------------using the above formula to print in alphabets------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch = 'A'-2+i+j;
//         while(j<=n){
//             cout<<ch<<" ";
//             j++;
//             ch++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
// --------------------------
// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch ='A'+i+j-2;
//             cout<<ch<<" ";
//             j++;ch++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
// ------------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//     char ch ='A'+n-i;
//     int j=1;
//     while(j<=i){
//         cout<<ch<<" ";
//         ch++;
//         j++;
//     }
//     i++;
//     cout<<endl;
//     }
//     return 0;
// }
// ----------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//     char ch ='A'+i-1;
//     int j=1;
//     while(j<=n){
//         cout<<ch<<" ";
//         ch++;
//         j++;
//     }
//     i++;
//     cout<<endl;
//     }
//     return 0;
// }
// -------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space --;
//         }
//         int col=1;
//         while(col<=i){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }
// -----------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n-i+1){
//             cout<<"*";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
// -----------------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int space=i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int col=1;
//         while(col<=n-i+1){
//             cout<<i;
//             col++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~``
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int col=1;
//         while(col<=i){
//             cout<<i;
//             col++;
//         }
//         i++;
//         cout<<endl;        
//     }
//     return 0;
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space = i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int col=1;
//         while(col<=n-i+1){
//             cout<<i+col-1;
//             col++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~``
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"input-"<<endl;
//     cin>> n;
//     int i=1;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space --;
//         }
//         int col=1;
//         while(col<=i){
//             cout<<col;
//             col++;
//         }
//         // int col1=1;
//         // while(col1<=i-1){
//         //     cout<<i-col1;
//         //     col1++;
//         // }
//         int col1=i-1;
//         while(col1){
//             cout<<col1;
//             col1--;
//         }
//         i++;
//         cout<<endl;
//     }


//     return 0;
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n-i+1){
//             cout<<j;
//             j++;
//         }
//         int col =i-1;
//         while(col){
//             cout<<'*';
//             col--;
//         }
//         int col1=1;
//         while(col1<=i-1){
//             cout<<'*';
//             col1++;
//         }
//         int col2=n-i+1;
//         while(col2){
//             cout<<col2;
//             col2--;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// #include <iostream>
// using namespace std;
// int main(){
//     int a=2;
//     int i=3;
//     // int sum = a+(++i);
//     int sum1 = a+(i++);

//     // cout<<"++i -"<<sum<<endl;
//     cout<<"i++ -"<<sum1<<endl;


//     return 0;
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~