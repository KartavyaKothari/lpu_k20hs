#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,5,1,6,3,4,5,6,7};
    sort(arr,arr+9,greater<int>());

    // vector<int> arr = {3,4,56,5,3,2};
    // sort(arr.begin(),arr.end());

    for(int i = 0 ; i < 9 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}