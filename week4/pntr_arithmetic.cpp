#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    // int *arr;

    // arr[i] == *(arr+i)
    for(int i = 0 ; i < 5 ; i++){
        cout<<*(arr+i)<<endl;
    }

    int *ptr = arr+4;
    // cout<<*ptr;

    for(int i = 0 ; i < 5 ; i++){
        cout<<*(ptr-i)<<endl;
    }   

    // datatype *ptr;
    // ptr+n == ptr + sizeof(datatype)*n

    return 0;
}