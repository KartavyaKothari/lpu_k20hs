#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[10][10],arr2[10][10],res[10][10];

    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            res[i][j] = arr1[i][j]+arr2[i][j];
        }
    }

    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}