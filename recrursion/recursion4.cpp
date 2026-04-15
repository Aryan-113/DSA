#include<iostream>
using namespace std;

void f(int arr[],int i,int j){
    if(i<j){
        swap(arr[i],arr[j]);
        f(arr,i+1,j-1);
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    f(arr,0,4);
    for(int val:arr){
        cout<<val<<endl;
    }
    return 0;
}