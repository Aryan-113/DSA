//O(n) time complexity
//majority element

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums = {1,2,2,3,1};
    int freq=0,ans=0;

    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    int count =0;
    for(int val:nums){
        if(val==ans){
            count++;
        }
    }

    if(count>nums.size()/2){
        cout<<ans;
    }
    else{
        cout<<-1;
    }
    return 0;
}