#include<bits/stdc++.h>
using namespace std;

template <class MYTYPE> 
MYTYPE sum_arr(MYTYPE arr[], int size, MYTYPE val){
    MYTYPE sum = val;

    for(int i = 0 ; i < size ; i++){
        sum+=arr[i];
    }

    return sum;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    double arr_d[] = {1.1,2.12,3.6,4.23,5.9,6.12,7.31,8.54,9.82,10.17};
    string arr_s[] = {"This ","is ","clear."};

    cout<<sum_arr<int>(arr,10,0)<<endl;
    cout<<sum_arr(arr_d,10,0.0)<<endl;
    // string val = "";
    cout<<sum_arr<string>(arr_s,3,"")<<endl;
    
    return 0;
}