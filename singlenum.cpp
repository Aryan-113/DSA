#include<iostream>
#include<vector>
using namespace std;

int main(){

    int singlenum=0  ;
    vector<int>vec={3,1,3,4,1,2,2};

    for(int val:vec){
        singlenum=(singlenum^val);
    }
    cout<<"the single number is:"<<singlenum;
    return 0;
}