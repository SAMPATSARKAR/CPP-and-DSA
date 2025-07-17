// ~~~~~~~~~~~~~~first and last occurence in a sorted array~~~~~~~~~~~
// #include <iostream>
// using namespace std;
// int firstOccur(int arr[],int n, int key){

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e){
        
//         if(arr[mid]==key){
//             ans = mid;
//             e = mid -1;
            
//         }else if(arr[mid]> key){
//             e = mid-1;
//         }else{
//             s = mid +1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;

// }
// int lastOccur(int arr[],int n, int key){

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e){
        
//         if(arr[mid]==key){
//             ans = mid;
//             s = mid +1;
            
//         }else if(arr[mid]> key){
//             e = mid-1;
//         }else{
//             s = mid +1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;

// }
// int main(){

//     int arr[10]={1,2,2,2,3,3,3,4,5,5};
//     cout<<"Index of the firstOccurence is :- "<<firstOccur(arr,10,5)+1<<endl;
//     cout<<"Index of the lastOccurence is :- "<<lastOccur(arr,10,5)+1<<endl;
//     return 0;

// }

// ----------------------------------------------------------
// total no of occurence

// #include <iostream>
// using namespace std;
// int NoOfOccurence(int arr[],int n,int key){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     int first = -1 ;
//     //first occurence
//     while(s<=e){
//         if(arr[mid]==key){
//             first = mid;
//             e = mid -1;// to search left
//         }else if(arr[mid]<key){
//                 s =mid +1;
//         }else{
//             e = mid -1;
//         }
//         mid = s + (e-s)/2;
//     }
//     //last occurence
//     s = 0;
//     e = n-1;
//     mid = s + (e-s)/2;
//     int last = -1 ;
//     while(s<=e){
//         if(arr[mid]==key){
//             last = mid;
//             s = mid + 1;// to search right
//         }else if(arr[mid]<key){
//                 s = mid +1;
//         }else{
//             e = mid -1;
//         }
//         mid = s + (e-s)/2;
//     }
//     if (first == -1 || last == -1){
//         return 0;
//     }else{
//     return (last-first)+1;
//     }
// }
// int main(){
//     int arr[13]={1,1,2,2,2,3,3,3,4,4,5,5,5};

//     cout<<"No of occurence is:- "<< NoOfOccurence(arr,13,4) <<endl;
//     return 0;

// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~find peak in mountain~~~~~~~~~~~~~~~~~~
#include <iostream>
using namespace std;
int mountain(int arr[],int size){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if (arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e -s)/2;
    }
    return s ;
}
int main(){
    int arr[5]={1,2,3,2,1};

    cout<<"Peak is at index:- "<<mountain(arr,5)<<endl;
    cout<<"It's value is :- "<<arr[mountain(arr,5)]<<endl; 
}
// ~~~~~~~~~~~~~~~~~sqrt by binary search~~~~~~~~~~~
// #include <iostream>
// using namespace std;
// long long int sqrt(int n){
//     long long int ans = -1;
//     int s = 0;
//     int e = n;
//     long long int mid = s + (e-s)/2;
//     while(s<=e){
//         long long int square = mid*mid;
//         if(square  == n ){
//             return mid;
//         }else if(square < n){
//             ans = mid;
//             s=mid+1;
//         }else{
//             e = mid -1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// double morePrecision(int n,int precision,int tempSol){
//     double factor = 1;
//     double ans = tempSol;
//     for(int i=0;i<precision;i++){
//         factor = factor/10;
//         for(double j =ans;j*j<n;j=j+factor){
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main(){
//     int tempSol=sqrt(101);
//     cout<<"Square root of 6 is:- "<<morePrecision(101,3,tempSol)<<endl;
// }
// ~~~~~~~~~~~~~~~~~BookAllocation~~~~~~~~
// #include<vector>
// #include <iostream>
// using namespace std;

// bool isPossible(vector<int> arr, int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;
//     //cout << "checking for mid "<< mid <<endl;
    
//     for(int i = 0; i<n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid ) {
//             return false;
//         }
//             pageSum = arr[i];
//         }
//         if(studentCount > m) {
//             return false;
//         }
//         //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
//     }
//     return true;
// }

// int allocateBooks(vector<int> arr, int n, int m) {
//     int s = 0;
//     int sum = 0;
    
//     for(int i = 0; i<n; i++) {
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr ={10,20,30,40};
    
//     cout<<allocateBooks(arr,4,2)<<endl;
//     return 0;
// }
