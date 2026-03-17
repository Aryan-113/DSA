//brute force
//asumming there is a valid answer and the given array i sorted

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans{};
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}


int main(){
    /*int n=5;
    int arr[5]={2,4,7,6,9};
    //value 10
    int ans=10;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==ans){
                cout<<i<<" and "<<j;
            }
        }
    }*/

    vector<int> ars={2,5,6,8,1};
    int target = 9;

    vector<int> ans=pairsum(ars,target);
    cout<<ans[0]<<" and "<<ans[1];

    return 0;
}