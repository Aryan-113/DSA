//palindrome
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=122221;
    int ld;
    int og=n;
    int num=0;
    while(n>0){
        ld=n%10;
        n=n/10;
        num=num*10+ld;
    }
    if(og == num){
        cout<<"palindrome";
    }
    else cout<<"not palindorme";
    return 0;
}