#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=431020;
    int last_digit;
    while(n>0){
        last_digit=n%10;
        n=n/10;
        if(last_digit!=0) cout<<last_digit;
    }
    return 0;
}