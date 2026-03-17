#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec={1,-2,3,-1,2};
    int num=0;
    for(int i=0;i<vec.size();i++){
        num=num+vec[i];
    }
    cout<<num;
    return 0;
}