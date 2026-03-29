/*
main components:
containers:
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    
    //ITERATORS
    //to find particular element in a vector

    vector<int>::iterator it = v.begin(); //it is just a name
    //v.begin() points at the location of the first element that is 1 in this case

    it++;
    cout<<*(it)<<" \n";

    vector<int>::iterator ot =v.end();
    //v.end doesnt give the last element but location of after the last element
    ot--;
    cout<<*(ot)<<" \n";

    return 0;
}