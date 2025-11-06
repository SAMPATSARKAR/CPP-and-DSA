#include<iostream>
using namespace std;
class man{
    char focus;
    char positive;
    int sigma;
};
int main(){
    cout<<"size of man:- "<<sizeof(man)<<endl;//ans--8
}
class man{
    char focus;
    int sigma;
    char positive;
};
int main(){
    cout<<"size of man:- "<<sizeof(man)<<endl;//ans--12
}