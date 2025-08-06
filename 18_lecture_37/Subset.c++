#include<iostream>
#include <vector>
using namespace std;

void solve(vector<int> &nums,vector<int> &temp,int i,vector<vector<int>> &result){
    if(i>=nums.size()){
        result.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    solve(nums,temp,i+1,result);
    temp.pop_back();
    solve(nums,temp,i+1,result);


}


vector<vector<int>> subset(vector<int>&nums){
    vector<vector<int>> result;
    vector<int>temp;
    solve(nums,temp,0,result);
    return result;
}
int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> a = subset(nums);
    for(auto &sub : a){
        cout<<"{";
            for(int val : sub){
                cout<<val<<" ";
            }
        cout<<"}"<<endl;
    }

    return 0;

}