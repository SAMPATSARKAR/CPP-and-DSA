// #include <iostream>
// using namespace std;
// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){

//     int num;
//     cin>>num;
//     if(isPrime(num)){
//         cout<<"Is prime"<<endl;
//     }else{
//         cout<<"Not a prime"<<endl;
//     }



//     return 0;
// }
#include<iostream>

using namespace std;



int main() {

    int array[100];



    //To initialize the array with value'1'.

    fill_n(array, 100, 1);



    //To check the array input (kewaal 5 hi kari h print)

    for(int i = 0; i <= 5; i++){

        cout << array[i] << endl;

    }



}
