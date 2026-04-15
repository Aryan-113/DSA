#include<iostream>
#include<vector>
using namespace std;

//IMPORTANT WE USED & TO PASS THE VECTOR BY REFERENCE
void f(vector<int> &vec,int l,int r){
    if(l>=r) return;
    else{
        swap(vec[l],vec[r]);
        f(vec,l+1,r-1);
    }
}

//using only onne variable
void f2(int arr[],int i,int n){
    if(i>=n/2) return;
    else{
        swap(arr[i],arr[n-i-1]);
        f2(arr,i+1,n);
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr) / sizeof(arr[0]);
    f2(arr,0,n);
    for(int val:arr){
        cout<<val<<endl;
    }
    return 0;
}