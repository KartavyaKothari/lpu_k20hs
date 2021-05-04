#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {5,2,7,4,5,2};
    list<int> lst = {7,5,1,3,2,6,7};

    sort(arr.begin(),arr.end());
    lst.sort(); 

    for(int i: arr){
        cout<<i<<" ";
    }  

    cout<<endl;

    for(int i: lst){
        cout<<i<<" ";
    }  

    cout<<endl;

    return 0;
}