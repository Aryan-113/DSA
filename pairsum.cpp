//two pointer approach
//sorted array

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans{};
    int n=nums.size();

    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(nums[i]+nums[j]<target){
            i++;
        }
        else if(nums[i]+nums[j]>target){
            j--;
        }
        else if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    
}

int main(){

    vector<int> ars={1,2,4,5,6};
    int target = 9;

    vector<int> ans=pairsum(ars,target);
    cout<<ans[0]<<" , "<< ans[1];

    return 0;
}