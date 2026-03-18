#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={0,0,1,1,1,3,3,3,3,3,3};
    int n=nums.size();
    int ans=-1;
    int freq=1;
    
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else {
            freq=1;
        }
        if(freq>n/2){
            ans=nums[i];
        }
    }
    cout<<ans;
    return 0;
}