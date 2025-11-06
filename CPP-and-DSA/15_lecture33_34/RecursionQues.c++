// #include<iostream>
// using namespace std;
// bool isSorted(int *arr,int n){
//     if(n==0){
//         return true;
//     }
//     if(n==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }else{
//         return isSorted(arr+1,n-1);
//     }


// }
// int main(){


//     int arr[5]={1,2,3,5,4};
//     int size = 5;
//     int ans = isSorted(arr,size);
//     if(ans){
//         cout<<"Sorted"<<endl;
//     }else{
//         cout<<"Not Sorted"<<endl;
//     }


// } 
// -------------------------
// #include<iostream>
// using namespace std;
// int main(){
//      arr[]= {11,21,31,41};
//     int* ptr = arr+1;// correct as it means inc the pointer address->&arr[1]
//     cout<<*ptr<<endl;
//     int* ptr = arr++;//wrong as it means changing the address
//     cout<<*ptr<<endl;
// }
// ----------------sum of n number
// #include<iostream>
// using namespace std;
// int Sum(int *arr,int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return arr[0];
//     };
//     // int remaining = Sum(arr+1,n-1);
//     // int sum =  arr[0]+remaining;//explanation

//     int sum =  arr[0]+ Sum(arr+1,n-1);

//     return sum;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     int ans=Sum(arr,size);
//     cout<<ans<<endl;

// }
// -------------------finding key element-------------------
// #include<iostream>
// using namespace std;
// bool FindingKey(int *arr,int n,int key){
//     //basecase
//     if(n==0){
//         return 0;
//     }    
//     if(arr[0]==key){
//         return 1;
//     }

//     // bool remainingPart = FindingKey(arr+1,n-1,key);
//     // return remainingPart;//for returning false
//     return FindingKey(arr+1,n-1,key);
    

// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size = 5;
//     int key = 6;
//     bool ans = FindingKey(arr,size,key);
//     if(ans){
//         cout<<"Found"<<endl;
//     }else{
//         cout<<"Not found"<<endl;
//     }
//     return 0;
// }
// -------------------Binary Search
// #include<iostream>
// using namespace std;

// bool BinarySearch(int *arr,int key,int s,int e){
//     //base case
//     if(s>e){
//         return false;
//     }
//     int mid = s+(e-s)/2;
//     //match case
//     if(arr[mid]==key){
//         return true;
//     }
//     if(arr[mid]<key){
//         return BinarySearch(arr,key,mid+1,e);
//     }else{
//         return BinarySearch(arr,key,s,mid-1);
//     }

// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int key = 5;
//     int s =0;
//     int e = 4;
//     bool ans = BinarySearch(arr,7,s,e) ;
//     if(ans){
//         cout<<"Found"<<endl;
//     }else{
//         cout<<"Not Found"<<endl;
//     }

// }
// -------------------reverse------------
// #include<iostream>
// #include<string>
// using namespace std;
// // string reversed(string& name,int n){
// //     if(n==0){
// //         return "";
// //     }
// //     
// //     return name[n-1]+reversed(name,n-1);


// // }



// void reverse(string &name, int n,int s,int e){
    
//     if(s>e){
//         return ;
//     }

//     swap(name[s++],name[e--]);

//     reverse(name,n,s,e);

//     }


// // int main(){
// //     string name="Sampat";
    
    
// //     cout<<reversed(name,name.size())<<endl;/*this gives new string and so
//                                                 // if we print the new string 
//                                                 // we can by printing name var.*/
// //     return 0;
// // }
// int main(){
//     string name="Sampat";
//     int s =0;
//     int e =name.size()-1;
    
//     cout<<reverse(name,name.size(),s,e)<<endl;
//     return 0;
// }
// --------------Palindrome---------------

// #include<iostream>
// using namespace std;
// int isPalindrome(string str,int s,int e){
//     //base cond
//     cout<<str<<endl;
//     if(s>e){
//         return 1;
//     }
//     if(str[s]!=str[e]){
//         return 0;
               
//     }
//     return isPalindrome(str,s+1,e-1);

// }

// int main(){
//     string str = "malayalam";
//     int size = str.size();
//     int  s = 0;
//     int e = size-1;
//     int ans = isPalindrome(str,s,e);
//     if(ans){
//         cout<<"Palindrome"<<endl;
//     }else{
//         cout<<"Not a Palindrome"<<endl;
//     }
// }
// -----------------power-----------
// #include <iostream>

// using namespace std;

// int power(int a,int b){
//     if(b==1){
                
//         return a;
//     }
//     if(b==0){
//         return 1;
//     }
//     //recursive call
//     int ans = power(a,b/2);

//     cout<<"Second: "<<ans<<endl;

//     if(b%2==0){
//         cout<<"Third: "<<ans<<endl;

//         return ans * ans;
        
//     }else{

//         cout<<"Fourth: "<<ans<<endl;

//         return a*ans*ans;
//     }
// }
// int main(){

//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     cout<<power(a,b)<<endl;

// }
// --------------------Bubble sort
// #include <iostream>
// using namespace std;
// void BuSort(int *arr,int n){

//     if(n==0||n==1){
//         return ;
//     }
//     for(int i = 0 ;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     BuSort(arr,n-1);
// }
// int main(){

//     int arr[5]={1,2,6,4,5};
//     BuSort(arr,5);
//     //print
//     for(int i = 0 ;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;



//     return 0;

// };
// -----------------------------------------
