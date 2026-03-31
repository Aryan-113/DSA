#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ld;
    cout<<"enter n:\n";
    cin>>n;
    int og=n;
    int arm=0;
    int digit=int(log10(n)+1);
    while(n>0){
        ld=n%10;
        n=n/10;
        arm=arm+pow(ld,digit);
    }
    cout<<arm<<endl;
    if(og==arm) cout<<"armstrong number\n";
    else cout<<"not an armstrong number\n";
    return 0;
}