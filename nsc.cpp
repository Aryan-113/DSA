#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(4);
    q.push(6);
    q.push(3);
    //cout<<q.front();

    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
    cout<<endl;
    return 0;
}