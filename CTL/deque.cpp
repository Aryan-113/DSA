#include<iostream>
#include<deque>

//deque-double ended queue
using namespace std;
int main(){
    deque<int> d;
    d.push_back(4);
    d.push_front(2);
    for(auto val:d){
        cout<<val<<endl;
    }
    return 0;
}