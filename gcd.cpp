#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter first number:\n";
    cin>>n1;
    cout<<"enter secound number:\n";
    cin>>n2;
    int gcd=1;

    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout<<"greatest common factor:"<<gcd;
    return 0;
}