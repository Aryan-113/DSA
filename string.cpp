#include<iostream>
#include<string>
using namespace std;

//pass by value
//copy of original is sent and orignal remains unchanged
void timepass(string s){
    s[0]= 'g';
    cout<<s<<endl;
}

//pass by reference
//original location is sent and the original word changes
void timefail(string &s){
    s[0]= 'g';
    cout<<s<<endl;
}

int main(){
    string sr = "rocket";
    timepass(sr);
    cout<<"pass by value:(original remains same):"<<sr<<endl;
    cout<<"\n";

    timefail(sr);
    cout<<"pass by reference:(original changes):"<<sr<<endl;
    cout<<endl;


    /*
    string sr;
    getline(cin,sr);
    cout<<sr;
    */
    return 0;
}