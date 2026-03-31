#include <algorithm>
#include<iostream>
using namespace std;
int main(){
    bool isprime=true;

    int n;
    cout<<"enter n:\n";
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true) cout<<"prime number";
    else cout<<"not a prime number";
    return 0;
} 