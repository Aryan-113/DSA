//sum of n umbers
#include<iostream>
using namespace std;

int sum=0;
void f(int n){
if(n==0){
    return;
}
else{
sum=sum+n;
f(n-1);
}
}

int main(){
    int n;
    cin>>n;
    f(n);
    cout<<sum;
}