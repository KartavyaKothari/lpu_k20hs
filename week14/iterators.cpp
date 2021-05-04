#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ;  i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void display_it(vector<int> &arr){
    vector<int>::iterator itr;

    for( itr = arr.begin() ; itr != arr.end() ; itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void display_it_rev(vector<int> &arr){
    vector<int>::reverse_iterator itr;

    for( itr = arr.rbegin() ; itr != arr.rend() ; itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> arr = {1,2,3,4,45};
    // list<int> l_list = {10,20,30,40,50};
    display_it_rev(arr);
}