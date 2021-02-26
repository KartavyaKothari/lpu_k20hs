#include<bits/stdc++.h>
using namespace std;

void print_arr(int *arr, int n){
    for(int i = 0 ; i < n ; i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int arr2[20];

    for(int i = 0 ; i < 20 ; i++){
        arr2[i] = i;
    }

    print_arr(arr2,10);
    return 0;
}