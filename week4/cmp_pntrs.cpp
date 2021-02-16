#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    int *ptr1 = arr+3;
    int *ptr2 = arr+1;

    if(ptr1==ptr2){
        cout<<"Equal";
    }else if(ptr1<ptr2){
        cout<<"Less";
    }else{
        cout<<"more";
    }


    return 0;
}