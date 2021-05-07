#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

void bubble_sort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = i+1 ; j < arr.size() ; j++){
            if(cmp(arr[i],arr[j])){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    vector<int> arr = {3,66,22,55,1,66,8,12};
    // sort(arr.begin(), arr.end(),cmp);

    bubble_sort(arr);

    for(int ele: arr){
        cout<<ele<<" ";
    }

    return 0;
}