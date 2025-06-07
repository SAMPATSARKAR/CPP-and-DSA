// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin >> n;
// int i =1;
// while(i<=n){
//     cout <<i<<endl;
//     i++;
// }
// return 0;
// }
// ----------------------------------------
// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     int i =1;
//     int sum = 0;
//     while(i<=n){
//         sum = sum + i;
//         i++;
//     }

//     cout << "The sum is :- "<< sum << endl;

//     return 0;
// }
// -------------------sum of n numbers using formula ---------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a = 1;
//     int sum = n*(a+n)/2;
//     cout<< "Sum of n numbers:- "<< sum << endl;

//     return 0;
// }
// ---------------sum of even numbers--------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >>n;
//     int  i = 1 ;
//     int sum = 0;
//     while(i<=n){
//         if(i%2==0){
//             sum =sum +i;
//         }
//         i++;
//     }
//     cout << "Sum of even number is:- "<< sum<< endl;

//     return 0;
// }
// ---------------farenheit-----------
// #include <iostream>
// using namespace std;
// int main(){
//     cout << "Choose between *c or *f to convert into:- " << endl;
//     char a;
//     cin >> a;
//     if(tolower(a) == 'c'){
//         cout<< "Enter Farenheight:- " << endl;
//         int f;
//         cin >> f;
//         int celsius = (f-32)*5/9;
//         cout << "The celsius is:- " << celsius<< endl;
//     }
//     return 0;
// }
// ----------------------prime number-------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 2;
//     while (i < n)
//     {
//         if (n % i == 0)
//         {
//             cout << "Not prime " << i << endl;
//         }
//         else
//         {
//             cout << "Prime " << i << endl;
//         }
//         i++;
//     }

//     return 0;
// }