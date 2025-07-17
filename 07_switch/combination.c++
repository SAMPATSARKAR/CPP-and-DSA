// #include <iostream>
// using namespace std;
// int fact(int n){
//     if(n<=1){
//         return 1;
//     }else{
//         return n * fact(n-1);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int r;
//     cin>>r;
//     int b = fact(n)/(fact(r)*fact(n-r));
//     cout<<b<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            cout << i << " " << j << endl;
            count++;
        }
    }

    cout << "Total combinations: " << count << endl;

    return 0;
}
