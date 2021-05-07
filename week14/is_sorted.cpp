#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    vector<int> arr = {5,4,3,2,1};

    if(is_sorted(arr.begin(), arr.end(),cmp)){
        cout<<"Arr is sorted"<<endl;
    }else{
        cout<<"Arr is not sorted"<<endl;
    }

    return 0;
}