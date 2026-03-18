#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={1,2,2,1,1};
    int n=nums.size();
    int majority=-1;

    for(int value:nums){
        int freq=0;
        for(int element:nums){
            if(element==value){
                freq++;
            }
        }
        if(freq>n/2){
            majority = value;
            break;
        }

    }
    cout<<"the majority number is "<<majority;
    return 0;
}