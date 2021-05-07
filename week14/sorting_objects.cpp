#include<bits/stdc++.h>
using namespace std;

int sum_dig(int n){
    int sum = 0;

    while(n>0){
        sum+=n%10;
        n/=10;
    }

    return sum;
}

bool cmp(int a, int b){
    return sum_dig(a)<sum_dig(b);
}

int main(){
    vector<int> arr = {39,1117,99,1111111,11,1000000};
    sort(arr.begin(), arr.end(),cmp);

    for(int ele: arr){
        cout<<ele<<" ";
    }

    return 0;
}