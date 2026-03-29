#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int main(){
    // vector<int> v={1,2,3,4,5};
    // //vector iterator
    // vector<int>::iterator it;
    // for(it=v.begin(); it!= v.end();it++){
    //     cout<<*(it)<<endl;
    // }

    stack<int> s;
    s.push(5);
    s.emplace(2);
    cout<<s.empty()<<endl;
    cout<<s.top();
    return 0;
}