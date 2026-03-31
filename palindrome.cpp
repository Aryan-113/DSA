#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=1221;
    int last_digit;
    int og=n;
    int num=0;
    while(n>0){
        last_digit=n%10;
        n=n/10;
        num=(num*10)+last_digit;
    }
    cout<<num<<endl;

    if(num == og) cout<<"true";
    else cout<<"false";
    return 0;
}