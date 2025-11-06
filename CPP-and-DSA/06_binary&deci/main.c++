// ~~~~~~~~~~~~~~~~~~~~~Decimal to binary ~~~~~~~~~~~~~~~~
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int ans = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n&1;
//         ans = (bit * pow(10,i))+ans;
//         // ans = ans * 10 + bit;
//         n = n>>1;
//         i++;

//     }
//     cout<<"Ans-"<<ans<<endl;
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~`
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  
//     string binary = "";

//     if (n == 0) {
//         binary = "0";
//     } else {
//         while (n > 0) {
//             int bit = n % 2;           
//             binary = to_string(bit) + binary; 
//             n = n / 2;             
//         }
//     }es the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

//     cout << "Binary: " << binary << endl;
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~binary to decimal~~~~~~~~~~~~
#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int ans =0;
    int i =0;
    while(n!=0){
        int bit = n&1;
        if(bit == 1){
            ans = ans + pow(2,i);
            
        }
        n=n/10;
        i++;
   }
   cout<< ans << endl;
}