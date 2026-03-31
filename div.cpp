#include<iostream>
#include<math.h>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter n:\n";
    cin>>n;

    // time complecity = O(n)
    
    // for(int i=1;i<=n/2;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }
    // cout<<n;
    vector<int> vec;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            vec.push_back(i);
            if((n/i)!=i){
                vec.push_back(n/i);
            }
        }
    }
    sort(vec.begin(),vec.end());
    for(auto val:vec){
        cout<<val<<" ";
    }
    return 0;
}