#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n) return;
    else{
        f(i-1,n);
        cout<<i;
    }
}

void f2(int i,int n){
    if(i<1) return;
    else{
        f2(i-1,n);
        cout<<n-i+1<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    f2(n,n);
    return 0;
}