// print n times using recursion

//print numbers linearly fro 1 to n
#include<iostream>
using namespace std;

void f(int i,int n){
if(i>n){
    return; 
}
else{
cout<<"yooo"<<endl;
i++;
f(i+1,n);
}
}

void f2(int c,int n){
    if(c>n) return;
    else{
        cout<<c<<endl;
        f2(c+1,n);
    }
}
int main(){
    int n;
    cin>>n;
    //f(1,n);
    f2(1,n);
    return 0;
}