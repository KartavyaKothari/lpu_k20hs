#include<bits/stdc++.h>
// #include<vector>
using namespace std;

void display(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // vector<int> arr = {1,2,3,4};
    // vector<int> arr;
    vector<int> arr(5,2);
    cout<<arr.size()<<endl;

    display(arr);

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    display(arr);

    arr.pop_back();
    arr.pop_back();

    display(arr);
    cout<<arr.size()<<endl;

    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.front()<<endl;

    return 0;
}