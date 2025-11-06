#include <iostream>
using namespace std;
int main(){
    int amount;
    cin>>amount;
    int note100=0,note50=0,note20=0,note1=0;
    int choice = 1;
    while(amount>0){
    switch(choice){
        case 1:
            if(amount>=100){
                note100=amount/100;
                amount-=note100*100;
            }
            choice++;
            break;
        case 2:
            if (amount>=50){
                note50=amount/50;
                amount-=note50*50;

            }
            choice++;
            break;
        case 3:
            if (amount>=20){
                note20=amount/20;
                amount-=note20*20;
                }
                choice++;
                break;
        case 4:
                if(amount>=1){
                    note1=amount/1;
                    amount-=note1*1;
                }
                choice++;
                break;
        default:
        amount = 0;
        break;
        }
    }
    cout << "100 Rupee notes: " << note100 << endl;
    cout << "50 Rupee notes: " << note50 << endl;
    cout << "20 Rupee notes: " << note20 << endl;
    cout << "1 Rupee coins: " << note1 << endl;
    return 0;
}