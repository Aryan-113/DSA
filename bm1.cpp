#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //7*1000+7*100+8*10+9
    // int a0=n/1000;
    // int a1=-(a0*1000-n)/100;
    // int a2=-(a1*100+a0*1000-n)/10;
    // int a3=-(a1*100+a0*1000+a2*10-n);

    // cout<<a0<<endl;
    // cout<<a1<<endl;
    // cout<<a2<<endl;
    // cout<<a3<<endl;
    
    //solved from striver
    int last_digit;
    int og=n;
    int count=0;
    while(n>0){
        last_digit=n%10;
        n=n/10;
        count++;
    }
    //time complexity=O(log10 n)
    //with wathever is divides will be the log base time complexity
    //eg n=n/2, tc=O(log2 n)
    cout<<"the number of digits are:"<<count<<endl;

    int num=int(log10(og)+1);
    cout<<num;

    return 0;
}