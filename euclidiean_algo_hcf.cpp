//euclidiean_aldo(gcd).cpp
#include<iostream>
using namespace std;

// gcd(a,b)=gcd(a-b,b) where a>b
// ex,gcd(20,15)=gcd(5,15)
// gcd(5,15)=gcd(10,5)
// gcd(10,5)=gcd(5,5)
// gcd(5,5)=gcd(0,5)
// whenever 1 is 0 them the other is the gcd

int main(){
    int a,b;
    cout<<"enter a:\n";
    cin>>a;
    cout<<"enter b:\n";
    cin>>b;
    
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<"gcd is:"<<b;
    else cout<<"gcd is:"<<a;

    return 0;
}