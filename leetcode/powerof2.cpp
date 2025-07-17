#include <iostream>
#include <climits>
using namespace std;
bool power(int n){
    int ans=1;
        for(int i=0;i<=30;i++){
            if(ans == n){
                return true;
            }
            if(ans <=INT_MAX/2){
                ans = ans*2;
            }
        }
        return false;
}
int main(){
    if(power(9)){
    cout<< "Power of 2" <<endl;
    }else{
        cout<<"Not power of 2"<<endl;
    }

}